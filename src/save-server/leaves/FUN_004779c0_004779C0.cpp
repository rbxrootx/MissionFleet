// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004779C0 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_004779c0_004779C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 74 02 68 00 00: cmp dword ptr [0x680274], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4779d4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E2 02 00 00: jmp 0x477cb6
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 3B 0D 08 03 68 00: cmp ecx, dword ptr [0x680308]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4779f4
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 3B 05 18 03 68 00: cmp eax, dword ptr [0x680318]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x477bbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 74 68 00 00: cmp dword ptr [0x687460], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 74 01 00 00: je 0x477b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 00 75 68 00: mov cx, word ptr [0x687500]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 5B: jne 0x477a69
        __asm _emit 0x75
        __asm _emit 0x5b
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 0E 75 68 00: mov dx, word ptr [0x68750e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 0C 75 68 00: mov ax, word ptr [0x68750c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 0A 75 68 00: mov cx, word ptr [0x68750a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 08 75 68 00: mov dx, word ptr [0x687508]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 04 75 68 00: mov ax, word ptr [0x687504]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 06 75 68 00: mov cx, word ptr [0x687506]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 02 75 68 00: mov dx, word ptr [0x687502]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 1
        push 1
        ; Exact mapped bytes E8 5C 02 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 51: jmp 0x477aba
        __asm _emit 0xeb
        __asm _emit 0x51
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 0E 75 68 00: mov dx, word ptr [0x68750e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 0C 75 68 00: mov ax, word ptr [0x68750c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 0A 75 68 00: mov cx, word ptr [0x68750a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 08 75 68 00: mov dx, word ptr [0x687508]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 06 75 68 00: mov ax, word ptr [0x687506]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        push 0
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 02 75 68 00: mov cx, word ptr [0x687502]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 0
        push 1
        ; Exact mapped bytes E8 09 02 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D AC 74 68 00: mov cx, word ptr [0x6874ac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 5B: jne 0x477b22
        __asm _emit 0x75
        __asm _emit 0x5b
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 BA 74 68 00: mov dx, word ptr [0x6874ba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xba
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 B8 74 68 00: mov ax, word ptr [0x6874b8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B6 74 68 00: mov cx, word ptr [0x6874b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B4 74 68 00: mov dx, word ptr [0x6874b4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 B0 74 68 00: mov ax, word ptr [0x6874b0]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B2 74 68 00: mov cx, word ptr [0x6874b2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 AE 74 68 00: mov dx, word ptr [0x6874ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 1
        push 0
        ; Exact mapped bytes E8 A3 01 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 51: jmp 0x477b73
        __asm _emit 0xeb
        __asm _emit 0x51
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 BA 74 68 00: mov dx, word ptr [0x6874ba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xba
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 B8 74 68 00: mov ax, word ptr [0x6874b8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B6 74 68 00: mov cx, word ptr [0x6874b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B4 74 68 00: mov dx, word ptr [0x6874b4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 B2 74 68 00: mov ax, word ptr [0x6874b2]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb2
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        push 0
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D AE 74 68 00: mov cx, word ptr [0x6874ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes E8 50 01 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 46: jmp 0x477bbb
        __asm _emit 0xeb
        __asm _emit 0x46
        push 0
        push 0
        push 0
        push 2
        push 0
        push 0
        push 1
        push 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 14h]
        push edx
        push 1
        push 1
        ; Exact mapped bytes E8 2B 01 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        push 0
        push 0
        push 0
        push 2
        push 0
        push 0
        push 5
        push 0ah
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 1
        push 0
        ; Exact mapped bytes E8 08 01 00 00: call 0x477cc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes 8B 15 0C 03 68 00: mov edx, dword ptr [0x68030c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 1C 03 68 00: cmp edx, dword ptr [0x68031c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 4B: jge 0x477c14
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 0C 03 68 00: cmp ecx, dword ptr [0x68030c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C 0E: jl 0x477be5
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 1C 03 68 00: cmp eax, dword ptr [0x68031c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 07: jle 0x477bec
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x477cb6
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 3B 15 0C 03 68 00: cmp edx, dword ptr [0x68030c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x477c12
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 1C 03 68 00: cmp ecx, dword ptr [0x68031c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x477c12
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x477cb6
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x477c57
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 1C 03 68 00: cmp eax, dword ptr [0x68031c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C 0E: jl 0x477c30
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 3B 15 0C 03 68 00: cmp edx, dword ptr [0x68030c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 07: jle 0x477c37
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7F: jmp 0x477cb6
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 1C 03 68 00: cmp ecx, dword ptr [0x68031c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x477c57
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 0C 03 68 00: cmp eax, dword ptr [0x68030c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 04: jge 0x477c57
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x477cb6
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        imul edx, edx, 3ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        add ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 0e10h
        add ecx, eax
        imul ecx, ecx, 3e8h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 3B 15 0C 03 68 00: cmp edx, dword ptr [0x68030c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x477ca2
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 05 10 03 68 00: cmp eax, dword ptr [0x680310]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C 07: jl 0x477c9e
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 18: jmp 0x477cb6
        __asm _emit 0xeb
        __asm _emit 0x18
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x477cb6
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 20 03 68 00: cmp ecx, dword ptr [0x680320]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x477cb4
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x477cb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
