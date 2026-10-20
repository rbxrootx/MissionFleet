// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883262D .. +0xC bytes.
extern "C" __declspec(naked) void FUN_5883262d() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 05 A0 9C 96 58: cmp dword ptr [0x58969ca0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
