// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DE30 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5897de30() {
    __asm {
        ; Exact mapped bytes 8B 85 B0 FE FF FF: mov eax, dword ptr [ebp - 0x150]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 06 EE FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
