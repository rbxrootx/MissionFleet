// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D6A0 .. +0x289 bytes.
extern "C" __declspec(naked) void FUN_5876d6a0_5876D6A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 18h], 12h
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 5eb8h], eax
        ; Exact mapped bytes 7C 2A: jl 0x5876d6f2
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 18h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        add ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 5eb8h], ecx
        ; Exact mapped bytes 0F 8E F9 00 00 00: jle 0x5876d7eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876d704
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5876d7e6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5876d7e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5876d76d
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, 2
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 8C 10 F8 40 00 00: movsx ecx, word ptr [eax + edx + 0x40f8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 87 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x87
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 74: jmp 0x5876d7e1
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 65 72 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov edx, dword ptr [ebp - 10h]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5876d799
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        shl edx, 2
        mov esi, 1ch
        sub esi, edx
        mov eax, dword ptr [ecx + eax*4 + 2ach]
        mov ecx, esi
        shr eax, cl
        and eax, 0fh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 20h], eax
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 84 4A F8 40 00 00: movsx eax, word ptr [edx + ecx*2 + 0x40f8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 86 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x86
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x5876d6fb
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x5876d924
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 5eb8h], eax
        ; Exact mapped bytes 0F 8E 1E 01 00 00: jle 0x5876d924
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        add ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 5eb8h], ecx
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x5876d924
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876d842
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5876d924
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5876d91f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x5876d8ef
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 59 71 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov edx, dword ptr [ebp - 14h]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5876d8a5
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        shl edx, 2
        mov esi, 1ch
        sub esi, edx
        mov eax, dword ptr [ecx + eax*4 + 2ach]
        mov ecx, esi
        shr eax, cl
        and eax, 0fh
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 24h], eax
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 84 4A F8 40 00 00: movsx eax, word ptr [edx + ecx*2 + 0x40f8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 85 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x5876d91f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, 2
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 8C 10 F8 40 00 00: movsx ecx, word ptr [eax + edx + 0x40f8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 62 85 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x5876d839
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
