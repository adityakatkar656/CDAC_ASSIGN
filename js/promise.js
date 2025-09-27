let num = process.argv[2];
let num1 = process.argv[3];
var pr  = new Promise((resolve,reject)=>{
      if(num >= 0 && num1 >= 0 ){
           resolve({num,num1});
      }else{
        reject();
      }
});
pr.then((data)=> console.log(data.num*data.num1),(err)=> console.log(err))
