// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989163 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58989163() {
    __asm {
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 3A FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
