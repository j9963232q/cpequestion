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
            int k, i, sum = 1;//因為是"int","值的範圍有限",所以k不可輸入>30左右的值
            //否則數值不正確,不然就改用"double"
            Console.Write("請輸入一個數字:");
            k=int.Parse(Console.ReadLine());
            if (k >= 1)
            {
                for (i = 1; i <= k; i++)
                {
                    sum *= i;
                }
                Console.WriteLine("{0}!={1}", k, sum);
            }
            else if(k==0)
            {
                Console.WriteLine("{0}!=1", k);
            }
            else
            {
                Console.WriteLine("無{0}!這種東西", k);
            }
            Console.Read();


            


        }
    }
}
