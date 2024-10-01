// src/components/ItemList.js
import React from 'react';
import Item from './Item';

const items = [
    { id: 1, name: 'Item 1' },
    { id: 2, name: 'Item 2' },
    { id: 3, name: 'Item 3' },
];

const ItemList = () => {
    return (
        <div>
            <h2>Items</h2>
            {items.map(item => (
                <Item key={item.id} item={item} />
            ))}
        </div>
    );
};

export default ItemList;
