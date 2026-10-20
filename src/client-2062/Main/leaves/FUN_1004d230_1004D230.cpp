// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D230 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_1004d230_1004D230() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x1004d263
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 8]
        push 0
        push 0
        push 0
        push eax
        push ecx
        push 800100a0h
        mov ecx, esi
        ; Exact mapped bytes E8 F7 EC 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 20000000h
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
