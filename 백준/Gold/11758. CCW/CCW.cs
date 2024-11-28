using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodingStudy_CS.Week_15
{
    using tu = Tuple<int, int>;
    internal class Program
    {
        public static void Main(string[] args)
        {
            string[] input1 = Console.ReadLine().Split(' ');
            string[] input2 = Console.ReadLine().Split(' ');
            string[] input3 = Console.ReadLine().Split(' ');
            tu p1 = new tu(int.Parse(input1[0]), int.Parse(input1[1]));
            tu p2 = new tu(int.Parse(input2[0]), int.Parse(input2[1]));
            tu p3 = new tu(int.Parse(input3[0]), int.Parse(input3[1]));

            long ccw = CCW(p1, p2, p3);
            if(ccw < 0)
                Console.WriteLine(-1);
            else if(ccw > 0)
                Console.WriteLine(1);
            else
                Console.WriteLine(0);
        }

        static long CCW(tu p1,tu p2,tu p3)
        {
            // x1 x2 x3 x1
            // y1 y2 y3 y1
            return p1.Item1 * p2.Item2 + p2.Item1 * p3.Item2 + p3.Item1 * p1.Item2
            - p2.Item1 * p1.Item2 - p3.Item1 * p2.Item2 - p1.Item1 * p3.Item2;
        }
    }
}
