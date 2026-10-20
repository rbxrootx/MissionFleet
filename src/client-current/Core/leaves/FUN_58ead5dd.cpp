// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EAD5DD .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58ead5dd() {
    __asm {
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes E9 E8 A2 09 00: jmp 0x58f478cc
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
    }
}
