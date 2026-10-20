// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C170 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_1000c170_1000C170() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, 57619f1h
        mov edx, dword ptr [edi + 4a0h]
        mov ecx, dword ptr [edi + 4]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi + 494h]
        push eax
        mov eax, dword ptr [edi + 490h]
        push eax
        push edx
        push ecx
        ; Exact mapped bytes E8 D9 5E 01 00: call 0x10022080
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 490h]
        mov edx, dword ptr [edi + 4]
        lea esi, [eax + eax*4]
        sub ecx, edx
        mov edx, dword ptr [edi + 4a0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        xor ebx, ebx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi + 494h]
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        shl esi, 1
        ; Exact mapped bytes DD 5C 24 1C: fstp qword ptr [esp + 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push ecx
        push edx
        ; Exact mapped bytes E8 AD 05 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 18h
        ; Exact mapped bytes E8 9F 05 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi + 31ch], eax
        mov edi, dword ptr [edi + 340h]
        mov eax, 91a2b3c5h
        imul edi
        add edx, edi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 0F 87 86 00 00 00: ja 0x1000c2b5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 20 C3 00 10: jmp dword ptr [edx*4 + 0x1000c320]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x10
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp edx, 3
        ; Exact mapped bytes 77 67: ja 0x1000c2b5
        __asm _emit 0x77
        __asm _emit 0x67
        ; Exact mapped bytes FF 24 95 30 C3 00 10: jmp dword ptr [edx*4 + 0x1000c330]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x10
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 78 4B: js 0x1000c2b5
        __asm _emit 0x78
        __asm _emit 0x4b
        cmp edx, 2
        ; Exact mapped bytes 7E 42: jle 0x1000c2b1
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp edx, 3
        ; Exact mapped bytes 75 41: jne 0x1000c2b5
        __asm _emit 0x75
        __asm _emit 0x41
        lea eax, [edi + 708h]
        cmp eax, esi
        ; Exact mapped bytes 7F 33: jg 0x1000c2b1
        __asm _emit 0x7f
        __asm _emit 0x33
        ; Exact mapped bytes 7D 5D: jge 0x1000c2dd
        __asm _emit 0x7d
        __asm _emit 0x5d
        sub esi, edi
        pop edi
        sub esi, 0e10h
        mov ebx, esi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes 74 16: je 0x1000c2be
        __asm _emit 0x74
        __asm _emit 0x16
        test edx, edx
        ; Exact mapped bytes 7E 09: jle 0x1000c2b5
        __asm _emit 0x7e
        __asm _emit 0x09
        cmp edx, 3
        ; Exact mapped bytes 7F 04: jg 0x1000c2b5
        __asm _emit 0x7f
        __asm _emit 0x04
        sub esi, edi
        mov ebx, esi
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 8
        ret
        lea eax, [edi - 708h]
        cmp eax, esi
        ; Exact mapped bytes 7E 13: jle 0x1000c2db
        __asm _emit 0x7e
        __asm _emit 0x13
        sub esi, edi
        pop edi
        add esi, 0e10h
        mov ebx, esi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret
        ; Exact mapped bytes 7C D4: jl 0x1000c2b1
        __asm _emit 0x7c
        __asm _emit 0xd4
        mov ebx, 708h
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 8
        ret
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 77 B2: ja 0x1000c2b5
        __asm _emit 0x77
        __asm _emit 0xb2
        ; Exact mapped bytes FF 24 95 40 C3 00 10: jmp dword ptr [edx*4 + 0x1000c340]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x10
        sub esi, edi
        pop edi
        add esi, 0e10h
        mov ebx, esi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret
    }
}
