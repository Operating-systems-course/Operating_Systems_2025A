# בדיקות לטרמינל - מטלת הגשה במערכות הפעלה

קובץ זה מרכז **תרחיש בדיקה מלא** לטרמינל שפיתחתם במסגרת המטלה.  
המטרה היא לבדוק שהפקודות שיישמתם פועלות בצורה תקינה בכל המצבים, כולל רווחים בשמות קבצים, רווחים לפני ואחרי הפקודה, תווים מיוחדים וכדומה.

---

## 📂 שלב ראשון: בדיקות פקודות בסיסיות

### בדיקות תצוגה
```bash
ls
ls -l
       ls              # רווחים לפני ואחרי
pwd
whoami
```

---

## 📝 שלב שני: יצירת קבצים ותיקיות לבדיקה
```bash
echo "Hello, this is a test file." > file1.txt
echo "Another file with different content." > file2.txt
mkdir test_dir
echo "This is a file inside a directory." > test_dir/file3.txt
```

---

## 📄 שלב שלישי: בדיקות לפקודת `cp`
```bash
cp file1.txt file1_copy.txt
cp "file1.txt" "file1 copy.txt"
cp file2.txt test_dir/
ls -l
```

---

## 📁 שלב רביעי: בדיקות לפקודת `cd`
```bash
cd test_dir
pwd
cd ..
pwd
cd "test_dir"
pwd
```

---

## 🔚 שלב חמישי: בדיקות לפקודת `exit`
```bash
exit
       exit          # רווחים לפני ואחרי
```
> ⚠️ שים לב: exit אמור לסגור את הטרמינל, לכן יש להפעיל מחדש את הטרמינל לאחר בדיקה זו.

---

## 🗑️ שלב שישי: בדיקות לפקודת `delete`
```bash
delete file1_copy.txt
delete "file1 copy.txt"
delete test_dir/file3.txt
ls -l
```

---

## 🚚 שלב שביעי: בדיקות לפקודת `mv`
```bash
mv file2.txt file2_mvd.txt
mv "file2_mvd.txt" test_dir/
ls -l
ls test_dir
```

---

## ✍️ שלב שמיני: בדיקות לפקודת `echoppend`
```bash
echo "Appended text line." >> file1.txt
cat file1.txt
```

---

## ✏️ שלב תשיעי: בדיקות לפקודת `echowrite`
```bash
echo "Overwriting file content." > file1.txt
cat file1.txt
```

---

## 📖 שלב עשירי: בדיקות לפקודת `read`
```bash
read file1.txt
read "file that does not exist.txt"
```

---

## 🔢 שלב אחד-עשר: בדיקות לפקודת `wc`
```bash
wc -w file1.txt
wc -l file1.txt
wc -w "file that does not exist.txt"
```

---

## 🔗 שלב שניים-עשר: בדיקות לפקודת `mypipe`
```bash
ls -l | wc -l
cat file1.txt | wc -w
```

---

## 🧹 שלב אחרון: ניקוי סביבת העבודה (אופציונלי)
```bash
delete file1.txt
delete test_dir/file2_mvd.txt
delete test_dir
```

---

## ⚠️ הערות חשובות
- יש לבדוק כל פקודה **גם עם רווחים לפני ואחרי**.
- יש לבדוק פקודות עם **שמות קבצים המכילים רווחים**.
- מומלץ להריץ את כל הרצף הזה מתחילתו ועד סופו לאחר כל שינוי שביצעתם בקוד.

בהצלחה! 💪
