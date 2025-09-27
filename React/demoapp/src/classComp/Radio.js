import { Component } from "react";

export default class Radio extends Component{
    constructor(props){
        super(props);
        this.state = {"color": "red","data":"data"}
    }
     onchange = ()=>{
          this.setState({color:"blue"});
    }

    handleUpdate = (e)=>{
        console.log(e.target.value);
        switch(e.target.value){
            case "upper":
                this.setState({data: this.state.data.toUpperCase()});
                break;
                case "lower":
                    this.setState({data:this.state.data.toLowerCase()});
                    break;
                case "title":
                    this.setState({data:this.state.data.charAt(0).toUpperCase()
                         + this.state.data.slice(1).toLowerCase()});
                break;
        }
    }
    changeData = (e)=>{
        this.setState({data:e.target.value})
    }
    render(){
        return(
            <div>
                enter data <input type="text" onBlur={this.changeData}></input><br/>
                UpperCase <input type="radio" name="n"  value="upper" onClick={this.handleUpdate}></input><br/>
                LowerCase<input name="n" type="radio" value="lower" onClick={this.handleUpdate}></input><br/>
                TitleCase<input name="n" type="radio" value="title" onClick={this.handleUpdate}></input>
             
                <h1>{this.state.data}</h1>
                <h1>{this.state.color}</h1>
                <button onClick={this.onchange}>Change Color</button>
            </div>
        )
    }
}