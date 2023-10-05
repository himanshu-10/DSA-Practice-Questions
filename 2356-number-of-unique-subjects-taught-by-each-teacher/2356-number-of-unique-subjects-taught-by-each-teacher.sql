# Write your MySQL query statement below
select teacher_id,count(distinct(subject_id)) 
as cnt
from Teacher
group by teacher_id;


# SELECT TEACHER_ID,COUNT(DISTINCT SUBJECT_ID) AS CNT FROM TEACHER GROUP BY TEACHER_ID;