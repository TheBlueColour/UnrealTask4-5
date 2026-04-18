## TASK 5 - Communication between Unreal and a Http Request/CSV 

Within a website called Supabase i was able to create a callable datatable that I can call within Unreal through a Http Request, to retrieve the information within the table. The table consists of collums and rows, within the http request I am able to call which Row I want to read through it's ID number and then retrieve what is in that spot in the table.

The table:
![The Table](image.png)

The Http Request:

![Http Request](image-1.png)

The table information being called:

![The Table being called](VideoProject9.gif)

I was able to also create a CSV file of a table that is saved within a Data Table on the Unreal Project. In the Unreal Project I created a structure that is able to tell the Data Table what information the table is looking to use. I decided to structure it with multiple different variables. 

The Structure:

![Structure](image-2.png)

The CSV file:

![CSV file](image-3.png)

I create a Data table with the previous structure, and then import the CSV file into the data table:

![Data Table](image-4.png)