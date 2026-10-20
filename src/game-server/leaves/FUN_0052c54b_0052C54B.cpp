// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C54B .. +0x1E3 bytes.
extern "C" __declspec(naked) void FUN_0052c54b_0052C54B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52c571
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c5h
        push 5c8fcch
        ; Exact mapped bytes E8 94 84 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c571
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52c557
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 1B 00 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 86 FC FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A 86 FC FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 14: je 0x52c5ac
        __asm _emit 0x74
        __asm _emit 0x14
        push 4c7h
        push 5c8fcch
        ; Exact mapped bytes E8 59 84 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c5ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x52c582
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1E: je 0x52c5d6
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 19 01 00: call 0x53df09
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x52c62d
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 0ch]
        neg eax
        sbb eax, eax
        and al, 0c0h
        add eax, 80h
        or al, 17h
        push eax
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 2C FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x52c61d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 1B 00 00: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x52c62d
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 1B 00 00: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x52c725
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 74 19: je 0x52c65f
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 70h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 70h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0C: jmp 0x52c66b
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        setne al
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 44: jne 0x52c6bb
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3E: je 0x52c6bb
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0ffffffffh
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x52c6af
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x52c6b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 2C FC FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 6A: jmp 0x52c725
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4E: jne 0x52c70f
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x52c6db
        __asm _emit 0x74
        __asm _emit 0x14
        push 4ech
        push 5c8fcch
        ; Exact mapped bytes E8 2A 83 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c6db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52c6c1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 0ffffffffh
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x52c703
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0
        ; Exact mapped bytes EB 0A: jmp 0x52c70d
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 2C FC FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x52c725
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 10: jne 0x52c725
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
