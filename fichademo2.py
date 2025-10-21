import numpy as np

v1 = 2.0
i1 = 1/1000
k = 1000
r1 = 10*k
r2 = r3 = r4 = r5 = 5*k

ia = i1

A = np.array([[r2 + r3 + r4, -r4],
              [-r4, r4 + r5]], dtype=float)
b = np.array([r2 * ia - v1, v1], dtype=float)

ib, ic = np.linalg.solve(A, b)

v_cs = - (r1 * ia + r2 * (ia - ib))

p_r1 = r1 * ia**2
p_r2 = r2 * (ia - ib)**2
p_r3 = r3 * ib**2
p_r4 = r4 * (ib - ic)**2
p_r5 = r5 * ic**2

p_current_source = v_cs * i1
p_voltage_source = - v1 * (ib - ic)   # potência absorvida pela fonte de tensão

p_resistors_total = p_r1 + p_r2 + p_r3 + p_r4 + p_r5
p_sources_total = p_current_source + p_voltage_source
p_total = p_resistors_total + p_sources_total

print("ia, ib, ic (A):", ia, ib, ic)
print("v_current_source (V):", v_cs)
print("P_current_source (W, +absorbed):", p_current_source)
print("P_voltage_source (W, +absorbed):", p_voltage_source)
print("P_resistors_total (W):", p_resistors_total)
print("Global total power (W):", p_total)
