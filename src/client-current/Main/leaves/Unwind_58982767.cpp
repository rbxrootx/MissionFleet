// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982767 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58982767() {
    __asm {
        ; Exact mapped bytes 8B 85 4C FD FF FF: mov eax, dword ptr [ebp - 0x2b4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CF A4 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
