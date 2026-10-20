// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100325E0 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_100325e0_100325E0() {
    __asm {
        ; Exact mapped bytes 8B 51 5C: mov edx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 FA 02: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
