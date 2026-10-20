// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879ECB0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5879ecb0_5879ECB0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 0d8h
        push esi
        mov esi, dword ptr [esp + 0e0h]
        push eax
        test esi, esi
        ; Exact mapped bytes 75 06: jne 0x5879eccd
        __asm _emit 0x75
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B3 01 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 8]
        push eax
        push esi
        ; Exact mapped bytes E8 D8 01 00 00: call 0x5879eeb0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [esp + 4]
        push eax
        push esi
        ; Exact mapped bytes E8 9A 01 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
