using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CordingStudy_CS.Week11_CS
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());
            List<int> list = new List<int>();
            list.Add(0);
            list.Add(1);
            list.Add(2);
            list.Add(4);

            for(int i=4;i<11;i++)
            {
                //1. 이전 숫자의 경우에 +1 한 경우
                list.Add(list[i - 1] + list[i - 2] + list[i - 3]);
            }
            while(T-->0)
            {
                int n = int.Parse(Console.ReadLine());
                Console.WriteLine(list[n]);
            }
        }
    }
}
