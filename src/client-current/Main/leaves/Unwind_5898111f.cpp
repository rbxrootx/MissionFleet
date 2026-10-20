// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898111F .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5898111f() {
    __asm {
        ; Exact mapped bytes 8B 85 3C E2 FF FF: mov eax, dword ptr [ebp - 0x1dc4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 17 BB FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
