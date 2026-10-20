// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432F37 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_00432f37_00432F37() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 0D 0C 9B 44 00: mov ecx, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 0C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 83 48 04 FF: or dword ptr [eax + 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0xff
        ; Exact mapped bytes 83 60 08 00: and dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes C7 00 34 F1 43 00: mov dword ptr [eax], 0x43f134
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
