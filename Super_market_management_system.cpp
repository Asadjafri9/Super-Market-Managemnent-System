#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <class t1 = int, class t2 = double, class t3 = string>
class items
{
private:
    t3 category;
    t3 brand;
    t3 product_name;
    t1 product_id;
    t1 quantity;
    t2 price;
    static int i;

protected:
public:
    items() {}
    items(t3 product_name, t1 quantity, t2 price, t3 category)
    {
        this->category = category;
        this->product_name = product_name;
        this->price = price;
        this->quantity = quantity;
        this->product_id = i;
        i++;
    }
    void set_price(t2 price)
    {
        this->price = price;
    }
    void set_quantity(t1 quantity)
    {
        this->quantity = quantity;
    }
    t3 get_category()
    {
        return category;
    }
    t3 get_product_name()
    {
        return product_name;
    }
    t1 get_product_quantity()
    {
        return quantity;
    }
    t1 get_product_id()
    {
        return product_id;
    }
    t2 get_product_price()
    {
        return price;
    }
};
template <class t1, class t2, class t3>
int items<t1, t2, t3>::i = 1;

template <class t1 = int, class t2 = double, class t3 = string>
class electronics_items : public items<t1, t2, t3>
{
private:
    t1 no_of_months_warranty;

protected:
public:
    electronics_items(t1 no_of_months_warranty, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Electronics")
    {
        this->no_of_months_warranty = no_of_months_warranty;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class snacks_items : public items<t1, t2, t3>
{

private:
    t3 expire_date;

protected:
public:
    snacks_items(t3 expire_date, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Snacks")
    {
        this->expire_date = expire_date;
    }
    t3 get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    t1 get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class stationary_items : public items<t1, t2, t3>
{
private:
    t3 quality;

protected:
public:
    stationary_items(t3 quality, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Stationary")
    {
        this->quality = quality;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};

class super_market;

class stock_management
{

private:
    vector<electronics_items<int, double, string>> electronic_products;
    vector<string> electronic_item = {"laptop", "mobile", "keyoard"};
    vector<double> electronic_price = {100000, 50000, 2000};
    vector<int> electronic_quantity = {10, 20, 50};
    int num_of_electronic_items;
    vector<int> no_of_months_warranty = {12, 13, 6};

    vector<snacks_items<int, double, string>> snacks_products;
    vector<string> snacks_item = {"abc_biscuit", "abc_chocolate", "abc_colddrink"};
    vector<double> snacks_price = {100, 200, 150};
    vector<int> snacks_quantity = {80, 90, 100};
    int num_of_snack_items;
    vector<string> expire_dates = {"15-march-2024", "15-april-2024", "15-may-2024"};

    vector<stationary_items<int, double, string>> stationary_products;
    vector<string> stationary_item = {
        "pencil", "pen", "eraser"};
    vector<double> stationary_price = {50, 100, 50};
    vector<int> stationary_quantity = {100, 120, 150};
    int num_of_stationary_items;
    vector<string> stationary_quality = {"good", "medium", "good"};

protected:
public:
    stock_management()
    {
        num_of_electronic_items = 3;
        num_of_snack_items = 3;
        num_of_stationary_items = 3;
        add_items();
    }
    void add_items()
    {
        for (int i = 0; i < 3; i++)
        {
            electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));

            snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));

            stationary_products.push_back(stationary_items<int, double, string>(
                stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
        }
    }

    void manage_stock()
    {
        cout << "Managing stock of Electronic items: " << endl;
        int n;
        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
        cout << endl;
        cout << "Managing stock for snack items:" << endl;

        for (int i = 0; i < num_of_snack_items; i++)
        {
            if (snacks_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << snacks_products[i].get_product_id() << " Product name: " << snacks_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                snacks_products[i].set_quantity(n);
            }
        }
        cout << "Managing stock of Stationary items: " << endl;

        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
    }
    void change_price(string product_name, double new_price, string category)
    {
        if (category == "Electronics")
            for (int i = 0; i < num_of_electronic_items; i++)
            {
                if (electronic_products[i].get_product_name() == "product_name")
                {
                    electronic_products[i].set_price(new_price);
                }
            }

        else if (category == "Snacks")
            for (int i = 0; i < num_of_snack_items; i++)
            {
                if (snacks_products[i].get_product_name() == "product_name")
                {
                    snacks_products[i].set_price(new_price);
                }
            }

        else if (category == "Stationary")
            for (int i = 0; i < num_of_stationary_items; i++)
            {
                if (stationary_products[i].get_product_name() == "product_name")
                {
                    stationary_products[i].set_price(new_price);
                }
            }
    }

    void add_items(string name[], int quantity[], double price[], int warranty[], string category)
    {

        int store = num_of_electronic_items;
        for (int i = 0; i < name->size(); i++)
        {
            string store1 = name[i];
            int store2 = quantity[i];
            double store3 = price[i];
            int store4 = warranty[i];
            electronic_item.push_back(store1);
            electronic_quantity.push_back(store2);
            electronic_price.push_back(store3);
            no_of_months_warranty.push_back(store4);
            num_of_electronic_items++;
        }

        for (int i = store; i < num_of_electronic_items; i++)
        {
            electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));
        }
    }
    void add_items(string name[], int quantity[], double price[], string attribute[], string category)
    {
        if (category == "Snacks")
        {
            int store = num_of_snack_items;
            for (int i = 0; i < name->size(); i++)
            {
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                snacks_item.push_back(store1);
                snacks_quantity.push_back(store2);
                snacks_price.push_back(store3);
                expire_dates.push_back(store4);
                num_of_snack_items++;
            }

            for (int i = store; i < num_of_snack_items; i++)
            {
                snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));
            }
        }
        else if (category == "Stationary")
        {
            int store = num_of_stationary_items;
            for (int i = 0; i < name->size(); i++)
            {
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                stationary_item.push_back(store1);
                stationary_quantity.push_back(store2);
                stationary_price.push_back(store3);
                stationary_quality.push_back(store4);
                num_of_stationary_items++;
            }

            for (int i = store; i < num_of_snack_items; i++)
            {
                stationary_products.push_back(stationary_items<int, double, string>(
                    stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
            }
        }
    }

    friend class super_market;
};

class super_market
{

private:
protected:
public:
    void display_menu(stock_management &a)
    {
        cout << "Electronics items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "snacks items: " << endl;
        for (int i = 0; i < a.num_of_snack_items; i++)
        {
            cout << "Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "Stationary items: " << endl;
        for (int i = 0; i < a.num_of_stationary_items; i++)
        {
            cout << "Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << endl;
        }
        cout << endl;
    }
    void display_product_details(stock_management &a)
    {
        cout << "Electronics Items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product id: " << a.electronic_products[i].get_product_id() << " Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << " Product Quantity: " << a.electronic_products[i].get_product_quantity() << endl;

            cout << "Snacks Items: " << endl;
            for (int i = 0; i < a.num_of_snack_items; i++)
            {
                cout << "Product id: " << a.snacks_products[i].get_product_id() << " Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << " Product Quantity: " << a.snacks_products[i].get_product_quantity() << endl;
            }
            cout << "Stationary Items: " << endl;
            for (int i = 0; i < a.num_of_stationary_items; i++)
            {
                cout << "Product id: " << a.stationary_products[i].get_product_id() << " Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << " Product Quantity: " << a.stationary_products[i].get_product_quantity() << endl;
            }
        }
        }
    
    };

    int main()
    {
        stock_management stock;
        super_market market;
        market.display_menu(stock);
        return 0;
    }
    
