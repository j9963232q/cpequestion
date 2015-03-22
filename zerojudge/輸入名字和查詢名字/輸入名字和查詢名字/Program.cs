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
            int i, index;
            string keyin;
            string[] name = new string[5];
            for (i = 1; i <= 5; i++)
            {
                Console.Write("{0}.請輸入第{0}個名字:", i);
                name[i - 1] = Console.ReadLine();
            }
            Console.WriteLine("-------------------------");
            Console.Write("請輸入要搜尋的名字:");
            keyin = Console.ReadLine();
            index = Array.IndexOf(name, keyin);
            Console.WriteLine("查詢結果:");
            Console.WriteLine("=================");
            if (index < 0)
            {
                Console.WriteLine("無此資料");
            }
            else
            {
                Console.WriteLine("有{0}的資料", keyin);
            }
            Console.Read();




        }
    }
}
