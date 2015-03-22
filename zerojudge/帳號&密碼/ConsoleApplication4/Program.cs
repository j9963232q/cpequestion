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
            int i=0,keyin2;
           
            string  keyin1;
            Console.WriteLine("----問題兒童同好會----\n");
            Console.WriteLine("  歡迎進入本網站   ");
            Console.WriteLine("===================\n");
            
                do
                {
                                  
                    Console.Write("  請輸入會員帳號:");
                    keyin1 = Console.ReadLine();
                    Console.Write("  請輸入密碼:");
                    keyin2 = int.Parse(Console.ReadLine());
                    if (keyin1 == "博碩" && keyin2 == 1234)
                    {
                        break;
                    }
                    if (i == 3)
                    {
                        break;
                    }
                    i++;    
                    Console.WriteLine("登入失敗,請重試");
                    Console.WriteLine();
                    }while (keyin1 != "博碩" || keyin2 != 1234);
                if (i < 3)
                {
                    Console.WriteLine("登入成功");
                }

                else
                {
                    Console.WriteLine("==登入失敗,且此帳號已鎖==");
                }

                Console.Read();

         


        }
    }
}
