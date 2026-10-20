// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A8B8 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5898a8b8() {
    __asm {
        ; Exact mapped bytes 8B 85 58 FD FF FF: mov eax, dword ptr [ebp - 0x2a8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7E 23 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
