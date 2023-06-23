select customers.name, orders.id
from customers,orders
where orders.id_customers = customers.id and orders_date between '2016-01-01' and '2016-06-30'
