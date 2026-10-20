// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3720 .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_588b3720() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0e4h], edi
        mov dword ptr [esi + 120h], edi
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 0ch]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esp + 2ch], edi
        xor ebp, ebp
        ; Exact mapped bytes E8 2B 68 ED FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x68
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E B6 00 00 00: jle 0x588b3843
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp ebp, 80h
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x588b3843
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx + 354h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [esp + 34h]
        ; Exact mapped bytes 0F 85 7F 00 00 00: jne 0x588b3832
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 438h], edi
        ; Exact mapped bytes 75 77: jne 0x588b3832
        __asm _emit 0x75
        __asm _emit 0x77
        cmp ebx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0E: jne 0x588b37ce
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 218e0h], edi
        ; Exact mapped bytes 75 64: jne 0x588b3832
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebx + 100ch]
        movzx eax, word ptr [eax + 4]
        and eax, 1fh
        cmp eax, 6
        ; Exact mapped bytes 74 44: je 0x588b3824
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, 7
        ; Exact mapped bytes 74 3F: je 0x588b3824
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp eax, 8
        ; Exact mapped bytes 75 07: jne 0x588b37f1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 35: jmp 0x588b3826
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp eax, 4
        ; Exact mapped bytes 74 27: je 0x588b381d
        __asm _emit 0x74
        __asm _emit 0x27
        cmp eax, 5
        ; Exact mapped bytes 74 22: je 0x588b381d
        __asm _emit 0x74
        __asm _emit 0x22
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x588b3802
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 24: jmp 0x588b3826
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp eax, 2
        ; Exact mapped bytes 75 07: jne 0x588b380e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 4
        ; Exact mapped bytes EB 18: jmp 0x588b3826
        __asm _emit 0xeb
        __asm _emit 0x18
        xor edx, edx
        cmp eax, 9
        sete dl
        add edx, 5
        mov eax, edx
        ; Exact mapped bytes EB 09: jmp 0x588b3826
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x588b3826
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        inc dword ptr [esp + eax*4 + 14h]
        inc dword ptr [esp + 10h]
        lea eax, [esp + eax*4 + 14h]
        mov ebx, dword ptr [ebx + 78h]
        inc ebp
        ; Exact mapped bytes E8 75 67 ED FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0xff
        cmp ebp, eax
        ; Exact mapped bytes 0F 8C 4D FF FF FF: jl 0x588b3790
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 74h]
        push ebx
        ; Exact mapped bytes E8 10 3B 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push ebx
        ; Exact mapped bytes E8 07 3B 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        lea ebp, [esi + 0b4h]
        lea ebx, [esi + 80h]
        mov esi, dword ptr [esp + edi*4 + 14h]
        mov ecx, dword ptr [ebx - 4]
        push esi
        ; Exact mapped bytes E8 EE 3A 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push esi
        ; Exact mapped bytes E8 E6 3A 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push esi
        ; Exact mapped bytes E8 DD 3A 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        inc edi
        add ebx, 8
        add ebp, 4
        cmp edi, 7
        ; Exact mapped bytes 7C D6: jl 0x588b3865
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
