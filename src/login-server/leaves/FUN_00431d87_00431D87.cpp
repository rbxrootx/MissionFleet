// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431D87 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00431d87_00431D87() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x431dcb
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 43: jne 0x431dda
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 8]
        push edi
        mov edi, 400h
        push edi
        push ecx
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 EC C3 43 00: call dword ptr [0x43c3ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 25 FB F6: and ax, 0xf6fb
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xf6
        or eax, edi
        push dword ptr [esi + 4]
        push eax
        mov eax, dword ptr [esi + 0ch]
        push dword ptr [esi + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 F0 C3 43 00: call dword ptr [0x43c3f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        ; Exact mapped bytes EB 0F: jmp 0x431dda
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [esp + 8]
        mov eax, dword ptr [esi + 14h]
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 2A 2C 00 00: call 0x434a04
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
