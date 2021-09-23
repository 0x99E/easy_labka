function main(){
    var page = stage;
    console.log("Page is ", stage);
    console.log("AUthor ANDRIY MALYAVA! IPZ-13");
    switch(page){
        case "main_page":{
            console.log("Stage ", stage);
            var student = template["student_name"];
            console.log("Student ", student);
            $(".student_name").text(student);
        };

        case "purpose":{
            console.log("Stage ", stage);
            var purpose_1 = template["purpose_1"];
            var purpose_2 = template["purpose_2"];

            $(".purpose_1").text(purpose_1);
            $(".purpose_2").text(purpose_2);
            
        };

        case "task_page":{
            console.log("Stage ", stage);
            var task_2 = template["task_2"];
            var task_3 = template["task_3"];


            $(".task_2").html(task_2);
            $(".task_3").html(task_3);
        };

        case "analyze_page":{
            console.log("Stage ", stage);
            var analys_2 = template["analys_2"];
            var analys_3 = template["analys_3"];
            var my_variant = template["my_variant"];
            var zadacha_3 = template["zadacha_3"];
            var task_3 = template["task_3"];


            $(".analys_2").html(analys_2);
            $(".analys_3").html(analys_3);
            $(".my_variant").html(my_variant);
            $(".zadacha_3").html(zadacha_3);
        };
        
        case "conclusion_page":{
            console.log("Stage ", stage);
            var conclusion_1 = template["conclusion_1"];
            var conclusion_2 = template["conclusion_2"];


            $(".conclusion_1").html(conclusion_1);
            $(".conclusion_2").html(conclusion_2);

        };

    }
};
// AUTHOR MALYAVA ANDRIY IPZ_13
