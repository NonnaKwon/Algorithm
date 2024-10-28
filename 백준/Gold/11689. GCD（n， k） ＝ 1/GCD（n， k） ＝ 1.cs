using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CordingStudy_CS.Week_12.other
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // gcd : 최대공약수. 근데 gcd = 1인거면 서로소
            long n = long.Parse(Console.ReadLine());
            
            // 예외처리
            if(n == 1)
            {
                Console.WriteLine(1);
                return;
            }

            // 초기화
            int size = (int)Math.Sqrt(n);
            List<bool> isCheck = new List<bool>();
            for (int i = 0; i <= size; i++)
                isCheck.Add(true);

            // 루트 n 보다 작은 소수들을 구한다.
            for(int i=2;i<=size;i++)
            {
                if (isCheck[i] == true)
                {
                    for(int j=i+i;j<=size;j+=i)
                    {
                        isCheck[j] = false;
                    }
                }
            }

            // n에서 나눈다.
            long answer = n;
            for(int i=2;i<=size;i++)
            {
                if (isCheck[i] == true && answer % i == 0)
                {
                    answer -= answer / i;
                    while (n % i == 0)
                        n /= i;
                }
            }

            // n이 남았다는것은 그만큼 못 뺐다는 뜻. 빼줘야한다.
            if(n>1) answer -= answer / n;
            Console.WriteLine(answer);
        }
    }
}
