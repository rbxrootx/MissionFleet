// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589808FB .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589808fb() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3E C3 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
