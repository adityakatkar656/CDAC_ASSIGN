function EventsDemo(){
    
     var handelchange = (event)=>{
             console.log(event.target.value);
     }
    return(
        <div>
           <input type="text" name="a" placeholder="enter number" onChange={(event)=> handelchange(event)}></input>
           <input type="text" name="b" placeholder="enter number" onChange={(e)=> handelchange(e)}></input>
        </div>
    )
}
export default EventsDemo;