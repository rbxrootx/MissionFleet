// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898256E .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5898256e() {
    __asm {
        ; Exact mapped bytes 8B 85 C0 FC FF FF: mov eax, dword ptr [ebp - 0x340]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C8 A6 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
