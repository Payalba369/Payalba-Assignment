// src/App.js
import React from 'react';
import ItemList from './components/ItemList';
import Cart from './components/Cart';

const App = () => {
    return (
        <div>
            <h1>Fake Cart API</h1>
            <ItemList />
            <Cart />
        </div>
    );
};

export default App;
