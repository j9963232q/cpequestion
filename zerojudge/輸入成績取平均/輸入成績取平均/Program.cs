using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int k, i, sum = 0, average;
            Console.Write("欲輸入的成績筆數:");
            k = int.Parse(Console.ReadLine());
            if (k >= 1)
            {
                int[] score = new int[k];
                for (i = 1; i <= k; i++)
                {
                    Console.Write("請輸入第{0}筆成績:",i);
                    score[i - 1] = int.Parse(Console.ReadLine());
                }
                for (i = 1; i <= k; i++)
                {
                    sum += score[i - 1];
                }
                average = sum / k;
                Console.WriteLine("================");
                Console.WriteLine("全部平均={0}", average);
            }
            else
            {
                Console.WriteLine("================");
                Console.WriteLine("{0}筆資料沒有平均", k);
            }
            Console.Read();

        }
    }
}
