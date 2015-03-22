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
            int k;
            int[] myary = new int[10];
            Console.WriteLine("請輸入10個數值:");
            for (k = 0; k < 10; k++)
            {
                Console.Write("{0}.第{1}個陣列元素:myary[{2}]=", k + 1, k + 1, k);
                myary[k] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine();
            Array.Sort(myary);
            Console.WriteLine("最大值={0},最小值={1}", myary[9], myary[0]);
            Console.Read();
        }
    }
}
