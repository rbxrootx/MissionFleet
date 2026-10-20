// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004C8B0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_1004c8b0_1004C8B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        shl eax, 10h
        or eax, ecx
        mov ecx, dword ptr [esp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x1004c8ef
        __asm _emit 0x74
        __asm _emit 0x27
        cmp ecx, 3
        ; Exact mapped bytes 74 22: je 0x1004c8ef
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push eax
        push ecx
        push 80010017h
        mov ecx, esi
        ; Exact mapped bytes E8 6F F6 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 0
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push eax
        push ecx
        push 80010017h
        mov ecx, esi
        mov dword ptr [esi + 134h], 20000000h
        ; Exact mapped bytes E8 43 F6 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
