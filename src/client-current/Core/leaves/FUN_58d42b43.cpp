// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D42B43 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58d42b43() {
    __asm {
        ; Exact mapped bytes 0F 85 48 96 FD FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 05 6C: cmp byte ptr [eax + ecx + 5], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x6c
        ; Exact mapped bytes E9 64 AA 20 00: jmp 0x58f4d5b7
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
