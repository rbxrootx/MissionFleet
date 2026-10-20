// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D21F53 .. +0x4 bytes.
extern "C" __declspec(naked) void FUN_58d21f53() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
