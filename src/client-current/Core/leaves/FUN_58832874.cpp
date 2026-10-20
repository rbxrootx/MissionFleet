// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832874 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58832874() {
    __asm {
        ; Exact mapped bytes E8 87 EC C7 FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0xc7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 83 08 24: or dword ptr [eax], 0x24
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x24
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 49 D5 D4 FF: call 0x5857fdd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd5
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 83 08 02: or dword ptr [eax], 2
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
