import logo from './logo.svg';
import './App.css';
import Factorial from './comp/Factorial';
import EventsDemo from './comp/EventsDemo';
import ClassDemo from './classComp/ClassDemo';
import Radio from './classComp/Radio';
import FromViewToComp from './classComp/FromViewToComp';
import ParentComponent from './comp/ParentComponent';
import UserDetails from './comp/UserDetails';
import UseEffectDemo from './comp/useEffectDemo';
import DisplayData from './comp/DisplayData';
import UseStaet from './comp/adi/UseStaet';
import Callsadi from'./comp/adi/Mount';
import AxiosReq from './comp/adi/AxiosReq';
import UseRefDemo from './comp/adi/UseRefDemo';
import RandomPass from './comp/adi/RandomPass';
import LoginForm from './comp/adi/LoginForm';
import PasswordGenerator from './comp/adi/PasswordGenerator';
import Counter from './ErrorBoundry/Counter';
import ErrorBoundary from './ErrorBoundry/ErrorBoundry';
import Context, { useUser } from './Context/Context';
import ContextDemo from './Context/ContextDemo';
import { BrowserRouter, Link, Route,Routes } from 'react-router-dom';
import { useState } from 'react';

function App() {
  return (
    <div className="App">
      {/* <Factorial num="5"></Factorial>
      <EventsDemo/> */}
      {/* <ClassDemo color="yello"/> */}
      {/* <Radio/> */}
      {/* <FromViewToComp/> */}
      {/* <ParentComponent/> */}
      {/* <UserDetails/> */}
      {/* <UseEffectDemo/> */}
      {/* <DisplayData/> */}
      {/* <UseStaet/> */}
      {/* <Callsadi color="blue"/> */}
      {/* <AxiosReq/> */}
      {/* <UseRefDemo/> */}
      {/* <RandomPass/> */}
      {/* <LoginForm/> */}
      {/* <PasswordGenerator/> */}
      {/* <ErrorBoundary>
            <Counter value={1}/>
      </ErrorBoundary> */}
      <BrowserRouter>
          <nav>
            <ul>
              <li><Link to='/'>Counter</Link></li>
             <li> <Link to='/login'>Login page</Link></li>
             <li><Link to='fetch'>FetchData</Link></li>
            </ul>
          </nav>
          
          <Routes>
            <Route path='/' element={<ContextDemo/>}/>
            <Route path='/login' element={<LoginForm/>}/>
            <Route path='/fetch' element={<AxiosReq/>}/>
          </Routes>
      </BrowserRouter>
    </div>
  );
}

export default App;