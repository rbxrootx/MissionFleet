// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F18F .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5886f18f() {
    __asm {
        ; Exact mapped bytes 64 A1 18 00 00 00: mov eax, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 30: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x30
        ; Exact mapped bytes 8B 40 10: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 8B 40 08: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
