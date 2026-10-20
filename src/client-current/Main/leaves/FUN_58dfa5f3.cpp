// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DFA5F3 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58dfa5f3() {
    __asm {
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 80 7D 08 00: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 68 1A 00: jmp 0x58fa0e5f
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x00
    }
}
