# Write your MySQL query statement below
# Create table If Not Exists Products (product_id int, low_fats ENUM('Y', 'N'), recyclable ENUM('Y','N'))
SELECT product_id from Products where low_fats = 'Y' and recyclable = 'Y';