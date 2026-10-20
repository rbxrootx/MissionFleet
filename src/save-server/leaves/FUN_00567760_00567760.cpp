// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567760 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00567760_00567760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 105h
        push 67aea0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E3 2A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5677a6
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B4 BC F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbc
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5677a6
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 67aea0h
        ; Exact mapped bytes E8 9F 15 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5677a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x56777d
        __asm _emit 0x75
        __asm _emit 0xd1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5677c3
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x5677c3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x5677e5
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 3
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 24h
        push edx
        ; Exact mapped bytes E8 B0 98 00 00: call 0x571095
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x98
        __asm _emit 0x00
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
