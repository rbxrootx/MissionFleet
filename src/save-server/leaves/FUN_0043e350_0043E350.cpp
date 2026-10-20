// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E350 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_0043e350_0043E350() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58be6eh
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
        sub esp, 64h
        mov dword ptr [ebp - 5ch], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 F3 FF FF: call 0x43d6b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 8
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx], 0
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x43e478
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        shl eax, 2
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 80h
        ; Exact mapped bytes 76 11: jbe 0x43e3f1
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 77 E0 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 7F: jmp 0x43e470
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 30h]
        sub edx, 1
        shr edx, 3
        lea eax, [edx*4 + 685054h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x43e41a
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 E9 41 FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x43e438
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0F: jmp 0x43e447
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 3F 65 FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x43e46a
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 2ch], 685094h
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x43e47f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        lea eax, [ecx + edx*4]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        mov dl, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 38h], dl
        mov al, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 40h], al
        mov cl, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 44h], cl
        mov edx, dword ptr [ebp - 54h]
        cmp edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 75 08: jne 0x43e4e5
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 22: jmp 0x43e507
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 54h]
        sub ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 67 77 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 54h]
        sub ecx, dword ptr [ebp - 50h]
        add eax, ecx
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 5ch]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
