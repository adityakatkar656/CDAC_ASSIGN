const express = require('express');
let users = require('./MOCK_DATA.json');
const fs = require('fs');
const p = require('url');
const app = express();
const port = 8000;
app.use(express.urlencoded({ extended: false }))
app.use(express.json());

app.get('/users',(req,res)=>{
    res.send(users);
})
app.get('/users/:id',(req,res)=>{
    let id = Number(req.params.id);
    const user = users.find(user => user.id == id);

    
    res.send(user);
})
app.get('/users/:id/:email',(req,resp)=>{
    let id = Number(req.params.id);
    let email = String(req.params.email);
    
    const user = users.find(user => user.id == id && user.email == email);
    if(user)
    resp.send(user);
    else
    resp.sendStatus(404);
})

// app.delete('/delete/:id',(req,res)=>{
//     let id = Number(req.params.id);
//     let ind = users.find(user => user.id === id);
//     const updatedUsers = users.filter(user => user.id !== id);
//     users = updatedUsers;
//     if(ind){
//       fs.writeFileSync('MOCK_DATA.json', JSON.stringify(updatedUsers, null, 2));
//        res.send("delet success");
//     }else{
//        res.send("deletion failed");
//     }

// })

app.delete('/deluser/:id', (req, res) => {
    const id = Number(req.params.id);  // 15
    // console.log(id);
    const userIndex = users.findIndex(
        user => user.id === id
    )
    if (userIndex === -1)
        return res.status(404).send('Data not found');

    const deletedItem = users.splice(userIndex, 1);
     fs.writeFileSync('MOCK_DATA.json', JSON.stringify(users, null, 2));
    return res.json("Dae ");
})
app.post('/adduser',(req,resp)=>{
   const data = req.body;
   console.log(data);
   users.push(data);
   console.log(data);
   fs.writeFileSync('MOCK_DATA.json', JSON.stringify(users, null, 2));
   resp.send('data added');
})
app.put('/edituser',(req,resp)=>{
     const updatedUser = req.body;
     const id = updatedUser.id;
     const index = users.findIndex(user => user.id == id);
    
     if(index == -1){
          resp.sendStatus(404);
     }
     users[index] = updatedUser;
     fs.writeFileSync('MOCK_DATA.json', JSON.stringify(users, null, 2));
     resp.send("data updated");
})

app.all('/all',(req,res)=>{
    console.log(req);
     return res.send("req");
})
app.listen(port,()=> console.log("server running"));
