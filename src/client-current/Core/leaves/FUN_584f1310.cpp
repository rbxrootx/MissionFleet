// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1310 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_584f1310() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 0F 3E F8 00: mov eax, 0xf83e0f
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
