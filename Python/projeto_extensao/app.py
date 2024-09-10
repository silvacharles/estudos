from flask import Flask, render_template, request, redirect, url_for

app = Flask(__name__)

# Dados iniciais do projeto
parts_involved = []
activities = []

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/parts_involved', methods=['GET', 'POST'])
def parts_involved_page():
    global parts_involved
    if request.method == 'POST':
        name = request.form['name']
        role = request.form['role']
        parts_involved.append({'name': name, 'role': role})
        return redirect(url_for('parts_involved_page'))
    return render_template('parts_involved.html', parts=parts_involved)

@app.route('/add_activity', methods=['GET', 'POST'])
def add_activity():
    global activities
    if request.method == 'POST':
        title = request.form['title']
        description = request.form['description']
        date = request.form['date']
        activities.append({'title': title, 'description': description, 'date': date})
        return redirect(url_for('view_activities'))
    return render_template('add_activity.html')

@app.route('/view_activities')
def view_activities():
    return render_template('view_activities.html', activities=activities)

if __name__ == '__main__':
    app.run(debug=True)
