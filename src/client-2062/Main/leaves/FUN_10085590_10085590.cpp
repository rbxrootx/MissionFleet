// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10085590 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_10085590_10085590() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x100856bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x100856b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 3C 0F 00 00: mov ax, word ptr [esi + 0xf3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100855c7
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 6E: jne 0x10085635
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes 66 83 3D 44 D1 1A 10 00: cmp word ptr [0x101ad144], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 75 64: jne 0x10085635
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [esi + 0f34h]
        push edi
        ; Exact mapped bytes E8 DD D9 F8 FF: call 0x10012fc0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x100856a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi + 0f38h]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ffffffh
        push eax
        push edx
        push eax
        ; Exact mapped bytes E8 1A D3 F8 FF: call 0x10012920
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 6ch]
        push eax
        ; Exact mapped bytes E8 A1 E6 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f38h]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ffffffh
        push eax
        push eax
        mov eax, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 86 D2 F8 FF: call 0x100128b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 70h]
        push eax
        ; Exact mapped bytes E8 7D E6 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x100856b3
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x10085641
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 72: jne 0x100856b3
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [esi + 0f34h]
        push edi
        ; Exact mapped bytes E8 6D D9 F8 FF: call 0x10012fc0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x100856a7
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi + 0f38h]
        push 0ffffffh
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 AE D2 F8 FF: call 0x10012920
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 94h]
        push eax
        ; Exact mapped bytes E8 32 E6 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f38h]
        mov edx, dword ptr [edi]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ffffffh
        push eax
        push eax
        push edx
        ; Exact mapped bytes E8 17 D2 F8 FF: call 0x100128b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 98h]
        push eax
        ; Exact mapped bytes E8 0B E6 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x100856b3
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 AD 75 FC FF: call 0x1004cc60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 0F 85 E7 FE FF FF: jne 0x100855a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
    }
}
