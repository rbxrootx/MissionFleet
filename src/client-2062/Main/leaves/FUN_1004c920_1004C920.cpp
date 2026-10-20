// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004C920 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_1004c920_1004C920() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x1004c970
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 8]
        and eax, 0ffh
        shl eax, 4
        and ecx, 0ffh
        push 0
        push 0
        or eax, ecx
        push 0
        push eax
        push edx
        push 80010018h
        mov ecx, esi
        ; Exact mapped bytes E8 F3 F5 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 2
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
