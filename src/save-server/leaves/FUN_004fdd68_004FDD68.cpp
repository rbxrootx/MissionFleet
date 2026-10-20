// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDD68 .. +0x2D9 bytes.
extern "C" __declspec(naked) void FUN_004fdd68_004FDD68() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        push 7fdh
        push 674fe8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D9 C4 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 BC FF FF: call 0x4f99b3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4fdda6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 92 02 00 00: jmp 0x4fe038
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x4fddd5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0C 2F 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x4fddfd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E4 2E 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fde20
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x4fdf31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AC 2E 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fde47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x4fdf31
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x4fde60
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x4fde3e
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BB 2E 03 00: call 0x530d29
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE BA FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 02 C3 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fdea6
        __asm _emit 0x75
        __asm _emit 0x14
        push 823h
        push 674fe8h
        ; Exact mapped bytes E8 9F AE 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdea6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fde81
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4fdec8
        __asm _emit 0x75
        __asm _emit 0x14
        push 824h
        push 674fe8h
        ; Exact mapped bytes E8 7D AE 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdec8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4fdeac
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        sar eax, 8
        and eax, 0ffh
        and eax, 0ffh
        shl eax, 8
        or al, 0ffh
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fdf0d
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 2D 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 12: je 0x4fdf2c
        __asm _emit 0x74
        __asm _emit 0x12
        push 6753c4h
        push 675400h
        ; Exact mapped bytes E8 EC 26 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x4fde3e
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4fe035
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9B 2D 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4fdf58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x4fe035
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x4fdf71
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x4fdf4f
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AA 2D 03 00: call 0x530d29
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BD B9 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F1 C1 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fdfb7
        __asm _emit 0x75
        __asm _emit 0x14
        push 845h
        push 674fe8h
        ; Exact mapped bytes E8 8E AD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdfb7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4fdf92
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4fdfd9
        __asm _emit 0x75
        __asm _emit 0x14
        push 846h
        push 674fe8h
        ; Exact mapped bytes E8 6C AD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdfd9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4fdfbd
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffh
        or dh, 0ffh
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fe011
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C5 2C 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 12: je 0x4fe030
        __asm _emit 0x74
        __asm _emit 0x12
        push 675404h
        push 675440h
        ; Exact mapped bytes E8 E8 25 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x4fdf4f
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
