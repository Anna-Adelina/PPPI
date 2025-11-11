    try {
        double result;

        switch (op) {
        case '+':
            result = calc.add(a, b);
            break;
        case '-':
            result = calc.subtract(a, b);
            break;
        case '*':
            result = calc.multiply(a, b);
            break;
        case '/':
            result = calc.divide(a, b);
            break;
        default:
            cout << "Невідома операція!" << endl;
            return 1;
        }

        cout << "Результат: " << result << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
