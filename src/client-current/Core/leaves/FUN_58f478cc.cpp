// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F478CC .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58f478cc() {
    __asm {
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes D1 C8: ror eax, 1
        __asm _emit 0xd1
        __asm _emit 0xc8
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 33 D8: xor ebx, eax
        __asm _emit 0x33
        __asm _emit 0xd8
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes E9 A7 41 C3 FF: jmp 0x58b7ba81
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x41
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
