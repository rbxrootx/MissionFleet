// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D01E .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_0052d01e_0052D01E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x52d037
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x52d0d1
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 4C 5C 00 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x52d0cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 52 5C 00 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x52d07d
        __asm _emit 0x75
        __asm _emit 0x14
        push 642h
        push 5c8fcch
        ; Exact mapped bytes E8 88 79 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d07d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52d063
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 30: jne 0x52d0ca
        __asm _emit 0x75
        __asm _emit 0x30
        push 585e50h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 DF FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52d0bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 645h
        push 5c8fcch
        ; Exact mapped bytes E8 46 79 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d0bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52d09a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 07: jmp 0x52d0d1
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x52d045
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
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
