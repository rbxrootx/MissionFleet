// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58789C30 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58789c30() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes C7 00 88 6B 99 58: mov dword ptr [eax], 0x58996b88
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0x6b
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 48 10: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 89 48 0C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 89 48 08: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
