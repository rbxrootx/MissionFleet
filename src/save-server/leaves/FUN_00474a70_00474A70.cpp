// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474A70 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_00474a70_00474A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes 83 3D 38 E2 67 00 FF: cmp dword ptr [0x67e238], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 09: jne 0x474a88
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 67e228h
        ; Exact mapped bytes EB 23: jmp 0x474aab
        __asm _emit 0xeb
        __asm _emit 0x23
        push 2020h
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 B8 68 00: call dword ptr [0x68b860]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x474aab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9F 01 00 00: jmp 0x474c4a
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 2000h
        push 400000h
        push 0
        ; Exact mapped bytes FF 15 58 B8 68 00: call dword ptr [0x68b858]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x474c2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 1000h
        push 10000h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 58 B8 68 00: call dword ptr [0x68b858]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x474c1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 67e228h
        ; Exact mapped bytes 75 28: jne 0x474b1b
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D 28 E2 67 00 00: cmp dword ptr [0x67e228], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x474b06
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 28 E2 67 00 28 E2 67 00: mov dword ptr [0x67e228], 0x67e228
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C E2 67 00 00: cmp dword ptr [0x67e22c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x474b19
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 2C E2 67 00 28 E2 67 00: mov dword ptr [0x67e22c], 0x67e228
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x474b44
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], 67e228h
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 2C E2 67 00: mov ecx, dword ptr [0x67e22c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 2C E2 67 00: mov dword ptr [0x67e22c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 400000h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 14h], edx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 18h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 98h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x474b88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 400h
        ; Exact mapped bytes 7D 34: jge 0x474bc5
        __asm _emit 0x7d
        __asm _emit 0x34
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 7D 10: jge 0x474ba7
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*8 + 18h], 0f0h
        ; Exact mapped bytes EB 0E: jmp 0x474bb5
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx*8 + 18h], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*8 + 1ch], 0f1h
        ; Exact mapped bytes EB BA: jmp 0x474b7f
        __asm _emit 0xeb
        __asm _emit 0xba
        push 10000h
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EB 0C FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        add edx, 10000h
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 73 2D: jae 0x474c16
        __asm _emit 0x73
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0f0h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0f8h], 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1000h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB C2: jmp 0x474bd8
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 2F: jmp 0x474c4a
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 8000h
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 67e228h
        ; Exact mapped bytes 74 13: je 0x474c48
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
