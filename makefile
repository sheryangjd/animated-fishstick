res:main.o add_dr.o add_manager.o add_patient.o call_patient.o del_dr.o del_patient.o doctor_load.o find_patient.o manager.o new_doctor.o new_manager.o timer.o write_cases.o readandwritedr.o readandwriteman.o readandwritepat.o
	gcc main.o add_dr.o add_manager.o timer.o add_patient.o call_patient.o del_dr.o del_patient.o doctor_load.o find_patient.o manager.o new_doctor.o new_manager.o write_cases.o readandwritedr.o readandwriteman.o readandwritepat.o 


add_dr.o:add_dr.c
	gcc -c add_dr.c
add_manager.o:add_manager.c
	gcc -c add_manager.c
add_patient.o:add_patient.c
	gcc -c add_patient.c
call_patient.o:call_patient.c
	gcc -c call_patient.c
del_dr.o:del_dr.c
	gcc -c del_dr.c
del_patient.o:del_patient.c
	gcc -c del_patient.c
doctor_load.o:doctor_load.c
	gcc -c doctor_load.c
find_patient.o:find_patient.c
	gcc -c find_patient.c
manager.o:manager.c
	gcc -c manager.c
new_manager.o:new_manager.c
	gcc -c new_manager.c
new_doctor.o:new_doctor.c
	gcc -c new_doctor.c
timer.o:timer.c
	gcc -c timer.c
write_cases.o:write_cases.c
	gcc -c write_cases.c
readandwritedr.o:readandwritedr.c
	gcc -c readandwritedr.c
readandwriteman.o:readandwriteman.c
	gcc -c readandwriteman.c
readandwritepat.o:readandwritepat.c
	gcc -c readandwritepat.c
main.o:main.c  # mian.o文件生成所需要的mian.c文件
	gcc -c main.c
clean:    # 需要手动调用
	rm *.o res

