using System;
using System.IO;
using System.Text;

namespace CordingStudy_CS.Week_12.other
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(Console.OpenStandardInput());
            StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());
            StringBuilder sb = new StringBuilder();

            HashSet<int> hs = new HashSet<int>();

            // 입력을 받는다.
            int M = int.Parse(sr.ReadLine());
            while (M-- > 0)
            {
                string[] input = sr.ReadLine().Split(' ');

                int num = 0;
                if (input.Length == 2)
                    num = int.Parse(input[1]);

                switch (input[0])
                {
                    case "add":
                        hs.Add(num);
                        break;
                    case "remove":
                        hs.Remove(num);
                        break;
                    case "check":
                        int tmp = hs.Contains(num) ? 1 : 0;
                        sb.Append($"{tmp}\n");
                        break;
                    case "toggle":
                        if (hs.Contains(num))
                            hs.Remove(num);
                        else
                            hs.Add(num);
                        break;
                    case "all":
                        hs.Clear();
                        for (int i = 1; i <= 20; i++)
                            hs.Add(i);
                        break;
                    case "empty":
                        hs.Clear();
                        break;
                }
            }

            sw.Write(sb);
            sr.Close();
            sw.Close();
        }
    }
}
