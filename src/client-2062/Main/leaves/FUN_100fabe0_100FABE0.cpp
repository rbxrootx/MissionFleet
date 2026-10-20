// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FABE0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_100fabe0_100FABE0() {
    __asm {
        ; Exact mapped bytes B8 84 66 17 10: mov eax, 0x10176684
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes C7 01 80 66 17 10: mov dword ptr [ecx], 0x10176680
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 89 41 20: mov dword ptr [ecx + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 89 41 10: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
