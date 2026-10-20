// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CE9D4A .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58ce9d4a() {
    __asm {
        ; Exact mapped bytes 0F 86 4A 73 28 00: jbe 0x58f7109a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x73
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes E9 DA A3 05 00: jmp 0x58d44132
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
    }
}
