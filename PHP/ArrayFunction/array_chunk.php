<?php
// creating an array first
// syntax is |  $array_name = array(parameter1......)
$array_name = array("Ajay","Rahul","Uday","Akash");
// array_chunk(arrar_name,size for chunk,preserve_key)
// preseve_key are take boolean value
$result = array_chunk($array_name,2,true);
print_r($result);
?>