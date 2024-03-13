using System;
using System.Collections.Generic;

namespace algorithmCS
{
    class Program
    {
        static int N, M;
        static int[,] maze;
        static int[,] distance;
        static bool[,] visited;

        static void Main(string[] args)
        {
            int[] index = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            N = index[0];
            M = index[1];

            BFS(N, M);
        }

        static void BFS(int x, int y)
        {
            maze = new int[x, y];
            distance = new int[x, y];
            visited = new bool[x, y];

            for (int i = 0; i < x; i++)
            {
                string input = Console.ReadLine();
                for (int j = 0; j < y; j++)
                {
                    maze[i, j] = int.Parse(input[j].ToString());
                }
            }

            Queue<(int, int)> queue = new Queue<(int, int)>();

            int[] checkX = { 1, -1, 0, 0 };
            int[] checkY = { 0, 0, 1, -1 };

            queue.Enqueue((0, 0));
            visited[0, 0] = true;
            distance[0, 0] = 1;

            while (queue.Count != 0)
            {
                (int, int) currentNode = queue.Dequeue();

                for (int i = 0; i < 4; i++)
                {
                    int nextX = currentNode.Item1 - checkX[i];
                    int nextY = currentNode.Item2 - checkY[i];

                    if (nextX < 0 || nextY < 0 || nextX > N - 1 || nextY > M - 1)
                        continue;
                    if (maze[nextX, nextY] == 0 || visited[nextX, nextY] == true)
                        continue;

                    queue.Enqueue((nextX, nextY));
                    visited[nextX, nextY] = true;
                    distance[nextX, nextY] = distance[currentNode.Item1, currentNode.Item2] + 1;
                }
            }

            Console.Write(distance[N - 1, M - 1]);
        }
    }


}
