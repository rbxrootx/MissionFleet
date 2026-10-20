// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422913 .. +0x8DB bytes.
extern "C" __declspec(naked) void FUN_00422913_00422913() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 66 C7 45 E8 00 00: mov word ptr [ebp - 0x18], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 23: jne 0x422980
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 48 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 5C 08 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 63h
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 2ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 1B 0E FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4229c8
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 1
        ; Exact mapped bytes 75 23: jne 0x4229eb
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 48 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F1 07 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 4E 02 00 00: mov ax, word ptr [ecx + edx + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 2C 02 00 00: mov cx, word ptr [edx + eax + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 01 2E 02 00 00: mov si, word ptr [ecx + eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, esi
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 08 30 02 00 00: mov si, word ptr [eax + ecx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, esi
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x422a77
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 BD 03 00 00: je 0x422e42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 41 02 00 00: mov word ptr [ecx + 2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 42 04 00 00: mov word ptr [edx + 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 8E C2 02 00 00: jle 0x422d67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8F 8B 02 00 00: jg 0x422d3f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 4E 02 00 00: mov cx, word ptr [edx + eax + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8E DB 01 00 00: jle 0x422cb4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        test edx, edx
        ; Exact mapped bytes 75 43: jne 0x422b3c
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        xor edx, edx
        mov esi, 3
        div esi
        add eax, 2
        imul ecx, eax
        mov eax, dword ptr [ebp - 10h]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x422cb4
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 1
        ; Exact mapped bytes 75 43: jne 0x422ba0
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 0A: movsx ecx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        xor edx, edx
        mov esi, 6
        div esi
        add eax, 0ch
        imul ecx, eax
        mov eax, dword ptr [ebp - 10h]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x422cb4
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 2
        ; Exact mapped bytes 75 43: jne 0x422c04
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 0A: movsx ecx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        xor edx, edx
        mov esi, 5
        div esi
        add eax, 5
        imul ecx, eax
        mov eax, dword ptr [ebp - 10h]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x422cb4
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 3
        ; Exact mapped bytes 75 37: jne 0x422c5c
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        shr edx, 1
        imul eax, edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 58: jmp 0x422cb4
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        cmp edx, 4
        ; Exact mapped bytes 75 37: jne 0x422cb4
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        shr eax, 1
        add eax, 0ah
        imul ecx, eax
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 23: jae 0x422ce8
        __asm _emit 0x73
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 45 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F4 04 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 8C 11 2C 02 00 00: mov cx, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 08: add cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 8C 10 2C 02 00 00: mov word ptr [eax + edx + 0x22c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x422d62
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 44 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x422e3d
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 23: jae 0x422dac
        __asm _emit 0x73
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 44 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 30 04 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        sub edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 84 08 2C 02 00 00: mov ax, word ptr [eax + ecx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 02: add ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 89 84 0A 2C 02 00 00: mov word ptr [edx + ecx + 0x22c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 2C 02 00 00: mov ax, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 1C: jge 0x422e3d
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 2C 02 00 00 00 00: mov word ptr [edx + eax + 0x22c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 03 00 00: jmp 0x423161
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 04: movsx edx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x04
        cmp edx, 0ah
        ; Exact mapped bytes 0F 85 EF 02 00 00: jne 0x423141
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 41 02 00 00: mov word ptr [ecx + 2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 04: movsx eax, word ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 0A 2E 02 00 00: mov si, word ptr [edx + ecx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 0F 8F 8E 02 00 00: jg 0x42311c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 04: movsx eax, word ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 0A 30 02 00 00: mov si, word ptr [edx + ecx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 0c8h
        imul eax, esi
        mov edx, dword ptr [ebp - 10h]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 23: jae 0x422ef6
        __asm _emit 0x73
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 43 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 E6 02 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 8C 11 2E 02 00 00: mov cx, word ptr [ecx + edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 2B 48 04: sub cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 8C 10 2E 02 00 00: mov word ptr [eax + edx + 0x22e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 30 02 00 00: mov cx, word ptr [edx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        xor esi, esi
        ; Exact mapped bytes 66 8B B4 11 30 02 00 00: mov si, word ptr [ecx + edx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, esi
        cdq
        mov ecx, 12ch
        idiv ecx
        add eax, 3
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 64 68 08 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp - 20h]
        test edx, edx
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x4230fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 30 02 00 00: mov dx, word ptr [eax + ecx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 8C 11 30 02 00 00: mov cx, word ptr [ecx + edx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 48 04: add cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 8C 10 30 02 00 00: mov word ptr [eax + edx + 0x230], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 4E 02 00 00: mov cx, word ptr [edx + eax + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D DC: mov word ptr [ebp - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 30 02 00 00: mov dx, word ptr [eax + ecx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes DB 45 C4: fild dword ptr [ebp - 0x3c]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes DB 45 C0: fild dword ptr [ebp - 0x40]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes D9 5D D8: fstp dword ptr [ebp - 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes D9 45 D8: fld dword ptr [ebp - 0x28]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes DC 1D 68 11 58 00: fcomp qword ptr [0x581168]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 57: jne 0x4230bb
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 94 02 30 02 00 00: mov dx, word ptr [edx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 2B 51 04: sub dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 94 01 30 02 00 00: mov word ptr [ecx + eax + 0x230], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 8001020ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 41 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 30 02 00 00: mov ax, word ptr [ecx + edx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        push ecx
        ; Exact mapped bytes 66 8B 55 E8: mov dx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 AF 8A 01 00: call 0x43bbab
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x42311a
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 8001020ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 41 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x42313f
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 40 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x4231dc
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x423161
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        push 0
        push 0
        push 8001020ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 40 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x4231dc
        __asm _emit 0xeb
        __asm _emit 0x7b
        push 0
        push 6
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 22ch]
        push eax
        push 8001020ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 40 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 10h
        or edx, 4
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 F8 F4 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 DE F4 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 55 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
