// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B579D4 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58b579d4() {
    __asm {
        ; Exact mapped bytes E8 A2 15 01 00: call 0x58b68f7b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 04: lea esp, [esp + 4]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E CC FB FF: jmp 0x58b14623
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
