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
            int keyin1, keyin2,i,a,b;
                do{
            Console.Write("請輸入一個正整數:");
            keyin1 = int.Parse(Console.ReadLine());
            Console.Write("請輸入另一個正整數:");
            keyin2 = int.Parse(Console.ReadLine());
            if (keyin1<1 || keyin2 < 1)
            {
                Console.WriteLine("---------------------");
                Console.WriteLine("必須輸入正整數喔!!!\n");
            }
            }while(keyin1<1||keyin2<1);
            for (i = keyin1; i >= 1; i--)
            {
                a=keyin1;
                b=keyin2;
                if(a%i==0&&b%i==0)
                {
                    break;
                }
            }
            if(i>1)
            {
                Console.WriteLine("---------------------");
                Console.WriteLine("兩數之最大公因數為{0}",i);
            }
            else if(i==1)
            {
                Console.WriteLine("---------------------");
                Console.WriteLine("兩數為互值");
            }
             else
            {
                Console.WriteLine("無法運算");
            }
            Console.Read();



        }
    }
}
