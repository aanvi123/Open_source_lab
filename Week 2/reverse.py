with open("sample.text", "r") as file:
     lines = file.readlines()
for line in reversed(lines):
      print(line.strip())