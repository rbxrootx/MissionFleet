// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781C50 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58781c50() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 05 2F A7 00: mov eax, 0xa72f05
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x2f
        __asm _emit 0xa7
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
