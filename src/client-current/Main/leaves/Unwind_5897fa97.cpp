// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897FA97 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5897fa97() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A2 D1 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
