let f = require('fs');
let d = "sample data";
f.writeFile('data.txt',d,(err)=>{
    console.log(err);
})
//f.close();