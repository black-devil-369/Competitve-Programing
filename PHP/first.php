<?php
$name = "Ajay Chauhan"; // variable declaration
$age = 19;
$height = 5.6;
echo "My name is :$name \n"; // echo is used for output on screen
echo " My age is : $age \n";
echo " My height is : $height \n ";
function mytest(){   // function declaration
    $loop = 43;
    echo"$loop";
}
mytest();
// Creating an arrays
$input_array = array(1,3,5,2,6);
print_r(array_chunk($input_array,2));
?>