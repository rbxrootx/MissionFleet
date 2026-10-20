// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CC00 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_1004cc00_1004CC00() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push 0
        mov esi, ecx
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, esi
        push eax
        push edi
        push 0
        push 0
        push 80010f04h
        ; Exact mapped bytes E8 2C F3 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
