#!/bin/bash
echo -e "#!/bin/bash\necho \"\$(cat /tmp/gm_numbers)\"" > /tmp/gm
chmod +x /tmp/gm
