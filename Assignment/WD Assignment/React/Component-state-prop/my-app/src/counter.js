// src/components/Counter.js
import logo from './logo.svg';
import React, { useState } from 'react';

// Define the Counter component
function Counter() {
  const [count, setCount] = useState(0);

  const increment = () => setCount(count + 1);
  const decrement = () => setCount(count - 1);
  const reset = () => setCount(0);



  return (
    <div style={{ textAlign: 'center', marginTop: '20px' }}>
      <h1>Counter App</h1>
      <h3>{count}</h3>
      <button onClick={increment} style={{ backgroundColor: 'green', color: 'white',padding: '10px 20px' }}>Increment</button>
      <button onClick={decrement} style={{ marginLeft: '10px', backgroundColor: 'red', color: 'white', padding: '10px 20px'}}>Decrement</button>
      {/* <button onClick={reset} style={{ marginLeft: '10px', padding: '10px 20px',backgroundColor: 'green', color: 'white' }}>Reset</button> */}
    </div>
  );
}

export default Counter;