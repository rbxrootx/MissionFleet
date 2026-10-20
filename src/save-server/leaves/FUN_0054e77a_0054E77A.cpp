// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E77A .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_0054e77a_0054E77A() {
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
        push 67bee8h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 AB BA F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 14: je 0x54e7d2
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e0h
        push 67bee8h
        ; Exact mapped bytes E8 73 A5 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e7d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54e7b5
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54e7f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e1h
        push 67bee8h
        ; Exact mapped bytes E8 53 A5 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e7f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54e7d8
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 3F 4C F5 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54e81b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e2h
        push 67bee8h
        ; Exact mapped bytes E8 2A A5 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e81b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x54e7f8
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x54e84c
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 18h
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 32 4C F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54e84c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e4h
        push 67bee8h
        ; Exact mapped bytes E8 F9 A4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e84c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x54e821
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x54e867
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x54e89d
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 1A 77 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 56 ED EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0xef
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
        ; Exact mapped bytes 7D 13: jge 0x54e8d8
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0D: je 0x54e8d8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 93 FA FF FF: call 0x54e36b
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 1D: jl 0x54e8fb
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54e8fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ebh
        push 67bee8h
        ; Exact mapped bytes E8 4A A4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e8fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x54e8d8
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
