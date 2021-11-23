# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                | Exp I/P | Exp O/P                     | Actual O/P                  | Type of Test      |
| ------ | ------------------------------------------ | ------- | --------------------------- | --------------------------- | ----------------- |
| H_01   | Calculating Total Bill                     | 140     | 165.2                       | 165.2                       | Requirement Based |
| H_02   | When user enter option which is not listed | ---     | Give message invalid option | Give message invalid option | Scenario Based    |
| H_03   | When no saved invoices to show             | ----    | Show no invoice message     | Show no invoice message     | Scenarion based   |

## Low Level Test Plan

---

| TestID | Description                        | Exp I/P | Exp O/P | Actual O/P | Type of Test      |
| ------ | ---------------------------------- | ------- | ------- | ---------- | ----------------- |
| L_01   | Calculating Particular Item Bill   | 5 , 27  | 135     | 135        | Requirement Based |
| L_02   | Calculating Bill with 10% Discount | 135     | 121.5   | 121.5      | Requirement Based |
| L_03   | Calculating Bill with 18% GST      | 121.5   | 143.37  | 143.37     | Requirement Based |
