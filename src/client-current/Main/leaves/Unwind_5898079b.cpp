// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898079B .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898079b() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9E C4 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
