# Write your MySQL query statement below
SELECT ROUND(
    (SELECT COUNT(delivery_id) FROM Delivery WHERE order_date = customer_pref_delivery_date)/
    (SELECT COUNT(delivery_id) FROM Delivery)*100,2
) AS immediate_percentage 
FROM Delivery
GROUP BY immediate_percentage;
