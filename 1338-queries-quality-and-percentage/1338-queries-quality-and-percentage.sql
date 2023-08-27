# Write your MySQL query statement below
SELECT q.query_name,ROUND(AVG(q.rating/q.position),2) AS quality, 
      ROUND(COUNT(CASE WHEN q.rating < 3 THEN 1 END ) /
      COUNT(q.query_name)*100,2) AS poor_query_percentage 
FROM Queries q
GROUP BY q.query_name;