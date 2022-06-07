let globalvariable = "This is global Variable"
function fun(){
    let localvarialbe = "This is local Variable"
    let num = 534;
    let str = "Ajay Chauhan";
    let  f= 35.43;
    let loop = 'True';
    console.log(localvarialbe);
    console.log(globalvariable);
    console.log(num,",", str , ",", f, "," ,loop);
    console.log(typeof(num));  
    console.log(typeof(str));
    console.log(typeof(f));
    console.log(typeof(loop));
}
function fun2(){
    let a = 53, b= 34, c=37, d = 43, e=42, f=56;
    console.log("Evaluate a+b/c*d-f%e = ",a+b/c*d-f%e);
    console.log("Subtraction a-b = ", a-b);
    console.log("Addition e+f = ", e+f);
    console.log("Multiply d*e = ", d*e);
    console.log("Dividing f/c = ",f/c);
    console.log("Modulus e%b = ", e%b);

}
fun();
fun2();
/**
 * 1) innerHTML: It is used to access an element. It defines the HTML content.

Syntax:

document.getElementById(id)

   2: document.write(): It is used for testing purpose.

Syntax:

document.write()
 
  3):  window.alert():It displays the content using an alert box.

Syntax:

window.alert()

4): console.log(): It is used for debugging purposes.

Syntax:

console.log()
 */