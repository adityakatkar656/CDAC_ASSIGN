import { useState } from "react"

export default function RandomPass(){
    const [pass,setPass] = useState("");
    
    const generatePass = (length)=>{
          let characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
           characters += "0123456789";
           var pass = "";
           for(var i=0;i<length;i++){
           var ind = Math.random() * characters.length;
             pass += characters.charAt(ind);
           }
           setPass(pass);
    }
    return(
        <>
        <input type="number" onChange={(e)=> generatePass(e.target.value)}></input>
        <h1>{pass}</h1>
        </>

    )
}