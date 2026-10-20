// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004019A0 .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_004019a0_004019A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 86 04 00: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x401b10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 85 04 00: call 0x449fab
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x401a05
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 58 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 5D 04 00: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 5C 04 00: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x401b0b
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 6F 04 00: call 0x44899b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 1F 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x401a3e
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d78h]
        ; Exact mapped bytes E8 C9 E5 00 00: call 0x40fffa
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x401a3c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x401a61
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 3
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes E8 A4 E5 00 00: call 0x40fffa
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x401a61
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 07 1F 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x401abe
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B6 00 00 00: mov cx, word ptr [eax + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 75 3A: jne 0x401abe
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0cb0h
        ; Exact mapped bytes E8 B5 AE 07 00: call 0x47c94b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x401abe
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x401ab7
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 1
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 57 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA 7D 08 00: call 0x4898c4
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x401b0b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9A 1E 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 14: jne 0x401aef
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d78h]
        ; Exact mapped bytes E8 4F EA 00 00: call 0x41053c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x401b01
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0d7ch]
        ; Exact mapped bytes E8 8B 38 03 00: call 0x43538c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x401c10
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 6E 04 00: call 0x44899b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 1E 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x401b49
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes E8 BE E4 00 00: call 0x40fffa
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x401b47
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x401b6c
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 3
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d78h]
        ; Exact mapped bytes E8 99 E4 00 00: call 0x40fffa
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x401b6c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x401c12
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 1D 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x401bc6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B6 00 00 00: mov dx, word ptr [ecx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 75 37: jne 0x401bc6
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0cb0h
        ; Exact mapped bytes E8 AA AD 07 00: call 0x47c94b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x401bc6
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x401bc2
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 1
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 56 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x401c12
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 7C 08 00: call 0x4898c4
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x401c10
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 1D 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 14: jne 0x401bf7
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes E8 47 E9 00 00: call 0x41053c
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x401c09
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d7ch]
        ; Exact mapped bytes E8 83 37 03 00: call 0x43538c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x401c12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 C4 6B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
