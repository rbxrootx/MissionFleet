// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFB3E .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004cfb3e_004CFB3E() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 B4 FA 4C 00: mov eax, 0x4cfab4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
