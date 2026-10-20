// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100ED1D0 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_100ed1d0_100ED1D0() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esp + 14h]
        push edi
        mov edi, 0aaaaaaaah
        mov ebp, dword ptr [esi + 0c1ch]
        mov ecx, dword ptr [esp + 14h]
        sub ebp, eax
        mov dword ptr [esi + 0c1ch], ebp
        mov eax, dword ptr [esi + 1024h]
        xor eax, edi
        sub eax, ebx
        xor eax, edi
        mov dword ptr [esi + 1024h], eax
        xor eax, edi
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        shl edx, 2
        mov dword ptr [esi + 0c3ch], edx
        mov eax, dword ptr [esi + 1024h]
        xor eax, edi
        ; Exact mapped bytes 7D 0E: jge 0x100ed230
        __asm _emit 0x7d
        __asm _emit 0x0e
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x100ed22a
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, eax
        mov dword ptr [esi + 1024h], edi
        mov eax, dword ptr [esi + 1028h]
        mov edx, dword ptr [esp + 1ch]
        xor eax, edi
        sub eax, edx
        xor eax, edi
        mov dword ptr [esi + 1028h], eax
        xor eax, edi
        ; Exact mapped bytes 7D 06: jge 0x100ed250
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esi + 1028h], edi
        mov eax, dword ptr [esi + 374h]
        xor eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 7E 08: jle 0x100ed264
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esi + 374h], edi
        ; Exact mapped bytes EB 0A: jmp 0x100ed26e
        __asm _emit 0xeb
        __asm _emit 0x0a
        sub eax, ecx
        xor eax, edi
        mov dword ptr [esi + 374h], eax
        mov eax, dword ptr [esi + 374h]
        mov ecx, dword ptr [esi + 1034h]
        xor eax, edi
        push eax
        ; Exact mapped bytes E8 3E 9F FA FF: call 0x100971c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9f
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 4], esi
        ; Exact mapped bytes 75 4F: jne 0x100ed2dc
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [esi + 1024h]
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edi
        mov ecx, dword ptr [eax + 0ach]
        push edx
        push 0
        ; Exact mapped bytes E8 C8 17 FD FF: call 0x100bea70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1028h]
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, edi
        push ecx
        mov ecx, dword ptr [edx + 0ach]
        push 1
        ; Exact mapped bytes E8 AC 17 FD FF: call 0x100bea70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0c1ch]
        push eax
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 94 19 FD FF: call 0x100bec70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 AB 00 00 00: call 0x100ed390
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c90h]
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x100ed385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], 4
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x100ed385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5c94h], 40000000h
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x100ed385
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 1ch]
        mov ecx, dword ptr [ebx + 14h]
        sub eax, ecx
        mov edi, dword ptr [edx + 104e0h]
        sar eax, 1
        mov ebp, dword ptr [edi + 110h]
        mov ecx, dword ptr [esi + 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        mov edx, dword ptr [ebx + 18h]
        sub ecx, eax
        mov eax, dword ptr [edi + 50h]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        mov ebx, dword ptr [edi + 54h]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        sub eax, dword ptr [esi + 8]
        add eax, ebx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 5c30h]
        ; Exact mapped bytes E8 16 B6 F5 FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
