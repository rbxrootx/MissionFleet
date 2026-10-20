// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881D1B0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5881d1b0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 48: jne 0x5881d202
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [esp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 74 08: je 0x5881d1d0
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 75 32: jne 0x5881d202
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [esi + 0ach], 1
        ; Exact mapped bytes 77 29: ja 0x5881d202
        __asm _emit 0x77
        __asm _emit 0x29
        cmp eax, ecx
        ; Exact mapped bytes 75 0D: jne 0x5881d1ea
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, esi
        ; Exact mapped bytes E8 BC EE FF FF: call 0x5881c0a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 75 10: jne 0x5881d202
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 C7 EB FF FF: call 0x5881bdc0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
