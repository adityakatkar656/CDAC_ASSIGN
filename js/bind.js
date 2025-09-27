let obj = {
    fname: "ABC",
    show: function () {
        console.log("in show fun");
        console.log(this.fname)
    }
}
obj.show(); 
let f1 = obj.show
console.log(f1)
f1() 

let f2 = obj
f2.show() 

f1 = f1.bind(obj)
f1;  