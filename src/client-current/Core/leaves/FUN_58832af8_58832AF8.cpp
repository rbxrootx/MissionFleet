// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832AF8 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58832af8_58832AF8() {
    __asm {
        push esi
        push 204h
        mov esi, ecx
        push 0
        push esi
        ; Exact mapped bytes E8 08 A3 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        push 11f4h
        push 0
        push esi
        ; Exact mapped bytes E8 FB A2 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        mov eax, esi
        pop esi
        ret
    }
}
