// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB400 .. +0x1B2 bytes.
extern "C" __declspec(naked) void FUN_587bb400() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0ch]
        push edi
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x587bb410
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 09: jmp 0x587bb419
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 14h]
        sub eax, edx
        sar eax, 1
        mov ecx, eax
        mov edi, dword ptr [esp + 18h]
        test edi, edi
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x587bb5af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esi + 10h]
        mov eax, ebx
        sub eax, edx
        sar eax, 1
        mov edx, 7fffffffh
        sub edx, eax
        cmp edx, edi
        ; Exact mapped bytes 73 05: jae 0x587bb43f
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 21 B2 13 00: call 0x588f6660
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb2
        __asm _emit 0x13
        __asm _emit 0x00
        lea edx, [eax + edi]
        push ebp
        cmp ecx, edx
        ; Exact mapped bytes 0F 83 C9 00 00 00: jae 0x587bb514
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        shr eax, 1
        mov ebx, 7fffffffh
        sub ebx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 73 0E: jae 0x587bb468
        __asm _emit 0x73
        __asm _emit 0x0e
        mov dword ptr [esp + 10h], 0
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 06: jmp 0x587bb46e
        __asm _emit 0xeb
        __asm _emit 0x06
        add ecx, eax
        mov dword ptr [esp + 10h], ecx
        cmp ecx, edx
        ; Exact mapped bytes 73 06: jae 0x587bb478
        __asm _emit 0x73
        __asm _emit 0x06
        mov dword ptr [esp + 10h], edx
        mov ecx, edx
        push 0
        push ecx
        ; Exact mapped bytes E8 70 FE FF FF: call 0x587bb2f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 24h]
        sub ebx, dword ptr [esi + 0ch]
        add esp, 8
        mov ebp, eax
        mov eax, dword ptr [esp + 24h]
        push eax
        sar ebx, 1
        push edi
        lea ecx, [ebp + ebx*2]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 30 FF FF FF: call 0x587bb3d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esi + 0ch]
        mov eax, edx
        sub eax, ecx
        sar eax, 1
        ; Exact mapped bytes 74 12: je 0x587bb4c1
        __asm _emit 0x74
        __asm _emit 0x12
        add eax, eax
        push eax
        push ecx
        push eax
        push ebp
        ; Exact mapped bytes E8 9A 17 1C 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x17
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        add esp, 10h
        mov eax, dword ptr [esi + 10h]
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes 74 14: je 0x587bb4de
        __asm _emit 0x74
        __asm _emit 0x14
        add eax, eax
        push eax
        push edx
        add ebx, edi
        push eax
        lea edx, [ebp + ebx*2]
        push edx
        ; Exact mapped bytes E8 79 17 1C 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 10h]
        sub ecx, eax
        sar ecx, 1
        add edi, ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587bb4f7
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 4E 17 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esp + 10h]
        lea ecx, [ebp + edi*2]
        lea eax, [ebp + edx*2]
        mov dword ptr [esi + 0ch], ebp
        pop ebp
        pop ebx
        pop edi
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 10h], ecx
        pop esi
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 24h]
        mov edx, ebx
        sub edx, eax
        sar edx, 1
        cmp edx, edi
        movzx edx, word ptr [ecx]
        lea ebp, [edi + edi]
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 73 4B: jae 0x587bb57b
        __asm _emit 0x73
        __asm _emit 0x4b
        lea ecx, [eax + ebp]
        push ecx
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 FE FF FF: call 0x587bb3a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 10h]
        mov ecx, eax
        sub ecx, dword ptr [esp + 1ch]
        lea edx, [esp + 24h]
        sar ecx, 1
        push edx
        sub edi, ecx
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 78 FE FF FF: call 0x587bb3d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [esi + 10h], ebp
        mov esi, dword ptr [esi + 10h]
        mov eax, dword ptr [esp + 1ch]
        lea edx, [esp + 24h]
        push edx
        sub esi, ebp
        push esi
        push eax
        ; Exact mapped bytes E8 E0 FD FF FF: call 0x587bb350
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        pop ebx
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push ebx
        mov edi, ebx
        push ebx
        sub edi, ebp
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 17 FE FF FF: call 0x587bb3a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [esp + 20h]
        push edi
        push eax
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x587bb370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 30h]
        push ecx
        add ebp, eax
        push ebp
        push eax
        ; Exact mapped bytes E8 A6 FD FF FF: call 0x587bb350
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop ebp
        pop ebx
        pop edi
        pop esi
        pop ecx
    }
}
