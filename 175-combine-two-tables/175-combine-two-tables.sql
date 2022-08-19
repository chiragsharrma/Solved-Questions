# Write your MySQL query statement below
select P.firstName,P.lastName,A.city,A.state
from Person AS P
LEFT JOIN Address AS A
ON P.personID = A.personID
