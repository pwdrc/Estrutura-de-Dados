// email
// relatório técnico
// problema: pruduc_list (formato errado). campo de preço - precisa tá no formato 'item_price' e que o valor seja um número e não um texto
// novo array modificado: new_products_list 

var products_list = [
    {
      "id": "35",
      "name": "Miniatura Homem de Ferro",
      "price": "50.00"
    },
    {
      "id": "30",
      "name": "Miniatura Magneto",
      "price": "57.00"
    },{
      "id": "25",
      "name": "Miniatura Super Homem",
      "price": "37.00"
    },{
      "id": "71",
      "name": "Miniatura Bernard",
      "price": "71.00"
    },{
      "id": "56",
      "name": "Miniatura Batman",
      "price": "23.00"
    },
    {
      "id": "56",
      "name": "Miniatura Darth Vader",
      "price": "89.00"
    }];

console.log(products_list);

// muda o nome de "price" para "item_price"
var new_products_list = products_list.map(function(item) {
    return {
        id: item.id,
        name: item.name,
        item_price: item.price,
    }
});

// transforma o preço em número
new_products_list.forEach(item => {
  item.item_price = parseFloat(item.item_price);
})

console.log(new_products_list);
  