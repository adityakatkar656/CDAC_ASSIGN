import  { useState,useEffect } from "react";

export default function UseEffectDemo(){
    const [count,setCount] = useState(1);
    const [table,setTable] = useState([]);

   useEffect(()=>{
       setCount(count + 1);
   },[]);

   useEffect(()=>{
    var newtable = [];
        for(var i=1;i<=10;i++){
          var sum = count*i;
          newtable.push(sum);
        }
        setTable(newtable);
   },[count])

    return(
        <div>
            <h1>{count}</h1>
             <div>
                <table>
                 {table.map((item,ind)=>{
                    return(
                            <tr>
                                <td>{item}</td>
                            </tr> 
                    )
                 })}
                 </table>
             </div>
            <button onClick={()=> setCount(count+1)}>Click</button>
        </div>
    )
}