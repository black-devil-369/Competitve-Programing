using System;
namespace AccessStructureElementUsingPointers{
    struct students{
        public int rollno;
        public double marks;
        public students(int r,double m){
            rollno = r;
            marks = m;
        }
    };
    class DriverProgram{
        public static void Main(string[] args){
            unsafe
            {
                students S1 = new students(3,62.9);
                students S2 = new students(6,24.4);
                students* S1_ptr = &S1;
                students* S2_ptr = &S2;
                Console.WriteLine("Roll Number: {0} Marks:{1}",S1_ptr->rollno,S1_ptr->marks);
                Console.WriteLine("Roll Number: {0} Marks: {1}",S2_ptr->rollno,S2_ptr->marks);
            }
        }
    }
}