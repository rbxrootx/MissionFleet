// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877B0F0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5877b0f0() {
    __asm {
        cmp dword ptr [esp + 4], 1
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 1F: jne 0x5877b119
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 41 E9 FF FF: call 0x58779a40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 240h], eax
        cmp eax, 1
        ; Exact mapped bytes 74 1A: je 0x5877b124
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 EA FF FF: call 0x58779b80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 240h], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
