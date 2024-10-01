// src/components/Item.js
import React, { useContext } from 'react';
import { CartContext } from '../context/CartContext';

const Item = ({ item }) => {
    const { addToCart } = useContext(CartContext);

    return (
        <div>
            <h3>{item.name}</h3>
            <button onClick={() => addToCart(item)}>Add to Cart</button>
        </div>
    );
};

export default Item;
