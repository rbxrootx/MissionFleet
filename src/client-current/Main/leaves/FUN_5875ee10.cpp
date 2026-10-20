// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EE10 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5875ee10() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 41 54: cmp dword ptr [ecx + 0x54], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
