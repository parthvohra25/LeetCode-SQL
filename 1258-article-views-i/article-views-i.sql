# Write your MySQL query statement below

# Create table If Not Exists Views (article_id int, author_id int, viewer_id int, view_date date)

# insert into Views (article_id, author_id, viewer_id, view_date) values ('1', '3', '5', '2019-08-01')

select distinct author_id as id from Views where author_id = viewer_id order by id