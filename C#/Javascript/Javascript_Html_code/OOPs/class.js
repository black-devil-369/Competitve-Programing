class Name{
    constructor(name,email,phone){
        this.name = name;
        this.email = email;
        this.phone = phone;
    }
    getDetail(){
        console.log("Name =",this.name);
        console.log("Email =",this.email);
        console.log("Phone =",this.phone);
    }
}
// Another way to define a class in javacript
let Customer =class{
    constructor(name,salary){
        this.name = name;
        this.salary = salary;
    }
    getdetail(){
        console.log("name =",this.name);
        console.log(" salary =",this.salary);
    }
}
let c1 = new Customer("Raju",245300);
console.log(c1.getdetail());
let n1 = new Name("Ajay Chauhan","ajaychauhan1262@gmail.com",9648068163);
console.log(n1.getDetail());