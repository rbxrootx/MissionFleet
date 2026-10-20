// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F080 .. +0x184 bytes.
extern "C" __declspec(naked) void _crtGetLocaleInfoA_16_0047F080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 1ah
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8F 41 01 00 00: jg 0x47f1e8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 4]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 2ch
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6808a8h]
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x47f1be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 77 21: ja 0x47f0f7
        __asm _emit 0x77
        __asm _emit 0x21
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x47f169
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 2E: je 0x47f114
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 4A: je 0x47f136
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 74 66: je 0x47f158
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x47f188
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1001h
        ; Exact mapped bytes 74 25: je 0x47f125
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 14h], 1002h
        ; Exact mapped bytes 74 3E: je 0x47f147
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 14h], 1004h
        ; Exact mapped bytes 74 68: je 0x47f17a
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes EB 74: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 2ch
        add ecx, 6808ach
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 63: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 2ch
        mov eax, dword ptr [edx + 6808b4h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 52: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 2ch
        add ecx, 6808b8h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 41: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 2ch
        mov eax, dword ptr [edx + 6808bch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 30: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 2ch
        add ecx, 6808c0h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 1F: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 2ch
        add edx, 6808c4h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0E: jmp 0x47f188
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 2ch
        add eax, 6808cch
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 06: je 0x47f194
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 7D 02: jge 0x47f196
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB 52: jmp 0x47f1e8
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 96 64 FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov byte ptr [ecx - 1], 0
        mov eax, 1
        ; Exact mapped bytes EB 40: jmp 0x47f1fe
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 2ch
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 6808a8h]
        ; Exact mapped bytes 73 0B: jae 0x47f1da
        __asm _emit 0x73
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x47f1e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x47f09b
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 30 B8 68 00: call dword ptr [0x68b830]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
