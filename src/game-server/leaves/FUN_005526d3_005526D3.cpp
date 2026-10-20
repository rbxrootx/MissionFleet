// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005526D3 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_005526d3_005526D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F F2 FD FF: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x552706
        __asm _emit 0x74
        __asm _emit 0x1b
        push 327h
        push 5cf7b8h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 5F 8A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x55278c
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 7D: jne 0x55278c
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 330h
        push 5cf7b8h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 36 8A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58a1a8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 89 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55274f
        __asm _emit 0x75
        __asm _emit 0x14
        push 331h
        push 5cf7b8h
        ; Exact mapped bytes E8 B6 22 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55274f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55272a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x552786
        __asm _emit 0x74
        __asm _emit 0x14
        push 333h
        push 5cf7b8h
        ; Exact mapped bytes E8 7F 22 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552786
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x552767
        __asm _emit 0x75
        __asm _emit 0xdb
        push 338h
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C1 89 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
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
