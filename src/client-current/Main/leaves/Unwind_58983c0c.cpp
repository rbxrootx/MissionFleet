// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58983C0C .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58983c0c() {
    __asm {
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2D 90 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
