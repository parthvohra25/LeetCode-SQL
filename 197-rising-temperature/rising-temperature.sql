# Write your MySQL query statement below

# Create table If Not Exists Weather (id int, recordDate date, temperature int)
# insert into Weather (id, recordDate, temperature) values ('4', '2015-01-04', '30')

SELECT w1.id
FROM Weather w1, Weather w2
WHERE DATEDIFF(w1.recordDate, w2.recordDate) = 1 AND w1.temperature > w2.temperature;
