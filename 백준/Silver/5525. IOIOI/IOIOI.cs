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
            int N = int.Parse(Console.ReadLine());
            int M = int.Parse(Console.ReadLine());
            string S = Console.ReadLine();

            int count = 0;
            int startI = 0;
            while(true)
            {
                int tmp = 0;
                int beforeI = startI;
                char bc = ' ';
                for (int i = startI; i < M; i++)
                {
                    if (bc == 'O' && S[i] == 'I')
                    {
                        if (tmp == 1)
                            startI = i;
                        if (tmp == N)
                        {
                            count++;
                            tmp = 0;
                            break;
                        }
                    }
                    else if (bc == 'I' && S[i] == 'O')
                    {
                        tmp++;
                    }
                    else
                    {
                        tmp = 0;
                    }
                    bc = S[i];
                }

                if (startI == beforeI)
                    break;
            }
            Console.WriteLine(count);
        }
    }
}
