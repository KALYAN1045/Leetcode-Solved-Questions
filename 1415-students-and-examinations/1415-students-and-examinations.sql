# Write your MySQL query statement below
SELECT s.student_id, s.student_name, sb.subject_name, COUNT(e.subject_name) AS attended_exams 
FROM Students s
JOIN Subjects sb
LEFT JOIN Examinations e
ON s.student_id = e.student_id 
AND sb.subject_name = e.subject_name 
GROUP BY s.student_id, sb.subject_name 
ORDER BY student_id ASC, subject_name  ASC;
