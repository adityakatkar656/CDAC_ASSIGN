const f = require('fs');

f.readFile('data.txt','utf8',(err,data)=>{
    if(err){
    console.log(err);
    }else{
        console.log(data);
    }
})
