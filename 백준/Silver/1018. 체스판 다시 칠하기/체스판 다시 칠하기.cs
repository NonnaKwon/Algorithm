using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;

namespace CordingStudy_CS.Week_12.other
{
    // 좌표 y,x, 다음 비교대상
    using t = Tuple<int, int, bool>;
    internal class Program
    {
        static List<string> inputArr = new List<string>();

        static int N;
        static int M;

        //체스판 다시 칠하기(BFS)
        public static void Main(string[] args)
        {
            //입력
            string[] input = Console.ReadLine().Split(' ');
            N = int.Parse(input[0]);
            M = int.Parse(input[1]);

            // 초기화 & 입력
            for (int i = 0; i < N; i++)
                inputArr.Add(Console.ReadLine());

            // 풀기
            int answer = int.MaxValue;
            for(int i=0;i<N-7;i++)
            {
                for(int j=0;j<M-7;j++)
                {
                    int wCount = BFS('W',i,j);
                    int bCount = BFS('B',i,j);
                    int min = Math.Min(wCount, bCount);
                    if (answer > min)
                        answer = min;
                }
            }
            Console.WriteLine(answer);
        }

        static int BFS(char startC,int startY,int startX)
        {
            // 위, 아래, 왼, 오
            int[] moveX = { 0, 0, -1, 1 };
            int[] moveY = { -1, 1, 0, 0 };

            // 초기화
            int endY = startY + 8;
            int endX = startX + 8;
            bool isW = startC == 'W' ? true : false;
            int change = 0;
            Queue<t> q = new Queue<t>();
            List<List<bool>> isVisited = new List<List<bool>>();

            for (int i = 0; i < N; i++)
            {
                List<bool> tmp = new List<bool>();
                for (int j = 0; j < M; j++)
                    tmp.Add(false);
                isVisited.Add(tmp);
            }

            // 시작
            q.Enqueue(new t(startY, startX, isW));
            isVisited[startY][startX] = true;

            while(q.Count != 0)
            {
                t tmp = q.Peek();
                if (inputArr[tmp.Item1][tmp.Item2] == 'W')
                {
                    if (tmp.Item3 == false)
                        change++;
                }
                else
                {
                    if (tmp.Item3 == true)
                        change++;
                }

                for (int i=0;i<moveX.Length;i++)
                {
                    int X = tmp.Item2 + moveX[i];
                    int Y = tmp.Item1 + moveY[i];
                    if (X < startX || Y < startY || X >= endX || Y >= endY)
                        continue;
                    if(isVisited[Y][X] == false)
                    {
                        q.Enqueue(new t(Y, X, !tmp.Item3));
                        isVisited[Y][X] = true;
                    }
                }
                q.Dequeue();
            }

            return change;
        }
    }
}
