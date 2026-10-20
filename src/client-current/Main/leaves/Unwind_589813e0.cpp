// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589813E0 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_589813e0() {
    __asm {
        ; Exact mapped bytes 8B 85 60 FF FF FF: mov eax, dword ptr [ebp - 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 56 B8 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
