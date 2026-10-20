// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D9F0 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_0045d9f0_0045D9F0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 94 1A 58 00: mov eax, 0x581a94
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
