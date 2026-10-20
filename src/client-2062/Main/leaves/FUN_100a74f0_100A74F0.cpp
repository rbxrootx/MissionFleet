// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A74F0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_100a74f0_100A74F0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20c0h]
        cmp eax, -1
        ; Exact mapped bytes 74 54: je 0x100a7552
        __asm _emit 0x74
        __asm _emit 0x54
        lea ecx, [eax + eax*2]
        push 0
        shl ecx, 4
        add ecx, eax
        push 0
        push 0
        ; Exact mapped bytes 66 8B 94 8E 08 0A 00 00: mov dx, word ptr [esi + ecx*4 + 0xa08]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffc0h
        cmp edx, 1300h
        ; Exact mapped bytes 75 12: jne 0x100a7534
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 12dh
        ; Exact mapped bytes E8 2E 92 F7 FF: call 0x10020760
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ret
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov eax, dword ptr [esi + 648h]
        push eax
        push 8001020eh
        ; Exact mapped bytes E8 04 4A 0C 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
