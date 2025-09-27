let arr = ["sunday","Monday","Tewsday"];

arr.forEach((ele)=>{
    console.log(ele.substring(0,3).toUpperCase());
})
arr.map((ele)=> console.log(ele.substring(0,4).toUpperCase()));

