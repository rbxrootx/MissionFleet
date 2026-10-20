// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873B040 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5873b040() {
    __asm {
        ; Exact mapped bytes 8B 81 04 05 00 00: mov eax, dword ptr [ecx + 0x504]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 89 91 74 04 00 00: mov dword ptr [ecx + 0x474], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
