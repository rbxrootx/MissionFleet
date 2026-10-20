// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589874F7 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589874f7() {
    __asm {
        ; Exact mapped bytes 8B 45 A0: mov eax, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 42 57 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
