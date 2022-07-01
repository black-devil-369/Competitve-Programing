  // Literal Object
let person = {
    first_name:'Ajay',
    last_name:'Chauhan',

    getFuntion:function(){
        return (`The name of person is ${person.first_name} ${person.last_name}`);
    },
    phone_number:{
        mobile:'4347',
        land_line:'6942'
    }
}
console.log(person.getFuntion());
console.log("Landline number = "+person.phone_number.land_line);

// Using Object Construture
 
function king (first_name,last_name){
    this.first_name =first_name;
    this.last_name =last_name;
}
    // creating new object of person object
    let person1 = new king("Ajay","chauhan");
    let person2 = new king("Anjali","Chauhan");
    console.log(person1.first_name +" " +person1.last_name);
    console.log(`${person2.first_name} ${person2.last_name}`);


// using Object.create() method

const coder={
    isStudying:'false',
    printIntrodtion:function(){
        console.log(`My name is ${this.name}. Am I studying: ${this.isStudying}`);
    }
}
const me = Object.create(coder);
me.name ="Ajay Chauhan";
me.isStudying = 'True';
me.printIntrodtion();

