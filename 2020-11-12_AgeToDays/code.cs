/* Age To Days Challenge */

using System;

namespace HelloWorldApplication {
   class HelloWorld {
      static void Main(string[] args) {
         Console.WriteLine("Enter your age in years:");
         string input = Console.ReadLine();
         int age = Convert.ToInt32(input);
         Console.WriteLine($"You are {age * 365} years old");
      }
   }
}
