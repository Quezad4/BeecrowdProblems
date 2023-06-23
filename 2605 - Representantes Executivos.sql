select products.name, providers.name
from products, providers
where id_categories = 6 and providers.id = id_providers 
