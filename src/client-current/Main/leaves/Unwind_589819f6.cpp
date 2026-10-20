// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589819F6 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589819f6() {
    __asm {
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 43 B2 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
