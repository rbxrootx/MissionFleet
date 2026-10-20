// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D053A .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004d053a_004D053A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 58: jne 0x4d05a5
        __asm _emit 0x75
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 D7 4D 00 00: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d056c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cfh
        push 671a64h
        ; Exact mapped bytes E8 D9 87 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d056c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4d054d
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d0595
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d2h
        push 671a64h
        ; Exact mapped bytes E8 B0 87 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0595
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4d0572
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], 634d74h
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
