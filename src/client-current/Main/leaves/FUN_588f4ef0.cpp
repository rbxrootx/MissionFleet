// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4EF0 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_588f4ef0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 1
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x588f502c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 F8 0E EF FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x588f502c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 140h], -1
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x588f502c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 4ch]
        mov edi, dword ptr [esp + 20h]
        test ebp, ebp
        ; Exact mapped bytes 74 23: je 0x588f4f5b
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 7D 26 00: cmp word ptr [ebp + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1C: jge 0x588f4f5b
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [eax + 14h]
        push ecx
        push edi
        push edx
        mov ecx, ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebp, dword ptr [ebp + 48h]
        test ebp, ebp
        ; Exact mapped bytes 75 DD: jne 0x588f4f38
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [esi + 19ch]
        cmp eax, 8
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x588f500a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 8
        ; Exact mapped bytes 0F 8E 95 00 00 00: jle 0x588f500a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        add eax, ebx
        cdq
        idiv dword ptr [esi + 3ech]
        mov eax, dword ptr [esp + 24h]
        mov eax, dword ptr [eax]
        push 101h
        mov ecx, dword ptr [esi + edx*8 + 1a8h]
        mov edx, dword ptr [esi + edx*8 + 1ach]
        lea ecx, [ecx + eax - 4]
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        lea edx, [edx + ecx - 4]
        mov ecx, dword ptr [esi + 19ch]
        mov dword ptr [esp + 18h], edx
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
        mov ecx, dword ptr [esi + 3f0h]
        push edx
        ; Exact mapped bytes E8 63 ED 00 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebx
        cmp ebx, dword ptr [esi + 19ch]
        ; Exact mapped bytes 0F 8C 6B FF FF FF: jl 0x588f4f75
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebp, ebp
        ; Exact mapped bytes 74 1E: je 0x588f502c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, edi
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [eax + 14h]
        push ecx
        push edi
        push edx
        mov ecx, ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebp, dword ptr [ebp + 48h]
        test ebp, ebp
        ; Exact mapped bytes 75 E4: jne 0x588f5010
        __asm _emit 0x75
        __asm _emit 0xe4
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
