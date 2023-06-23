select products.id, products.name
from products, categories
where categories.name like'super%' and products.id_categories = categories.id
