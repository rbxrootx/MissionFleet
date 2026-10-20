// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A7C0 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5879a7c0() {
    __asm {
        ; Exact mapped bytes 80 79 08 06: cmp byte ptr [ecx + 8], 6
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x06
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
