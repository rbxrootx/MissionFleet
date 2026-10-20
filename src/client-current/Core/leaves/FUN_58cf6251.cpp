// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CF6251 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58cf6251() {
    __asm {
        ; Exact mapped bytes 0F 85 85 32 E2 FF: jne 0x58b194dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 04 72: cmp byte ptr [eax + ecx + 4], 0x72
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x72
        ; Exact mapped bytes E9 6A 32 E2 FF: jmp 0x58b194cb
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x32
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
