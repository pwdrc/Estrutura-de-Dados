// email
// relatório
// nova variável: cartPricesInfo (valor total do carrinho e se o frete é gratis - +300 reais)
// atualizar a variável totalPrice
// freeShipping true se frete grátis
// utilizar o método reduce
// criar uma função que retorna os dois valores (totalPrice e freeShipping)

var cart_products = [{
    'product_id': 'IN2350',
    'product_name': 'Teclado Mecânico Rozar K600',
    'product_price': '650.00',
    'product_quantity': '1',
    'product_url': 'http://www.foo.com/p/IN2350',
    'product_category': 'peripherals',
    'product_brand': 'Rozar'
}, {
    'product_id': 'IN4566',
    'product_name': 'Monitor Gamer LED GL UltraWide 25"',
    'product_price': '1399.99',
    'product_quantity': '1',
    'product_url': 'http://www.foo.com/p/IN4566',
    'product_category': 'monitor',
    'product_brand': 'GL'
}, {
    'product_id': 'ES7112',
    'product_name': 'Pacote de Post-it Fenix 50 unidades',
    'product_price': '14.95',
    'product_quantity': '5',
    'product_url': 'http://www.foo.com/p/ES7112',
    'product_category': 'office',
    'product_brand': 'Fenix'
}, {
    'product_id': 'BR8810',
    'product_name': 'Miniatura Yoshi Haras',
    'product_price': '6.50',
    'product_quantity': '2',
    'product_url': 'http://www.foo.com/p/BR8810',
    'product_category': 'others',
    'product_brand': 'Haras'
}];

//var cartPricesInfo = { totalPrice: 1111, freeShipping: true };

var totalPrice = 0;
var freeShipping = false;


function moreInfo(obj) {
    for(let i = 0; i < obj.length; i++) {
        totalPrice += obj[i].product_price * obj[i].product_quantity;
    }

    if(totalPrice > 300)
        freeShipping = true;

    return  {totalPrice, freeShipping};
}

//console.log(moreInfo(cart_products));
//console.log(totalPrice);
//console.log(freeShipping);

var cartPricesInfo = moreInfo(cart_products);

console.log(`cartPricesInfo = { totalPrice: ${totalPrice}, freeShipping: ${freeShipping} };`);
console.log(`totalPrice = ${totalPrice};`);
console.log(`freeShipping = ${freeShipping};`);