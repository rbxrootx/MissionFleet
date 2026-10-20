// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487350 .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_00487350_00487350() {
    __asm {
        sub esp, 20h
        push ebx
        push esi
        mov esi, dword ptr [esp + 30h]
        push edi
        cmp esi, 82h
        ; Exact mapped bytes 75 24: jne 0x487386
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        push eax
        mov edi, dword ptr [esp + 34h]
        push ecx
        push edx
        push esi
        push edi
        ; Exact mapped bytes E8 C4 D2 FF FF: call 0x484640
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        xor eax, eax
        mov edi, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x4873c6
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push eax
        push ecx
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 5B D0 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        cmp esi, 18h
        ; Exact mapped bytes 77 33: ja 0x4873fe
        __asm _emit 0x77
        __asm _emit 0x33
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x487461
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 0fh
        ; Exact mapped bytes 74 53: je 0x487429
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push eax
        push ecx
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 23 D0 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        cmp esi, 83h
        ; Exact mapped bytes 77 0D: ja 0x487413
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x4874ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 46h
        ; Exact mapped bytes 74 7A: je 0x48748b
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes EB C3: jmp 0x4873d6
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp esi, 1943h
        ; Exact mapped bytes 72 BB: jb 0x4873d6
        __asm _emit 0x72
        __asm _emit 0xbb
        cmp esi, 1944h
        ; Exact mapped bytes 0F 86 41 01 00 00: jbe 0x487568
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AD: jmp 0x4873d6
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ebx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        push eax
        push ecx
        push esi
        push edi
        push ebx
        push edi
        ; Exact mapped bytes E8 D0 CF FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        push ebx
        push 0
        push edi
        ; Exact mapped bytes E8 3B FA FF FF: call 0x486e90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 66 FF FF FF: jae 0x4873d6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 38h], 0
        ; Exact mapped bytes 0F 85 5B FF FF FF: jne 0x4873d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push edi
        ; Exact mapped bytes E8 6D ED FF FF: call 0x4861f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x4873d6
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 82 3C FF FF FF: jb 0x4873d6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 3ch]
        push eax
        push edi
        ; Exact mapped bytes E8 4B ED FF FF: call 0x4861f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x4873d6
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 1A FF FF FF: jae 0x4873d6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push ecx
        push eax
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 31 CF FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [esp + 3ch]
        lea ecx, [esp + 0ch]
        mov eax, dword ptr [edx]
        mov ebx, dword ptr [edx + 4]
        push 1
        push 2
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 4], ebx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], edx
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        cmp dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7D 3D: jge 0x48755f
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [esp + 18h]
        push edi
        inc eax
        mov dword ptr [esp + 14h], eax
        lea eax, [ecx + 1]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 9C BE 68 00: mov ebx, dword ptr [0x68be9c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 14h]
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea eax, [esp + 0ch]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF 15 F4 BD 68 00: call dword ptr [0x68bdf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        mov eax, dword ptr [esp + 3ch]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [eax], 1
        mov eax, 3e9h
        add esp, 20h
        ret
    }
}
