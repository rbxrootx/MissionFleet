// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFC24 .. +0x279 bytes.
extern "C" __declspec(naked) void FUN_004ffc24_004FFC24() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 36 02 00 00: je 0x4ffe92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 25 02 00 00: je 0x4ffe92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 52 25 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 34 28 03 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4D 26 03 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx + 1ch], 0
        setne al
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x4ffcc4
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x4ffcc4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 2ch]
        or edx, 6
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 20: jmp 0x4ffce4
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4ffcdb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        or ecx, 0ah
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ffce4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        or edx, 10h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push -1
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 08: jge 0x4ffd0c
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 06: jmp 0x4ffd12
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 08: jge 0x4ffd28
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 06: jmp 0x4ffd2e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x4ffdbb
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 0B: jle 0x4ffd65
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x4ffd6b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp - 8]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4ffd92
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 24: jmp 0x4ffdb6
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4ffdb6
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x4ffe64
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        and edx, 5000h
        test edx, edx
        ; Exact mapped bytes 74 79: je 0x4ffe41
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 0B: jle 0x4ffded
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 06: jmp 0x4ffdf3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 18h], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x4ffe1a
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 25: jmp 0x4ffe3f
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 8]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x4ffe3f
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 23: jmp 0x4ffe64
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4ffe5e
        __asm _emit 0x74
        __asm _emit 0x14
        push 322h
        push 6756ach
        ; Exact mapped bytes E8 E7 8E 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffe5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ffe41
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x4ffe92
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A0 37 FD FF: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
