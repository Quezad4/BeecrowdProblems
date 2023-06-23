select movies.id, movies.name
from movies, prices
where id_prices = prices.id and prices.value < 2.0
