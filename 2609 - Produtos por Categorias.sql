select categories.name, sum(products.amount)
from products, categories
where categories.id = products.id_categories
group by categories.id
having sum(amount) >0
