import { useContext } from "react";
import { userContext, useUser } from "./Context"

export default function ContextDemo(){
     const {data,setData} = useContext(userContext);
    return(
        <div>
           <h1>counter : {data}</h1>
           <button onClick={()=>setData((pre)=> pre+1)}>click</button>
        </div>
    );
}