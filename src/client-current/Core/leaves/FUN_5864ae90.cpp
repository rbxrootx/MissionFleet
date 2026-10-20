// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864AE90 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_5864ae90() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 C3 30 0C 03: mov eax, 0x30c30c3
        __asm _emit 0xb8
        __asm _emit 0xc3
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x03
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
