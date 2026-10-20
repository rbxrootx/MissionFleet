// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429030 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00429030_00429030() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes A3 1C 00 45 00: mov dword ptr [0x45001c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 14 00 45 00: mov dword ptr [0x450014], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 1C 14 45 00: mov ecx, dword ptr [0x45141c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push ecx
        push 428f80h
        push 4
        ; Exact mapped bytes FF 15 54 C4 43 00: call dword ptr [0x43c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A3 18 00 45 00: mov dword ptr [0x450018], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        ret
    }
}
