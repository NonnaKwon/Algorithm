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
            string[] input = Console.ReadLine().Split(' ');

            int count = 1;
            bool isMixed = false;


            for(int i=0;i<input.Length;i++)
            {
                int num = int.Parse(input[i]);
                if (i == 0)
                {
                    if(num == 1)
                        count = 1;
                    else if (num == 8)
                        count = -1;
                    else
                    {
                        isMixed = true;
                        break;
                    }
                }else
                {
                    int tmp = int.Parse(input[i - 1]);
                    if(num != tmp + count)
                    {
                        isMixed = true;
                        break;
                    }
                }
            }

            if(isMixed == true)
            {
                Console.WriteLine("mixed");
            }else
            {
                if(count == 1)
                    Console.WriteLine("ascending");
                else
                    Console.WriteLine("descending");
            }
        }
    }
}
