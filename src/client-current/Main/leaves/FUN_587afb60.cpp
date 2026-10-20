// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFB60 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587afb60() {
    __asm {
        ; Exact mapped bytes C7 01 20 9E 99 58: mov dword ptr [ecx], 0x58999e20
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0x9e
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
