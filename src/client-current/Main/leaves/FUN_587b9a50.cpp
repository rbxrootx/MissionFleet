// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9A50 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587b9a50() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 134h], 0
        ; Exact mapped bytes 75 26: jne 0x587b9a82
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
        ; Exact mapped bytes E8 F8 71 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 8
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
