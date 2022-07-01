using System;
namespace Inputs{
    class Sample{
        public static void Main(){
            Console.WriteLine("Enter your age please");
            string userInputs = Console.ReadLine();
            int age = Convert.ToInt32(userInputs);
            Console.WriteLine("Your Enter your age is :"+age);
        }

    }
}
/**using System;
 
namespace Sample
{
	class Test
	{
		public static void Main(string[] args)
		{
			string testString;
			Console.Write("Enter a string - ");
			testString = Console.ReadLine();
			Console.WriteLine("You entered '{0}'", testString);
		}
	}
}**/