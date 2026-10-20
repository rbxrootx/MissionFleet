// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868D9C .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58868d9c() {
    __asm {
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 A0 50 03 00 00 EF: and dword ptr [eax + 0x350], 0xffffffef
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xef
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
