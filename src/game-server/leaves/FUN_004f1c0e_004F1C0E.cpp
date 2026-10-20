// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1C0E .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004f1c0e_004F1C0E() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 84 1B 4F 00: mov eax, 0x4f1b84
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x4f
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
