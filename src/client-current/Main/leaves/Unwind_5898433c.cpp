// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898433C .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898433c() {
    __asm {
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FD 88 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
