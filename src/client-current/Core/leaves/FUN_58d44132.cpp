// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D44132 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58d44132() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes F7 D5: not ebp
        __asm _emit 0xf7
        __asm _emit 0xd5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 85 10 FD FF: jmp 0x58d151c1
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
