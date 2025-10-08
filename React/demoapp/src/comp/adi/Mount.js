import { Component } from "react";
export default class Callsadi extends Component{
    constructor(props){
    super(props);
    this.state={"color" : "red"}
    }
      col=()=>{
        this.setState({color:"yellow"});
    }
    static getDerivedStateFromProps(props,state){
        console.log(state.color);
        return {color:props.color};
     }
      componentDidMount(){
        console.log("mount");
      }
    render(){
        return(
            <div>
            
            <h1>{this.state.color}</h1>
            <button onClick={this.col}>clock</button>
            </div>
        )
    }

    
}