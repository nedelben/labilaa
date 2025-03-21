#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    FILE *f = fopen("script.py", "w");
    if (f) {
        fprintf(f, "import os\\n");
        fprintf(f, "php_code = '''<?php\\n");
        fprintf(f, "$js_code = 'console.log(\\\"Hello from JavaScript!\\\");';\\n");
        fprintf(f, "file_put_contents(\\\"script.js\\\", $js_code);\\n");
        fprintf(f, "shell_exec(\\\"node script.js\\\");\\n");
        fprintf(f, "shell_exec(\\\"bash script.sh\\\");\\n");
        fprintf(f, "?>''';\\n");
        fprintf(f, "with open('script.php', 'w') as f: f.write(php_code)\\n");
        fprintf(f, "os.system('php script.php')\\n");
        fclose(f);
    }


    f = fopen("script.sh", "w");
    if (f) {
        fprintf(f, "#!/bin/bash\\n");
        fprintf(f, "echo 'Perl is next!' > script.pl\\n");
        fprintf(f, "echo 'system(\\\"ruby script.rb\\\");' >> script.pl\\n");
        fprintf(f, "perl script.pl\\n");
        fclose(f);
        system("chmod +x script.sh");
    }

    
    f = fopen("script.rb", "w");
    if (f) {
        fprintf(f, "puts 'نهاية المتاهة!'\\n");
        fclose(f);
    }

   
    system("python3 script.py");
    
    return 0;
}
