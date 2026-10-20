// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F3B5 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0041f3b5_0041F3B5() {
    __asm {
        ; Exact mapped bytes E8 09 31 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 14: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
