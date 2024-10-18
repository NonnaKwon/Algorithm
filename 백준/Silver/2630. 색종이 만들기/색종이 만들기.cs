using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CordingStudy_CS.Week_12.other
{
    internal class Program
    {
        static List<List<int>> list = new List<List<int>>();
        static int blue = 0;
        static int white = 0;
        public static void Main(string[] args)
        {
            //입력을 받는다.
            int N = int.Parse(Console.ReadLine());
            for(int i=0;i<N;i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                List<int> inputs = new List<int>();
                for(int j=0;j<N;j++)
                {
                    inputs.Add(int.Parse(input[j]));
                }
                list.Add(inputs);
            }


            //재귀함수를 호출한다. 각 x,y의 start, end
            Divide(0, N, 0, N);

            //답을 출력한다.
            Console.WriteLine(white);
            Console.WriteLine(blue);
        }

        public static void Divide(int startY,int endY,int startX, int endX)
        {
            //검사한다.
            int color = list[startY][startX];
            bool isSame = true;
            for(int i=startY;i<endY;i++)
            {
                for(int j=startX;j<endX;j++)
                {
                    if (list[i][j] != color)
                    {
                        isSame = false;
                        break;
                    }
                }
            }

            //같으면 색깔을 ++ 하고 return.
            if(isSame == true)
            {
                if (color == 1)
                    blue++;
                else
                    white++;
                return;
            }

            //틀린게 있으면 나눈다.
            Divide(startY, (startY + endY) / 2, startX, (startX + endX) / 2);
            Divide(startY, (startY + endY) / 2, (startX + endX) / 2, endX);
            Divide((startY + endY) / 2, endY, startX, (startX + endX) / 2);
            Divide((startY + endY) / 2, endY, (startX + endX) / 2, endX);
        }
    }
}
