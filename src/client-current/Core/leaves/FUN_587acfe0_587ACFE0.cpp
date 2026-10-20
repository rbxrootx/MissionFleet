// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ACFE0 .. +0x243 bytes.
extern "C" __declspec(naked) void FUN_587acfe0_587ACFE0() {
    __asm {
        mov eax, dword ptr [esp + 1ch]
        push esi
        mov esi, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x587ad21c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 31h
        ; Exact mapped bytes 0F 85 21 02 00 00: jne 0x587ad21c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], 38h
        ; Exact mapped bytes 0F 85 16 02 00 00: jne 0x587ad21c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 FF 01 00 00: je 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 20h], 0
        mov dword ptr [edi + 18h], 0
        ; Exact mapped bytes 75 0E: jne 0x587ad02f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [edi + 20h], 587b0220h
        mov dword ptr [edi + 28h], 0
        cmp dword ptr [edi + 24h], 0
        ; Exact mapped bytes 75 07: jne 0x587ad03c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [edi + 24h], 587b0240h
        cmp dword ptr [esp + 14h], -1
        mov ecx, 6
        mov ebx, dword ptr [esp + 1ch]
        cmovne ecx, dword ptr [esp + 14h]
        mov dword ptr [esp + 28h], ecx
        test ebx, ebx
        ; Exact mapped bytes 79 0F: jns 0x587ad066
        __asm _emit 0x79
        __asm _emit 0x0f
        xor esi, esi
        cmp ebx, -0fh
        ; Exact mapped bytes 0F 8C B1 01 00 00: jl 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        neg ebx
        ; Exact mapped bytes EB 0D: jmp 0x587ad073
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ebx, 0fh
        ; Exact mapped bytes 7E 08: jle 0x587ad073
        __asm _emit 0x7e
        __asm _emit 0x08
        mov esi, 2
        sub ebx, 10h
        mov eax, dword ptr [esp + 20h]
        dec eax
        cmp eax, 8
        ; Exact mapped bytes 0F 87 92 01 00 00: ja 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 8
        ; Exact mapped bytes 0F 85 87 01 00 00: jne 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx - 8]
        cmp eax, 7
        ; Exact mapped bytes 0F 87 7B 01 00 00: ja 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 9
        ; Exact mapped bytes 0F 87 72 01 00 00: ja 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], 4
        ; Exact mapped bytes 0F 87 67 01 00 00: ja 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 8
        ; Exact mapped bytes 75 0C: jne 0x587ad0bd
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp esi, 1
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x587ad213
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 8]
        mov eax, dword ptr [edi + 20h]
        push ebp
        push 16cch
        push 1
        push dword ptr [edi + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebp, eax
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x587ad209
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 16cch
        push 0
        push ebp
        ; Exact mapped bytes E8 29 FD 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi + 1ch], ebp
        mov ecx, ebx
        mov dword ptr [ebp + 18h], esi
        mov esi, 1
        shl esi, cl
        mov dword ptr [ebp + 30h], ebx
        mov ebx, dword ptr [esp + 30h]
        push 2
        lea eax, [esi - 1]
        mov dword ptr [ebp], edi
        mov dword ptr [ebp + 34h], eax
        mov eax, 1
        lea ecx, [ebx + 7]
        mov dword ptr [ebp + 4], 2ah
        shl eax, cl
        mov dword ptr [ebp + 4ch], eax
        dec eax
        mov dword ptr [ebp + 54h], eax
        mov eax, 0aaaaaaabh
        mov dword ptr [ebp + 50h], ecx
        add ecx, 2
        mul ecx
        mov dword ptr [ebp + 1ch], 0
        shr edx, 1
        mov dword ptr [ebp + 2ch], esi
        mov dword ptr [ebp + 58h], edx
        mov eax, dword ptr [edi + 20h]
        push esi
        push dword ptr [edi + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 2
        push dword ptr [ebp + 2ch]
        mov dword ptr [ebp + 38h], eax
        push dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 2
        push dword ptr [ebp + 4ch]
        mov dword ptr [ebp + 40h], eax
        push dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp + 44h], eax
        lea ecx, [ebx + 6]
        mov eax, 1
        mov dword ptr [ebp + 16c4h], 0
        shl eax, cl
        push 4
        push eax
        mov dword ptr [ebp + 169ch], eax
        push dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [ebp + 169ch]
        add esp, 3ch
        cmp dword ptr [ebp + 38h], 0
        mov dword ptr [ebp + 8], eax
        lea ecx, [edx*4]
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 74 48: je 0x587ad1f1
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp + 40h], 0
        ; Exact mapped bytes 74 42: je 0x587ad1f1
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp + 44h], 0
        ; Exact mapped bytes 74 3C: je 0x587ad1f1
        __asm _emit 0x74
        __asm _emit 0x3c
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x587ad1f1
        __asm _emit 0x74
        __asm _emit 0x38
        add eax, edx
        mov byte ptr [ebp + 24h], 8
        dec edx
        mov dword ptr [ebp + 1698h], eax
        push edi
        lea eax, [edx + edx*2]
        mov dword ptr [ebp + 16a4h], eax
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [ebp + 84h], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [ebp + 88h], eax
        ; Exact mapped bytes E8 47 00 00 00: call 0x587ad230
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop ebp
        pop edi
        pop ebx
        pop esi
        ret
        mov dword ptr [ebp + 4], 29ah
        ; Exact mapped bytes A1 F8 C4 8B 58: mov eax, dword ptr [0x588bc4f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xc4
        __asm _emit 0x8b
        __asm _emit 0x58
        push edi
        mov dword ptr [edi + 18h], eax
        ; Exact mapped bytes E8 AA FC FF FF: call 0x587aceb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop ebp
        pop edi
        pop ebx
        mov eax, 0fffffffch
        pop esi
        ret
        pop edi
        pop ebx
        mov eax, 0fffffffeh
        pop esi
        ret
        mov eax, 0fffffffah
        pop esi
        ret
    }
}
