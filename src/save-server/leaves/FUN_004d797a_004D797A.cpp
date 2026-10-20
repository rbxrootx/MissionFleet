// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D797A .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_004d797a_004D797A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 58: je 0x4d79e5
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4d799b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4d7a3b
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x4d79bd
        __asm _emit 0x72
        __asm _emit 0x14
        push 2a2h
        push 6720f4h
        ; Exact mapped bytes E8 88 13 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d79bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d799b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        neg eax
        sbb eax, eax
        and eax, 8
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 27 FC 05 00: call 0x53760a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x4d7a3b
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7a02
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a9h
        push 6720f4h
        ; Exact mapped bytes E8 43 13 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7a02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d79e5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 0
        push 87h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 1D 3C 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4d7a3b
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0f1h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 FE 3B 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
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
