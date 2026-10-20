// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832AD4 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58832ad4_58832AD4() {
    __asm {
        push esi
        push 204h
        mov esi, ecx
        push 0
        push esi
        ; Exact mapped bytes E8 2C A3 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        push 0e4ch
        push 0
        push esi
        ; Exact mapped bytes E8 1F A3 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        mov eax, esi
        pop esi
        ret
    }
}
