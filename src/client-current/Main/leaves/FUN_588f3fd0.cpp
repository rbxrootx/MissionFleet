// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F3FD0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_588f3fd0() {
    __asm {
        ; Exact mapped bytes C7 01 98 19 9A 58: mov dword ptr [ecx], 0x589a1998
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
