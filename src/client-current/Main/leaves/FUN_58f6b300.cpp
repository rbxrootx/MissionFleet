// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F6B300 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58f6b300() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 0F BF EC: movsx ebp, sp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xec
        ; Exact mapped bytes F7 D5: not ebp
        __asm _emit 0xf7
        __asm _emit 0xd5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
