// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A34B0 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_587a34b0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        mov edi, dword ptr [esp + 20h]
        test al, 1
        ; Exact mapped bytes 74 64: je 0x587a352d
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [esi + 184h]
        mov edx, dword ptr [esi + 180h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 2E 29 04 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x587a352d
        __asm _emit 0x74
        __asm _emit 0x47
        cmp dword ptr [esi + 138h], -1
        ; Exact mapped bytes 74 3E: je 0x587a352d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ebx, dword ptr [esi + 4ch]
        test ebx, ebx
        ; Exact mapped bytes 74 37: je 0x587a352d
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 83 7B 26 00: cmp word ptr [ebx + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 19: jge 0x587a3516
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push edi
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ebx, dword ptr [ebx + 48h]
        test ebx, ebx
        ; Exact mapped bytes 75 E2: jne 0x587a34f6
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 17: jmp 0x587a352d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push edi
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ebx, dword ptr [ebx + 48h]
        test ebx, ebx
        ; Exact mapped bytes 75 E9: jne 0x587a3516
        __asm _emit 0x75
        __asm _emit 0xe9
        cmp dword ptr [esi + 3e0h], 1
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x587a3671
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 184h]
        mov ecx, dword ptr [esi + 180h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 28 04 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x587a3671
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 138h], -1
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x587a3671
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 14 04 00 00 00: cmp word ptr [esi + 0x414], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x587a3628
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        cmp eax, 8
        ; Exact mapped bytes 0F 8C EC 00 00 00: jl 0x587a3671
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 0F 8E E2 00 00 00: jle 0x587a3671
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [esi + 170h]
        add eax, ebx
        cdq
        idiv dword ptr [esi + 3cch]
        mov ecx, dword ptr [ebp]
        push 101h
        mov eax, dword ptr [esi + edx*8 + 188h]
        lea eax, [eax + ecx - 4]
        mov ecx, dword ptr [esi + edx*8 + 18ch]
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [esp + 14h], eax
        lea eax, [ecx + edx - 4]
        mov ecx, dword ptr [esi + 174h]
        mov dword ptr [esp + 18h], eax
        mov eax, ebx
        sub eax, ecx
        shl eax, 7
        cdq
        idiv ecx
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        sub eax, -80h
        push eax
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 3e4h]
        push edx
        ; Exact mapped bytes E8 4F 07 16 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x16
        __asm _emit 0x00
        inc ebx
        cmp ebx, dword ptr [esi + 174h]
        ; Exact mapped bytes 0F 8C 72 FF FF FF: jl 0x587a3590
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        mov ecx, dword ptr [esi + 180h]
        add ecx, dword ptr [ebp]
        mov ebp, dword ptr [ebp + 4]
        add ebp, dword ptr [esi + 184h]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [edi + 0ch]
        push ebp
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esi + 3e4h]
        push eax
        ; Exact mapped bytes E8 EF 06 16 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x16
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
