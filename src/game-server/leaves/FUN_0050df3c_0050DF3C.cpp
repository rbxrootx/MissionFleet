// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DF3C .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_0050df3c_0050DF3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 81h
        push 5c60a8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 05 D2 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x50df7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 5c60a8h
        ; Exact mapped bytes E8 8A 6A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50df7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x50df5b
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0e110h
        ; Exact mapped bytes 73 14: jae 0x50df9e
        __asm _emit 0x73
        __asm _emit 0x14
        push 84h
        push 5c60a8h
        ; Exact mapped bytes E8 67 6A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50df9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50df81
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 5E F8 F7 FF: call 0x48d810
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, 0e110h
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 72 14: jb 0x50dfd0
        __asm _emit 0x72
        __asm _emit 0x14
        push 85h
        push 5c60a8h
        ; Exact mapped bytes E8 35 6A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50dfd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x50dfa4
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e110h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 3D F8 F7 FF: call 0x48d830
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 2F 02 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50e012
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 5c60a8h
        ; Exact mapped bytes E8 F3 69 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e012
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x50dfe1
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 06 F8 F7 FF: call 0x48d830
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 2F 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        push 5c60b4h
        ; Exact mapped bytes E8 D2 1B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 D8 F7 F7 FF: call 0x48d830
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 2F 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x50e08c
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
