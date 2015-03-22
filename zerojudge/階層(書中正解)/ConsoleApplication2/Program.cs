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
            int keyin, num, factorial = 1;
            Console.Write("請輸入一個整數:");
            keyin = int.Parse(Console.ReadLine());
            num = keyin;
            while (num >= 1)
            {
                factorial *= num;
                num -= 1;
            }
            Console.WriteLine("{0}!={1}", keyin, factorial);
            Console.Read();

        }
    }
}
