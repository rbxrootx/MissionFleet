// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980B00 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58980b00() {
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
        ; Exact mapped bytes E8 36 C1 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
