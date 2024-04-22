def myfunc(interview_list):
    output_list=[]
    for element in interview_list:
        if    isinstance(element,list):
            for inner_element in element:
              output_list.append(inner_element)
        else:     
          output_list.append(element)
    return output_list
        



if __name__=="__main__":
    print(myfunc([1,2,[1,2],3,4,[5,7]]))