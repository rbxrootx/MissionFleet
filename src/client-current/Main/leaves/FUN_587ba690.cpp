// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA690 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_587ba690() {
    __asm {
        ; Exact mapped bytes 83 79 78 00: cmp dword ptr [ecx + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x587ba6a4
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes C7 41 78 01 00 00 00: mov dword ptr [ecx + 0x78], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 7C FA 00 00 00: mov dword ptr [ecx + 0x7c], 0xfa
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
