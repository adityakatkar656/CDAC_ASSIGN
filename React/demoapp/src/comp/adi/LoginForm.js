import { useState } from "react"

export default function LoginForm(){
     const [user,setUser] = useState(null);
     const [pass,setPass] = useState(null);
    
    const handleSubmit = ()=>{}
    return(
        <>
        <form onSubmit={handleSubmit}>
           Enter UserName : <input type="text" onChange={(e)=> setUser(e.target.value)}></input>
           Enter PassWord : <input type="password" onChange={(e) => setPass(e.target.value)}></input>
           <button type="submit">submit</button>
        </form>
        <h1>{user}</h1>
        <h1>{pass}</h1>
        </>
    )
}