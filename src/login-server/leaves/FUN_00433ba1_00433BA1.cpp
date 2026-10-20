// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433BA1 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_00433ba1_00433BA1() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes C7 00 28 E6 43 00: mov dword ptr [eax], 0x43e628
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 08: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 48 0C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
