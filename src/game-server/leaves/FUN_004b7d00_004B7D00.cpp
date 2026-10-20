// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B7D00 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_004b7d00_004B7D00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 98 1A 5D 00 00: cmp dword ptr [0x5d1a98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4b7d14
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E2 02 00 00: jmp 0x4b7ff6
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 3B 0D 28 1B 5D 00: cmp ecx, dword ptr [0x5d1b28]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4b7d34
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 3B 05 38 1B 5D 00: cmp eax, dword ptr [0x5d1b38]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x4b7efb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 EE 5D 00 00: cmp dword ptr [0x5dee10], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 74 01 00 00: je 0x4b7eb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B0 EE 5D 00: mov cx, word ptr [0x5deeb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 5B: jne 0x4b7da9
        __asm _emit 0x75
        __asm _emit 0x5b
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 BE EE 5D 00: mov dx, word ptr [0x5deebe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 BC EE 5D 00: mov ax, word ptr [0x5deebc]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D BA EE 5D 00: mov cx, word ptr [0x5deeba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B8 EE 5D 00: mov dx, word ptr [0x5deeb8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        push 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 B4 EE 5D 00: mov ax, word ptr [0x5deeb4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B6 EE 5D 00: mov cx, word ptr [0x5deeb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B2 EE 5D 00: mov dx, word ptr [0x5deeb2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 1
        push 1
        ; Exact mapped bytes E8 5C 02 00 00: call 0x4b8000
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 51: jmp 0x4b7dfa
        __asm _emit 0xeb
        __asm _emit 0x51
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 BE EE 5D 00: mov dx, word ptr [0x5deebe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 BC EE 5D 00: mov ax, word ptr [0x5deebc]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D BA EE 5D 00: mov cx, word ptr [0x5deeba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B8 EE 5D 00: mov dx, word ptr [0x5deeb8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 B6 EE 5D 00: mov ax, word ptr [0x5deeb6]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        push 0
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B2 EE 5D 00: mov cx, word ptr [0x5deeb2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 0
        push 1
        ; Exact mapped bytes E8 09 02 00 00: call 0x4b8000
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 5C EE 5D 00: mov cx, word ptr [0x5dee5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 5B: jne 0x4b7e62
        __asm _emit 0x75
        __asm _emit 0x5b
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 6A EE 5D 00: mov dx, word ptr [0x5dee6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 68 EE 5D 00: mov ax, word ptr [0x5dee68]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 66 EE 5D 00: mov cx, word ptr [0x5dee66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 64 EE 5D 00: mov dx, word ptr [0x5dee64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        push 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 60 EE 5D 00: mov ax, word ptr [0x5dee60]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 62 EE 5D 00: mov cx, word ptr [0x5dee62]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 5E EE 5D 00: mov dx, word ptr [0x5dee5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 1
        push 0
        ; Exact mapped bytes E8 A3 01 00 00: call 0x4b8000
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 51: jmp 0x4b7eb3
        __asm _emit 0xeb
        __asm _emit 0x51
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 6A EE 5D 00: mov dx, word ptr [0x5dee6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 68 EE 5D 00: mov ax, word ptr [0x5dee68]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 66 EE 5D 00: mov cx, word ptr [0x5dee66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 64 EE 5D 00: mov dx, word ptr [0x5dee64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        xor eax, eax
        ; Exact mapped bytes 66 A1 62 EE 5D 00: mov ax, word ptr [0x5dee62]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        push 0
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 5E EE 5D 00: mov cx, word ptr [0x5dee5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes E8 50 01 00 00: call 0x4b8000
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 46: jmp 0x4b7efb
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
        ; Exact mapped bytes E8 2B 01 00 00: call 0x4b8000
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
        ; Exact mapped bytes E8 08 01 00 00: call 0x4b8000
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes 8B 15 2C 1B 5D 00: mov edx, dword ptr [0x5d1b2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 3C 1B 5D 00: cmp edx, dword ptr [0x5d1b3c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7D 4B: jge 0x4b7f54
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 2C 1B 5D 00: cmp ecx, dword ptr [0x5d1b2c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7C 0E: jl 0x4b7f25
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 3C 1B 5D 00: cmp eax, dword ptr [0x5d1b3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7E 07: jle 0x4b7f2c
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4b7ff6
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 3B 15 2C 1B 5D 00: cmp edx, dword ptr [0x5d1b2c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x4b7f52
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 3C 1B 5D 00: cmp ecx, dword ptr [0x5d1b3c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x4b7f52
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4b7ff6
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x4b7f97
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 3C 1B 5D 00: cmp eax, dword ptr [0x5d1b3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7C 0E: jl 0x4b7f70
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 3B 15 2C 1B 5D 00: cmp edx, dword ptr [0x5d1b2c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7E 07: jle 0x4b7f77
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7F: jmp 0x4b7ff6
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 3B 0D 3C 1B 5D 00: cmp ecx, dword ptr [0x5d1b3c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x4b7f97
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 3B 05 2C 1B 5D 00: cmp eax, dword ptr [0x5d1b2c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7D 04: jge 0x4b7f97
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x4b7ff6
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
        ; Exact mapped bytes 3B 15 2C 1B 5D 00: cmp edx, dword ptr [0x5d1b2c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x4b7fe2
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 05 30 1B 5D 00: cmp eax, dword ptr [0x5d1b30]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7C 07: jl 0x4b7fde
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 18: jmp 0x4b7ff6
        __asm _emit 0xeb
        __asm _emit 0x18
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x4b7ff6
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 40 1B 5D 00: cmp ecx, dword ptr [0x5d1b40]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x4b7ff4
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4b7ff6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
