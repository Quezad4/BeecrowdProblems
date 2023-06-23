select customers.name
from customers, legal_person
where legal_person.id_customers = customers.id and legal_person.cnpj is not null
