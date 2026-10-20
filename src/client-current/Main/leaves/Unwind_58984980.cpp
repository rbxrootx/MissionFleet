// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984980 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58984980() {
    __asm {
        ; Exact mapped bytes 8B 45 8C: mov eax, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B9 82 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
