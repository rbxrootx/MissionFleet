// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986D4A .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58986d4a() {
    __asm {
        ; Exact mapped bytes 8B 85 D4 FE FF FF: mov eax, dword ptr [ebp - 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EC 5E FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
