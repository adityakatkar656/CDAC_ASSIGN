import { useState } from "react"
import Pg from "./Pg";
export default function UserDetails(){
        const [qualification,setQualification] = useState(null);
        const [name,setName] = useState(null);
        const [email,setEmail] = useState(null);
        const [changePage,setChangePage] = useState(false);
       
        const handlePage = ()=>{
            console.log("inside");
            setChangePage(true);
        }
        if(changePage && qualification == "Pg"){
            return(
                <Pg qualification={qualification} name={name} email={email}/>
            )
        }
    return(
        <div>
           enter name : <input type="text" onBlur={(e)=> setName(e.target.value)}></input><br/>
           enter email: <input type="mail" onBlur={(e)=> setEmail(e.target.value)}></input><br/>
           select : <select name="select" onChange={(e)=> setQualification(e.target.value)}>
            <option value="Graduate">Graduate</option>
            <option value="Pg">Pg</option>
            <option value="UnderGrad">UnderGrad</option>
           </select>
           <button onClick={handlePage}>Click</button>
        </div>
    )
}