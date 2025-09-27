const s = require('http');
var url = require('url');

const server = s.createServer((req,res)=>{
    res.writeHead(200,{'content-type':'text/html'});
    let d = req.url;
    let d1 = url.parse(d,true).query;
    console.log(d1);
    
     res.write(`hello ${d1.name} ${d1.lName}`);
     res.end();
})

server.listen(8080,()=> console.log("server running"));