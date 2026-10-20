// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589845F3 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589845f3() {
    __asm {
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 46 86 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
