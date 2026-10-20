// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436B40 .. +0x2E9 bytes.
extern "C" __declspec(naked) void FUN_00436b40_00436B40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bcc5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0a0h
        mov dword ptr [ebp - 0a0h], ecx
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 0a0h]
        add edx, 8
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 12: jbe 0x436bbb
        __asm _emit 0x76
        __asm _emit 0x12
        push 670a18h
        ; Exact mapped bytes E8 ED F1 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 51 02 00 00: jmp 0x436e0c
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 0B: jae 0x436bdf
        __asm _emit 0x73
        __asm _emit 0x0b
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 0a4h], edx
        ; Exact mapped bytes EB 09: jmp 0x436be8
        __asm _emit 0xeb
        __asm _emit 0x09
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 98h], eax
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 90h], eax
        mov cl, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 28h], cl
        mov edx, dword ptr [ebp - 94h]
        sub edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        mov ecx, 0fffffffeh
        add ecx, 1
        cmp dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes 0F 87 F7 00 00 00: ja 0x436d56
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 86 ED 00 00 00: jbe 0x436d56
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x436d17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 80h
        ; Exact mapped bytes 76 14: jbe 0x436c90
        __asm _emit 0x76
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 DB 57 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 79: jmp 0x436d09
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 40h]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x436cb6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, 685094h
        ; Exact mapped bytes E8 6A 93 FF FF: call 0x430020
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0C: je 0x436cd4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 0F: jmp 0x436ce3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 A3 DC FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x436d00
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, 685094h
        ; Exact mapped bytes E8 10 94 FF FF: call 0x430110
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x436d21
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x436d63
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 A0 F2 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 80h], eax
        mov cl, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 44h], cl
        mov dl, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 48h], dl
        mov al, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], al
        mov cl, byte ptr [ebp - 64h]
        mov byte ptr [ebp - 5ch], cl
        mov dl, byte ptr [ebp - 68h]
        mov byte ptr [ebp - 60h], dl
        mov al, byte ptr [ebp - 70h]
        mov byte ptr [ebp - 6ch], al
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 84h]
        sub eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 09: jmp 0x436dd0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 74h]
        sub ecx, 1
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 7E 1E: jle 0x436df4
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 78h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 78h]
        add edx, 1
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 7ch]
        add eax, 1
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB D3: jmp 0x436dc7
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
