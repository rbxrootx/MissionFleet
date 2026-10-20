// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0FAB .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004e0fab_004E0FAB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e0fdc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eah
        push 5cb6b4h
        ; Exact mapped bytes E8 29 3A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0fdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e0fb7
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e0ffc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ebh
        push 5cb6b4h
        ; Exact mapped bytes E8 09 3A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0ffc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e0fe2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DC 00 00 00: call 0x4e10f2
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 2ch]
        push edx
        push 0
        push 40ch
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
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
