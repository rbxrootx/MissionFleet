// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749C70 .. +0x2DB bytes.
extern "C" __declspec(naked) void FUN_58749c70() {
    __asm {
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 66 8B 45 24: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x58749f48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp + 84h]
        mov ecx, dword ptr [ebp + 88h]
        mov dword ptr [ebp + 8ch], eax
        mov eax, dword ptr [ebp + 7ch]
        mov dword ptr [ebp + 94h], eax
        mov eax, dword ptr [ebp + 0c4h]
        mov dword ptr [ebp + 90h], ecx
        mov ecx, dword ptr [ebp + 80h]
        push esi
        mov dword ptr [ebp + 98h], ecx
        mov dword ptr [ebp + 0ach], edx
        mov dword ptr [ebp + 0a8h], edx
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x58749d69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x58749dc6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 68h], 1
        ; Exact mapped bytes 75 49: jne 0x58749d2f
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x58749d12
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 EE C9 18 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc9
        __asm _emit 0x18
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58749d12
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 74h]
        mov edx, dword ptr [ecx + 4]
        lea eax, [ebp + 6ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [ebp + 50h]
        push eax
        ; Exact mapped bytes E8 40 C8 18 00: call 0x588d6550
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x58749d2f
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 84h]
        mov eax, dword ptr [ebp + 88h]
        mov byte ptr [ebp + 68h], 0
        mov dword ptr [ebp + 74h], 0
        mov dword ptr [ebp + 6ch], edx
        mov dword ptr [ebp + 70h], eax
        mov esi, dword ptr [ebp + 84h]
        mov eax, esi
        sub eax, dword ptr [ebp + 6ch]
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7F 3A: jg 0x58749d7e
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 88h]
        mov eax, ecx
        sub eax, dword ptr [ebp + 70h]
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7F 25: jg 0x58749d7e
        __asm _emit 0x7f
        __asm _emit 0x25
        mov dword ptr [ebp + 0c4h], 40000000h
        mov dword ptr [ebp + 70h], ecx
        mov dword ptr [ebp + 6ch], esi
        cmp dword ptr [ebp + 9ch], 0
        ; Exact mapped bytes 75 4D: jne 0x58749dbf
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [ebp + 0bch], 0
        ; Exact mapped bytes EB 48: jmp 0x58749dc6
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp + 9ch]
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x58749dc6
        __asm _emit 0x74
        __asm _emit 0x3e
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp + 0a0h]
        mov ecx, ebp
        push eax
        ; Exact mapped bytes E8 D6 FC FF FF: call 0x58749a70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 81 FD FF FF: call 0x58749b20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp + 0ach], edx
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x58749db9
        __asm _emit 0x7d
        __asm _emit 0x02
        add edx, ecx
        mov dword ptr [ebp + 0ach], edx
        mov ecx, ebp
        ; Exact mapped bytes E8 9A FB FF FF: call 0x58749960
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0c8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x58749f2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0b4h]
        imul edx, dword ptr [eax + 0ach]
        mov ecx, dword ptr [ebp + 88h]
        sub edx, 64h
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D 39 01 00 00: jge 0x58749f2b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 64h
        ; Exact mapped bytes 0F 8E 30 01 00 00: jle 0x58749f2b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [eax + 0a8h]
        mov ecx, dword ptr [ebp + 84h]
        sub edx, 40h
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D 12 01 00 00: jge 0x58749f2b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 40h
        ; Exact mapped bytes 0F 8E 09 01 00 00: jle 0x58749f2b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ach]
        mov ecx, dword ptr [ebp + 0d0h]
        push ebx
        push edi
        push eax
        lea ebx, [ebp + 0d4h]
        ; Exact mapped bytes E8 84 FC FF FF: call 0x58749ac0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 0ch
        mov esi, eax
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor edi, edi
        mov esi, ebx
        ; Exact mapped bytes EB 03: jmp 0x58749e50
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add ecx, dword ptr [ebp + 88h]
        mov edx, dword ptr [esi]
        add edx, dword ptr [ebp + 84h]
        push ecx
        mov ecx, dword ptr [ebp + 0c8h]
        push edx
        ; Exact mapped bytes E8 F2 9E 07 00: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58749e77
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 21: jne 0x58749e98
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 50h]
        cmp dword ptr [eax + 60c4h], 1
        ; Exact mapped bytes 75 0A: jne 0x58749e8d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [eax + 60c4h], 0
        inc edi
        add esi, 8
        cmp edi, 4
        ; Exact mapped bytes 7C BA: jl 0x58749e50
        __asm _emit 0x7c
        __asm _emit 0xba
        ; Exact mapped bytes EB 4F: jmp 0x58749ee7
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp + 50h]
        cmp dword ptr [eax + 60c4h], 0
        ; Exact mapped bytes 75 0A: jne 0x58749eae
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [eax + 60c4h], 1
        mov eax, dword ptr [ebp + 8ch]
        mov ecx, dword ptr [ebp + 90h]
        mov edx, dword ptr [ebp + 94h]
        mov dword ptr [ebp + 84h], eax
        mov eax, dword ptr [ebp + 98h]
        mov dword ptr [ebp + 88h], ecx
        mov ecx, dword ptr [ebp + 0a8h]
        mov dword ptr [ebp + 7ch], edx
        mov dword ptr [ebp + 80h], eax
        mov dword ptr [ebp + 0ach], ecx
        cmp dword ptr [ebp + 104h], 1
        pop edi
        pop ebx
        ; Exact mapped bytes 75 39: jne 0x58749f2b
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8ch]
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [ebp + 94h]
        mov dword ptr [ebp + 84h], edx
        mov edx, dword ptr [ebp + 98h]
        mov dword ptr [ebp + 88h], eax
        mov eax, dword ptr [ebp + 0a8h]
        mov dword ptr [ebp + 7ch], ecx
        mov dword ptr [ebp + 80h], edx
        mov dword ptr [ebp + 0ach], eax
        mov ecx, dword ptr [ebp + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x58749f47
        __asm _emit 0x74
        __asm _emit 0x15
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [ebp + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58749f4a
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x58749f32
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop ebp
        ret
        pop esi
    }
}
