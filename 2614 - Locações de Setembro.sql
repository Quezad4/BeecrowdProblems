select customers.name, rentals.rentals_date
from customers, rentals
where customers.id = rentals.id_customers and rentals.rentals_date between '2016-09-01' and '2016-09-30'
