// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785DB0 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_58785db0() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x58785e76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 50h], 0
        push esi
        ; Exact mapped bytes 0F 86 8B 00 00 00: jbe 0x58785e55
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 70h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        push ebx
        lea esi, [edi + 8ch]
        mov ebx, 8
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x58785e0d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        push eax
        ; Exact mapped bytes E8 68 2E FB FF: call 0x58738c60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58785e07
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esi]
        cmp dword ptr [edx + 460h], 0
        ; Exact mapped bytes 74 06: je 0x58785e0d
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi], 0
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 CB: jne 0x58785de0
        __asm _emit 0x75
        __asm _emit 0xcb
        cmp dword ptr [edi + 74h], 1
        pop ebx
        ; Exact mapped bytes 75 07: jne 0x58785e23
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 8D F4 FF FF: call 0x587852b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0b4h]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58785e47
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, edi
        ; Exact mapped bytes E8 2C F1 FF FF: call 0x58784f60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 E5 F2 FF FF: call 0x58785120
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 0b4h], 7dh
        ; Exact mapped bytes EB 07: jmp 0x58785e4e
        __asm _emit 0xeb
        __asm _emit 0x07
        dec eax
        mov dword ptr [edi + 0b4h], eax
        mov ecx, edi
        ; Exact mapped bytes E8 4B FA FF FF: call 0x587858a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x58785e75
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58785e78
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x58785e60
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
