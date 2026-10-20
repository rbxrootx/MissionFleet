// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FD0A .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_0054fd0a_0054FD0A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        push 0dfh
        push 5cf710h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 1B B4 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 14: je 0x54fd62
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e0h
        push 5cf710h
        ; Exact mapped bytes E8 A3 4C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fd62
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54fd45
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54fd82
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e1h
        push 5cf710h
        ; Exact mapped bytes E8 83 4C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fd82
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54fd68
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 9F 00 F8 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54fdab
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e2h
        push 5cf710h
        ; Exact mapped bytes E8 5A 4C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fdab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x54fd88
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x54fddc
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 18h
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 92 00 F8 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54fddc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e4h
        push 5cf710h
        ; Exact mapped bytes E8 29 4C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fddc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x54fdb1
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x54fdf7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x54fe2d
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 AA 99 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 96 11 F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 13: jge 0x54fe68
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0D: je 0x54fe68
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 93 FA FF FF: call 0x54f8fb
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 1D: jl 0x54fe8b
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54fe8b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ebh
        push 5cf710h
        ; Exact mapped bytes E8 7A 4B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fe8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x54fe68
        __asm _emit 0x75
        __asm _emit 0xd7
        xor eax, eax
        cmp dword ptr [ebp - 0ch], 0
        setge al
        lea esp, [ebp - 2ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
