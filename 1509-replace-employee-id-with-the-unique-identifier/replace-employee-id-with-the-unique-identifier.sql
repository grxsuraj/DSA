# Write your MySQL query statement below
select 
E.name,
U.unique_id
from Employees as E
left join EmployeeUNI as U
on E.id=U.id