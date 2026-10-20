// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436D5A .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00436d5a_00436D5A() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 1ch]
        push ebx
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 1A: jne 0x436d89
        __asm _emit 0x75
        __asm _emit 0x1a
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 D8 C0 43 00: call dword ptr [0x43c0d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x436da7
        __asm _emit 0x74
        __asm _emit 0x2c
        push dword ptr [esp + 0ch]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 3A FF FF FF: call 0x436cc1
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x436da7
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x436da7
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        push dword ptr [esp + 10h]
        mov edi, dword ptr [eax + 4]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 21 FF FF FF: call 0x436cc1
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        mov eax, edi
        ; Exact mapped bytes 75 EB: jne 0x436d91
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        push ebx
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
