// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589878A5 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589878a5() {
    __asm {
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 53 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
