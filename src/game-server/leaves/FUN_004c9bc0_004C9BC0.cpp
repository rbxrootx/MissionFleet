// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9BC0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_004c9bc0_004C9BC0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes A3 04 F1 5D 00: mov dword ptr [0x5df104], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D FC F0 5D 00: mov dword ptr [0x5df0fc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D FC 04 5E 00: mov ecx, dword ptr [0x5e04fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        push 4c9b10h
        push 4
        ; Exact mapped bytes FF 15 CC 25 5E 00: call dword ptr [0x5e25cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 F1 5D 00: mov dword ptr [0x5df100], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ret
    }
}
