// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10065090 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_10065090_10065090() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 1
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x100651f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4ch]
        mov ebp, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 3B: je 0x100650e6
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x100650cd
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi]
        push ebx
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x100650af
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 19: jmp 0x100650e6
        __asm _emit 0xeb
        __asm _emit 0x19
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x100650e6
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esi]
        push ebx
        push eax
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x100650d1
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, dword ptr [edi + 0ach]
        test eax, eax
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x100651f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10065100
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x10065102
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [eax]
        lea edx, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        test eax, eax
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x100651f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 59 1C 10: mov eax, dword ptr [0x101c5914]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 35 4C 50 17 10: mov esi, dword ptr [0x1017504c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [edi + 84h]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [edi + 104e0h]
        mov edx, dword ptr [edi + 0c4h]
        mov esi, dword ptr [eax + 54h]
        mov ecx, dword ptr [eax + 110h]
        sub edx, esi
        mov ebx, dword ptr [eax + 50h]
        imul edx, ecx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        mov edx, dword ptr [edi + 0c0h]
        sub edx, ebx
        imul edx, ecx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        mov edx, dword ptr [edi + 0bch]
        sub edx, esi
        mov edi, dword ptr [edi + 0b8h]
        imul edx, ecx
        imul edx
        sub edi, ebx
        imul edi, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        imul edi
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        mov edx, dword ptr [esp + 28h]
        push edx
        ; Exact mapped bytes FF 15 5C 50 17 10: call dword ptr [0x1017505c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 50h]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x100651e3
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 18h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 68: call dword ptr [ecx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x68
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        xor eax, eax
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 68: call dword ptr [ecx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x68
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
