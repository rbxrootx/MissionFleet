// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908C20 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_58908c20() {
    __asm {
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 15 D0 C3 98 58: call dword ptr [0x5898c3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 4E 68 02: or dword ptr [esi + 0x68], 2
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x68
        __asm _emit 0x02
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
