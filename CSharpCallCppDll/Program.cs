using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpCallCppDll
{
    class Program
    {
        [DllImport("CppDLL.dll", EntryPoint = "Test", CallingConvention = CallingConvention.Cdecl)]
        static extern int MyPlusTen(int a);
        static void Main(string[] args)
        {
            Console.WriteLine(MyPlusTen(100));
        }
    }
}
