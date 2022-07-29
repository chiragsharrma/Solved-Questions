# Write your MySQL query statement below
select distinct firstName ,lastName,city,state
from person left join address 
ON person.personID = address.personID
