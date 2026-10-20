// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3F50 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004c3f50_004C3F50() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or eax, 104h
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 18 22 5E 00: call dword ptr [0x5e2218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 BC F0 5D 00: mov dword ptr [0x5df0bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC F0 5D 00: mov ecx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D A0 F0 5D 00: mov dword ptr [0x5df0a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        pop ebp
        ret
    }
}
