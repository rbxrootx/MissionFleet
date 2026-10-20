// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1500 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_584b1500() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 E0 BE 90 58: mov eax, 0x5890bee0
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
