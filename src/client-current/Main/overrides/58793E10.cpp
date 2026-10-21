// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793E10 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58793e10() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 79 5C 02: cmp dword ptr [ecx + 0x5c], 2
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x5c
        __asm _emit 0x02
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
