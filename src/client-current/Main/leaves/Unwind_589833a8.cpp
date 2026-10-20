// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589833A8 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589833a8() {
    __asm {
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 91 98 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
