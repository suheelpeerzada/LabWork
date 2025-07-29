#open and close a file
f = open("file management\\index.html", mode="w")
f.write("""<html>
        <body>
            <h1> HI THIS WAS WRITTEN IN PYTHON</h1>
        </body>
</html>""")
print("done!")
f.close()
f = open("file management\\index.html", mode="r")
s = f.read()
print(s)
f.close()
print("Done!")