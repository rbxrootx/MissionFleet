// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534840 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58534840() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 B4 C2 E6 00: mov eax, 0xe6c2b4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0xe6
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
