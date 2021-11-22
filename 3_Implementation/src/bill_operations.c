#include "../inc/bill_operations.h"

float total_bill(float qty, float price){
    float total=0;
        total = qty * price;
    return total;
}

float net_total(float total){
    float dis = 0.1 * total;
    total = total - dis;
    return total;
}

float grand_total(float net_total){
    float gst = 0.18 * net_total;
    float grand_total = net_total + gst;
    return grand_total;
}

int save_bill( orders order){
    FILE *fp;
    fp = fopen("RestBill.txt","a+");
			fwrite(&order,sizeof(orders),1,fp);
            fclose(fp);
			if(fwrite != 0)
				return 1;
			else
			return -1;
}