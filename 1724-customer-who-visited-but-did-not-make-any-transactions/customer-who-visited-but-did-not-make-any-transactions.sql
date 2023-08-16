# Write your MySQL query statement below

# Create table If Not Exists Visits(visit_id int, customer_id int)
# Create table If Not Exists Transactions(transaction_id int, visit_id int, amount int)

# insert into Visits (visit_id, customer_id) values ('8', '54')
# insert into Transactions (transaction_id, visit_id, amount) values ('13', '2', '970')

SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans
FROM Visits v 
LEFT JOIN Transactions t 
ON v.visit_id = t.visit_id 
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id 
# ORDER BY v.customer_id ------not necessary condition