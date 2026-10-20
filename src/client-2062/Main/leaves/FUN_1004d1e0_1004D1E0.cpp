// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D1E0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_1004d1e0_1004D1E0() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        cmp eax, 40000h
        ; Exact mapped bytes 75 1D: jne 0x1004d208
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push 0
        push 0
        push 0
        push eax
        push edx
        push 800100a1h
        ; Exact mapped bytes E8 4B ED 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 20000h
        ; Exact mapped bytes 75 1A: jne 0x1004d229
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push 0
        push 0
        push 0
        push eax
        push edx
        push 800100a2h
        ; Exact mapped bytes E8 27 ED 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
