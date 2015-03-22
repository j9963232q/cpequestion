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
            string[] name = new string[5] { "大老公的反擊", "小  長  今  ", "真愛滿天下   ", "  婆  家     ", "消費瓜瓜樂  " };
            int[] rating = new int[5] { 20, 14, 7, 9, 18 };
            Array.Sort(rating, name);
            Array.Reverse(name);
            Array.Reverse(rating);
            Console.WriteLine("   TVName            Rating  排名");
            Console.WriteLine("---------------------------------");
            for(k=0;k<=4;k++)
            {
                Console.WriteLine("{0}           {1}      {2}\n", name[k], rating[k], k + 1);
            }
            Console.Read();
        }
    }
}
