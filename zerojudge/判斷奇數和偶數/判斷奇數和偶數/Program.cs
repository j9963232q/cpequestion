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
            int keyin, k;
            Console.Write("請輸入一個整數:");
            keyin = int.Parse(Console.ReadLine());
            k = keyin;
            if (k % 2 == 0)
            {
                Console.WriteLine("{0}為偶數", k);
            }
            else
            {
                Console.WriteLine("{0}為奇數", k);
            }
            Console.Read();

        }
    }
}
