# Write your MySQL query statement below

# Create table If Not Exists Sales (sale_id int, product_id int, year int, quantity int, price int)
# Create table If Not Exists Product (product_id int, product_name varchar(10))

# insert into Sales (sale_id, product_id, year, quantity, price) values ('1', '100', '2008', '10', '5000')
# insert into Product (product_id, product_name) values ('300', 'Samsung')

select p.product_name, s.year, s.price from Sales s 
left join 
Product as p on s.product_id = p.product_id