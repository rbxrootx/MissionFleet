// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004357B9 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_004357b9_004357B9() {
    __asm {
        ; Exact mapped bytes E8 F5 04 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 48 2C: cmp dword ptr [eax + 0x2c], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
