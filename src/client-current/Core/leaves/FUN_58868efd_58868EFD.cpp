// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868EFD .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_58868efd_58868EFD() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax]
        push dword ptr [eax + 4ch]
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 A0 03 00 00: call 0x588692b3
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        push dword ptr [eax]
        mov eax, dword ptr [esi + 0ch]
        push dword ptr [eax]
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 F3 09 00 00: call 0x58869919
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        add esp, 14h
        mov dword ptr [ecx], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x58868fe5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58868f7e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, 58907520h
        push edi
        ; Exact mapped bytes 66 8B 38: mov di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x38
        xor ecx, ecx
        inc ecx
        ; Exact mapped bytes 66 3B 3A: cmp di, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3a
        ; Exact mapped bytes 75 1E: jne 0x58868f6e
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58868f6a
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 78 02: mov di, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 7A 02: cmp di, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7a
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x58868f6e
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, 4
        add edx, 4
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 DB: jne 0x58868f45
        __asm _emit 0x75
        __asm _emit 0xdb
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x58868f72
        __asm _emit 0xeb
        __asm _emit 0x04
        sbb eax, eax
        or eax, ecx
        pop edi
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58868f7e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 58969980h
        xchg dword ptr [eax], ecx
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax]
        add eax, 4ch
        push eax
        ; Exact mapped bytes E8 17 D3 00 00: call 0x588762a7
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 0C D2 00 00: call 0x588761a5
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        add esp, 0ch
        mov eax, dword ptr [eax]
        test byte ptr [eax + 350h], 2
        ; Exact mapped bytes 75 4F: jne 0x58868ff9
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes F6 05 04 78 90 58 01: test byte ptr [0x58907804], 1
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 46: jne 0x58868ff9
        __asm _emit 0x75
        __asm _emit 0x46
        push dword ptr [eax + 4ch]
        push 58969984h
        ; Exact mapped bytes E8 E7 D2 00 00: call 0x588762a7
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 84 99 96 58: mov eax, dword ptr [0x58969984]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        pop ecx
        pop ecx
        pop esi
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 89 0D 60 73 90 58: mov dword ptr [0x58907360], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 30 74 90 58: mov dword ptr [0x58907430], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes A3 24 75 90 58: mov dword ptr [0x58907524], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        ret
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 B7 D1 00 00: call 0x588761a5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 E3 CF 00 00: call 0x58875fda
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop esi
        ret
    }
}
