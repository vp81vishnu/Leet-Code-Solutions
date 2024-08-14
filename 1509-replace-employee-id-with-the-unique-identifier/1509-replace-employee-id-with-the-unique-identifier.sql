select E.name,Eu.unique_id
from Employees as E
left join EmployeeUNI as Eu
on E.id=Eu.id