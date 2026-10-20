// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E1A0 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_0043e1a0_0043E1A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58be3eh
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
        sub esp, 50h
        mov dword ptr [ebp - 50h], ecx
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 50h]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], 0
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x43e2a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        shl edx, 2
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 80h
        ; Exact mapped bytes 76 11: jbe 0x43e221
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 47 E2 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 7F: jmp 0x43e2a0
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 24h], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x43e24a
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 B9 43 FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x43e268
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0F: jmp 0x43e277
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 0F 67 FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x43e29a
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 2ch], 685094h
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 07: jmp 0x43e2af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 8], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4ch], edx
        mov al, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 34h], al
        mov cl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 38h], cl
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 12: jmp 0x43e315
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 48h]
        sub ecx, 1
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 4
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43e325
        __asm _emit 0x76
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB DE: jmp 0x43e303
        __asm _emit 0xeb
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 50h]
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
