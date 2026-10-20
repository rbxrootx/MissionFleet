// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589821FA .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_589821fa() {
    __asm {
        ; Exact mapped bytes 8B 85 F0 FE FF FF: mov eax, dword ptr [ebp - 0x110]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3C AA FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
