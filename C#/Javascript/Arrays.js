function func(){
    var alpha = [1,2,3,4,6];
    let loop = ['Ajay', 'Chauhan',67];
    let num1 = [[53]];
    let num2 = [34,[67]];
    var ki_1 = [5,2,6,3,4];
    var l = ['A', 'B', 'C', 'D','F'];
    let w = ["Ajay","Chauhan","Jai", "Bhavani"];
    console.log(alpha.concat(loop));
    console.log(num1.concat(num2));
    console.log("New Arrays ="+w.copyWithin("Raju","Ram","Rohit"));
    loop.fill(534);//array.fill(value) method ;
    console.log(loop);
    loop.fill(42,1,3);
    console.log(loop);
    console.log("Ki_1 array before sorted");
    console.log(ki_1);
    console.log("Sorted the ki_1 arrays is");
    console.log(ki_1.sort());
}
func();