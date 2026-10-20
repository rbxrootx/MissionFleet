// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B27D0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587b27d0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
