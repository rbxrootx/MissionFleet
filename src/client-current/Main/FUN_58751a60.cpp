// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 387 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58751A60 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58751a60_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58751a77
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 84h], eax
        mov eax, dword ptr [esi + 60h]
        mov ebp, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + ebp*4]
        mov eax, dword ptr [esp + 1ch]
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        lea edx, [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [ebx + 4]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + ebp*4]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [esp + 10h]
        lea ecx, [ecx + edx + 12h]
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [esp + 10h]
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x58751ace
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 1ch]
        sub edx, ecx
        lea edi, [eax + 12h]
        cmp edx, edi
        ; Exact mapped bytes 7D 0A: jge 0x58751ad8
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 14h]
        lea eax, [ecx + eax + 12h]
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esi + 18h]
        lea edx, [ebp + 1]
        imul edx, dword ptr [esp + 14h]
        cmp dword ptr [esi + 78h], 0
        lea edx, [edx + eax + 10h]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes 75 17: jne 0x58751b07
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 1ch]
        sub eax, ecx
        mov ecx, dword ptr [esi + 40h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ecx + 4]
        sar eax, 1
        sub edx, eax
        add edx, dword ptr [esi + 6ch]
        ; Exact mapped bytes EB 0E: jmp 0x58751b15
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 40h]
        mov edx, dword ptr [eax + 4]
        add edx, dword ptr [esi + 6ch]
        sub edx, dword ptr [esi + 1ch]
        add edx, ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C3 17 1B 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x17
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40h]
        mov ecx, dword ptr [eax + 18h]
        add ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 18h]
        add ecx, dword ptr [esi + 70h]
        sub ecx, dword ptr [esi + 20h]
        lea eax, [ecx + edx - 50h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 25 18 1B 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 8]
        add ebx, 7
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 7C 29: jl 0x58751b70
        __asm _emit 0x7c
        __asm _emit 0x29
        ; Exact mapped bytes EB 07: jmp 0x58751b50
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58751B50 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58751a60_segment_01() {
    __asm {
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [ecx + edi*4]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [edx + edi*4]
        push ebx
        ; Exact mapped bytes E8 F9 17 1B 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x17
        __asm _emit 0x1b
        __asm _emit 0x00
        add ebx, dword ptr [esp + 14h]
        inc edi
        cmp edi, ebp
        ; Exact mapped bytes 7E E0: jle 0x58751b50
        __asm _emit 0x7e
        __asm _emit 0xe0
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 7D 15: jge 0x58751b8a
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + edi*4]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        inc edi
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 7C EB: jl 0x58751b75
        __asm _emit 0x7c
        __asm _emit 0xeb
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov edx, dword ptr [esi + 60h]
        mov dword ptr [esi + 64h], 0
        mov eax, dword ptr [edx + ebp*4]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58751bd3
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [esp + 1ch]
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x58751bd3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, 80h
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58751bcb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x58751bcb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58751bb0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58751bcf
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x58751bd0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov edx, dword ptr [esi + 60h]
        mov eax, dword ptr [edx + ebp*4]
        mov ecx, dword ptr [esp + 24h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 60h], ecx
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
