# Write your MySQL query statement below

# Create table If Not Exists World (name varchar(255), continent varchar(255), area int, population int, gdp bigint)

# insert into World (name, continent, area, population, gdp) values ('Afghanistan', 'Asia', '652230', '25500100', '20343000000')


select name, population, area from World where area >= 3000000 or population >= 25000000