// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589897B0 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_589897b0() {
    __asm {
        ; Exact mapped bytes 8B 85 D8 FE FF FF: mov eax, dword ptr [ebp - 0x128]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 86 34 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
