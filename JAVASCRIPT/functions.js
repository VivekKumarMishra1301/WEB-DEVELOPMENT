console.log("This is tutorial of the fubctions");
function greet(name){
    console.log(name + " is a good boy");
}

function sum(a,b,c){
    let d=a+b+c;
    return d;
    //This line will never execute(Unreachable code)
    //console.log("Function is returned")
}
let sumre=sum(1,2,3);
console.log(sumre)

let name="Vivek";
let name1="Sachin";
let name2="Rajan";
let name3="Code";
greet(name1);
greet(name2);
greet(name3);
greet(name);
// console.log(name+"is a good boy");
// console.log(name2+"is a good boy");
// console.log(name3+"is a good boy");
// console.log(name1+"is a good boy");

