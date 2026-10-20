// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589847A9 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589847a9() {
    __asm {
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 84 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
