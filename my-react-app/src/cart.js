// src/components/Cart.js
import React, { useContext } from 'react';
import { CartContext } from '../context/CartContext';

const Cart = () => {
    const { cartItems, removeFromCart } = useContext(CartContext);

    return (
        <div>
            <h2>Cart</h2>
            <ul>
                {cartItems.map(item => (
                    <li key={item.id}>
                        {item.name}
                        <button onClick={() => removeFromCart(item.id)}>Remove</button>
                    </li>
                ))}
            </ul>
        </div>
    );
};

export default Cart;
