// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58988943 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58988943() {
    __asm {
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F6 42 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
