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
            int N = int.Parse(Console.ReadLine());
            List<string> str = new List<string>();
            while(N-->0)
            {
                string input = Console.ReadLine();
                if(str.Contains(input) == false)
                    str.Add(input);
            }

            str.Sort((string a, string b) =>
            {
                if (a.Length == b.Length)
                    return a.CompareTo(b);
                return a.Length.CompareTo(b.Length);
            });

            // 출력
            foreach(string s in str)
                Console.WriteLine(s);
        }
    }
}
