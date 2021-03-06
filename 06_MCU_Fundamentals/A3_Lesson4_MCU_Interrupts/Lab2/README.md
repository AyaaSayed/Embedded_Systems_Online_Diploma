[![image](https://drive.google.com/uc?export=view&id=1TgJJ-YaLPtFsn_FiDXYZEizTMyVUcDT4)](https://drive.google.com/drive/folders/1tz7vlVE90YczSdX64HhaGW2i-vmZtmsQ)

# Lab2 Snapshots (or [Click Here](https://drive.google.com/drive/folders/1tz7vlVE90YczSdX64HhaGW2i-vmZtmsQ)):

## Lab Objectives

![image](https://drive.google.com/uc?export=view&id=1sfEwO_ANIPfELvkeQcP59JnjydOo4Poi)

> We are going to use rising trigger interrupt

> We will be toggling GPIOA pin 13 state in the ISR

---

## Keil Simulation

> Hardware initialization step

[![image](https://drive.google.com/uc?export=view&id=1XLWtLcO6CJyX51oWgMjD6yud9rz4IsMg)](https://drive.google.com/file/d/1XLWtLcO6CJyX51oWgMjD6yud9rz4IsMg/view)

> Interrupt is generated by setting GPIOA pin 0 (Rising edge trigger)

[![image](https://drive.google.com/uc?export=view&id=1w0WQ5KQ7aMMSBh0l7lI81W9WEEweCvwK)](https://drive.google.com/file/d/1w0WQ5KQ7aMMSBh0l7lI81W9WEEweCvwK/view)

> GPIOA pin 13 state is toggled due to the ISR being executed

[![image](https://drive.google.com/uc?export=view&id=1fF_nwBQbjcmiWNAoaRHP7yjUupkVyWi8)](https://drive.google.com/file/d/1fF_nwBQbjcmiWNAoaRHP7yjUupkVyWi8/view)

> Clearing the interrupt request

[![image](https://drive.google.com/uc?export=view&id=1BlTF7dMeZSFVd0BTNkS2B0j0mBkWgnHP)](https://drive.google.com/file/d/1BlTF7dMeZSFVd0BTNkS2B0j0mBkWgnHP/view)

> Returning to the main context

[![image](https://drive.google.com/uc?export=view&id=1eMxYGSuxKlyAG23DSrxokHOsYp_1OJcG)](https://drive.google.com/file/d/1eMxYGSuxKlyAG23DSrxokHOsYp_1OJcG/view)

---

## Proteus Simulation

> Execution in the main context

[![image](https://drive.google.com/uc?export=view&id=1zHdI5sQwPMgkh9MOpC-MYlOTiZHLJgXN)](https://drive.google.com/file/d/1zHdI5sQwPMgkh9MOpC-MYlOTiZHLJgXN/view)

> Introducing an interrupt (by a button press then release)

[![image](https://drive.google.com/uc?export=view&id=10Aky6MuRB3a-B8Glyqkn2cRCCg7jAQe4)](https://drive.google.com/file/d/10Aky6MuRB3a-B8Glyqkn2cRCCg7jAQe4/view)

> Jumping to the main context again after servicing the device

[![image](https://drive.google.com/uc?export=view&id=15lvK5V7S0NvAoiJLtu82LDosrlZ5-BsC)](https://drive.google.com/file/d/15lvK5V7S0NvAoiJLtu82LDosrlZ5-BsC/view)
