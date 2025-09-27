var array = [2,4,22,4,5,33,66];
4
var max = array[0];
array.map((ele)=>{
    if(ele > max){
        max = ele;
    }
});
console.log(max);


array.sort((a,b)=> a-b);
console.log(array[array.length-1]);

var max2 = array[0];
array.forEach((ele) => {
    if(ele > max2){
        max2 = ele;
    }
})
console.log(max2);

const person = { name:"john"};
console.log(person);