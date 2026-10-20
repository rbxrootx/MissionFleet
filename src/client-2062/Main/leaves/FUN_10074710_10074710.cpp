// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074710 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_10074710_10074710() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov eax, dword ptr [esi + 118h]
        mov dword ptr [ecx + 21714h], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x10074748
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 11ch]
        push edi
        ; Exact mapped bytes E8 AF 2A 09 00: call 0x101071f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 ED: jne 0x10074735
        __asm _emit 0x75
        __asm _emit 0xed
        mov al, byte ptr [esi + 1b2h]
        xor edi, edi
        test al, 0fh
        ; Exact mapped bytes 76 1D: jbe 0x10074771
        __asm _emit 0x76
        __asm _emit 0x1d
        mov ebx, 101ace60h
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 20 78 FB FF: call 0x1002bf80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov al, byte ptr [esi + 1b2h]
        inc edi
        and eax, 0fh
        add ebx, 4
        cmp edi, eax
        ; Exact mapped bytes 7C E8: jl 0x10074759
        __asm _emit 0x7c
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000000h
        ; Exact mapped bytes E8 9F 2A 00 00: call 0x10077220
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 50000h
        ; Exact mapped bytes E8 DF DC 06 00: call 0x100e2470
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 56 1C 10: mov eax, dword ptr [0x101c56d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x100747c7
        __asm _emit 0x74
        __asm _emit 0x18
        mov al, byte ptr [eax]
        mov cl, byte ptr [esi + 1b2h]
        and al, 1
        and cl, 0dfh
        shl al, 5
        or al, cl
        mov byte ptr [esi + 1b2h], al
        xor edi, edi
        lea ebp, [esi + 150h]
        mov edx, dword ptr [esi + 108h]
        mov ebx, dword ptr [edi + edx]
        mov ecx, ebx
        ; Exact mapped bytes E8 81 A8 08 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 CA A8 08 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebx, dword ptr [ebp]
        mov ecx, ebx
        ; Exact mapped bytes E8 70 A8 08 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 B9 A8 08 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        add ebp, 4
        cmp edi, 20h
        ; Exact mapped bytes 7C CD: jl 0x100747cf
        __asm _emit 0x7c
        __asm _emit 0xcd
        mov ecx, esi
        ; Exact mapped bytes E8 47 F6 FF FF: call 0x10073e50
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add esi, 180h
        push eax
        push esi
        ; Exact mapped bytes E8 60 45 FF FF: call 0x10068d80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
