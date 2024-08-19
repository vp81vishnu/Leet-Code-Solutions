select e1.employee_id,e1.name,count(e1.employee_id) as reports_count,round(avg(e2.age),0) as average_age
from Employees as e1
cross join Employees as e2
on e1.employee_id=e2.reports_to
group by e1.employee_id
order by e1.employee_id