// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D000 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0043d000_0043D000() {
    __asm {
        ; Exact mapped bytes 8D 44 24 04: lea eax, [esp + 4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 93 94 02 00: call 0x4664a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 C0 45 63 00: mov dword ptr [esi], 0x6345c0
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
