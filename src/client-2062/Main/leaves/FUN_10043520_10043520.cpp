// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043520 .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_10043520_10043520() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, 40000000h
        cmp dword ptr [esi + 104h], edi
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x1004369f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x1004369f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 56 1C 10: mov eax, dword ptr [0x101c5638]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x10043593
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [esi + 158h]
        mov ecx, dword ptr [esi + 154h]
        add eax, ecx
        mov dword ptr [esi + 98h], 0
        mov dword ptr [esi + 104h], 0
        lea ecx, [eax + eax*2]
        lea ecx, [eax + ecx*4]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 9ch], edx
        ; Exact mapped bytes 74 06: je 0x10043593
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 0f8h], edi
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 138h]
        mov eax, dword ptr [edi]
        xor ecx, eax
        and ecx, 1fh
        xor ecx, eax
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 130h]
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, 0e10h
        lea eax, [edx + eax + 384h]
        cdq
        idiv ecx
        test edx, edx
        mov dword ptr [esi + 0e4h], edx
        ; Exact mapped bytes 7D 08: jge 0x100435d5
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [esi + 0e4h], edx
        mov eax, dword ptr [esi + 0e4h]
        mov edx, dword ptr [edi]
        and eax, 0fffh
        and edx, 0f8007fffh
        shl eax, 0fh
        or eax, edx
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [esi + 0e8h], eax
        cmp eax, ecx
        ; Exact mapped bytes 7F 0A: jg 0x1004360f
        __asm _emit 0x7f
        __asm _emit 0x0a
        xor ecx, ecx
        test eax, eax
        setl cl
        dec ecx
        and eax, ecx
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [esi + 0e8h], edx
        mov eax, dword ptr [edi]
        and edx, 3ffh
        and eax, 0ffff801fh
        shl edx, 5
        or edx, eax
        mov dword ptr [edi], edx
        mov eax, dword ptr [esi + 88h]
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x1004368d
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 A3 B1 05 00: call 0x1009e7f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        and eax, 3
        shl eax, 1bh
        and edx, 0e7ffffffh
        or eax, edx
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 FF B1 05 00: call 0x1009e870
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        and eax, 3
        shl eax, 1dh
        and ecx, 9fffffffh
        or eax, ecx
        mov dword ptr [edi], eax
        pop edi
        mov eax, 4
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        and edx, 87ffffffh
        mov eax, 4
        mov dword ptr [edi], edx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
