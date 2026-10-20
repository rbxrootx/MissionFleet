// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100405F0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_100405f0_100405F0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 81 08: mov ecx, dword ptr [ecx + eax*4 + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x08
        ; Exact mapped bytes E8 E3 36 00 00: call 0x10043ce0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
