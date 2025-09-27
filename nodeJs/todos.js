const s = require('http');
var urll = require('url');

let todos = [
    { id: 1, task: 'Read Carefully' },
    { id: 2, task: 'Implement' }
];

const server = s.createServer((req,res)=>{
    const {method,url} = req;
    
    let d1 = urll.parse(url,true).pathname;
    console.log(d1);
     // /todos
    if (method == 'GET' && d1 == '/todos') {
        res.writeHead(200, { 'Content-Type': 'application/json' });
        res.end(JSON.stringify(todos));
    }
    const parts = d1.split('/');
    if(parts.length == 3){
      const id = parseInt(parts[2]);
      var todo = todos.find((todo)=> todo.id === id);

      if(todo){
      res.writeHead(200,{'Content-Type':'application/json'});
      res.end(JSON.stringify(todo));
        }
      else{
          res.writeHead(200,{'Content-Type':'application/json'});
          res.end("data not found");
      }
    }
})

server.listen(8080,()=> console.log("server running"));
