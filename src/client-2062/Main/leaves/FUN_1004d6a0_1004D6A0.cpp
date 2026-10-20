// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D6A0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_1004d6a0_1004D6A0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x1004d6d3
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 8]
        push 0
        push eax
        push ecx
        push 0
        push 0
        push 80012001h
        mov ecx, esi
        ; Exact mapped bytes E8 87 E8 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 8
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
