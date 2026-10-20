// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4B40 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_100e4b40_100E4B40() {
    __asm {
        push -1
        push 10173cb8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 1017658ch
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0B: cmp word ptr [esi + 0x1b8], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 3C: jne 0x100e4bb1
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 23ch]
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x100e4bb1
        __asm _emit 0x74
        __asm _emit 0x32
        push edi
        push 0bh
        push 0
        ; Exact mapped bytes E8 67 A7 00 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        push 0bh
        push 1
        mov edi, eax
        ; Exact mapped bytes E8 56 A7 00 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        push edi
        push eax
        mov eax, dword ptr [esi + 23ch]
        push eax
        ; Exact mapped bytes E8 20 97 F8 FF: call 0x1006e2d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        mov ecx, esi
        ; Exact mapped bytes E8 A8 A4 01 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F1 A4 01 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1f4h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100e4bd9
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1f4h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 F8 9A F6 FF: call 0x1004e6e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
