using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CordingStudy_CS.Week_13.other
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            while(true)
            {
                int n = int.Parse(Console.ReadLine());
                if (n == 0)
                    break;

                // 팰린드롬 검사
                if(isRight(n) == true)
                    Console.WriteLine("yes");
                else
                    Console.WriteLine("no");
            }
        }
        
        static bool isRight(int n)
        {
            List<int> tmp = new List<int>();
            while(n > 0)
            {
                tmp.Add(n % 10);
                n /= 10;
            }

            for(int i=0,j=tmp.Count-1;i<tmp.Count;i++,j--)
            {
                if (tmp[i] != tmp[j])
                    return false;
            }
            return true;
        }
    }
}
