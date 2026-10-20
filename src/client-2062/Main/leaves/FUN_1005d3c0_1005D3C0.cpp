// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D3C0 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_1005d3c0_1005D3C0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 74 2B: je 0x1005d3f6
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 0d0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 5C: je 0x1005d431
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [esp + 10h]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 EC 49 09 00: call 0x100f1dd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 2E 10 00 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 0C: mov ax, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 17: jne 0x1005d418
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 9C 06 FC FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x1005d431
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 7F 06 FC FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
