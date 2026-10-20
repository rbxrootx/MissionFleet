// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004C980 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_1004c980_1004C980() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x1004c9c2
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 0ch]
        push 0
        push 70h
        and ecx, 0ffffh
        push eax
        and edx, 0ffffh
        push ecx
        push edx
        push 80020111h
        mov ecx, esi
        ; Exact mapped bytes E8 98 F5 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 1
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
