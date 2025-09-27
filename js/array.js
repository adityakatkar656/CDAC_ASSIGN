var arr = [1,2,8,4,5];


arr.push(6);
arr.unshift(0);
arr.sort((a,b) => b-a);
arr.forEach((element,index) => {
    console.log(element , " index ",index);
});
 var arr2 = arr.map((ele)=> ele);
 console.log(arr2);

 var filetedArr = arr.filter((ele)=> ele%2 === 0);
 console.log(filetedArr);

 var eightFind = arr.find((ele)=> ele === 8);
 console.log(eightFind);

 