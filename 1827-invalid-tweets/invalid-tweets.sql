# Write your MySQL query statement below

# Create table If Not Exists Tweets(tweet_id int, content varchar(50))

# insert into Tweets (tweet_id, content) values ('1', 'Vote for Biden')

select tweet_id from TWEETS where char_length(content) > 15