// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D4D0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_1004d4d0_1004D4D0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x1004d4e6
        __asm _emit 0x74
        __asm _emit 0x0a
        push esi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x1004d4e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push eax
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        and eax, 0ffffh
        shl eax, 10h
        and ecx, 0ffffh
        push esi
        or eax, ecx
        mov ecx, dword ptr [esp + 20h]
        push eax
        mov eax, dword ptr [esp + 20h]
        and edx, 0ffffh
        and eax, 0ffh
        shl edx, 8
        or edx, eax
        and ecx, 0ffh
        shl edx, 8
        or edx, ecx
        mov ecx, edi
        push edx
        push 80011004h
        ; Exact mapped bytes E8 17 EA 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
