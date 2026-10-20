// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DD00 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5897dd00() {
    __asm {
        ; Exact mapped bytes 8B 85 EC FE FF FF: mov eax, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 36 EF FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
