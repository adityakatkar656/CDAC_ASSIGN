import React from "react";

export default function DisplayData(){
     const [data,setData] = React.useState("");
 
    const handleChange = (e)=>{
        setData(e.target.value)
    }

    return(
        <div>
         <input type="text" onBlur={(e) => handleChange(e) }></input>
         <p>{data}</p>
        </div>
    )
}