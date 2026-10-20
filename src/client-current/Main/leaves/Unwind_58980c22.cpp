// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980C22 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58980c22() {
    __asm {
        ; Exact mapped bytes 8B 85 A0 FB FF FF: mov eax, dword ptr [ebp - 0x460]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 14 C0 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
