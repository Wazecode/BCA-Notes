import pandas as pd 

df1 = pd.DataFrame({'Courses':
                   ['Spark','PySpark', 'Python', 'Pandas'],
                   'Fees':
                   [20000, 25000, 22000, 24000]})

df2 = pd.DataFrame({'Courses':
                   ['Pandas','Hadoop', 'Hyperion', 'Turtle'],
                   'Fees':
                   [21000, 23000, 27000, 29000]})

data = [df1, df2]

df = pd.concat(data)
print(df)
