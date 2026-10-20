// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100971C0 .. +0x27B bytes.
extern "C" __declspec(naked) void FUN_100971c0_100971C0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        push esi
        mov ecx, dword ptr [edi + 50h]
        ; Exact mapped bytes E8 1F 31 F9 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 5ch]
        push esi
        ; Exact mapped bytes E8 16 31 F9 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, dword ptr [edi + 60h]
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x10097268
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 207h
        ; Exact mapped bytes 7E 12: jle 0x10097206
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10097206
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 81ch]
        ; Exact mapped bytes EB 02: jmp 0x10097208
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1009723a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 99eh
        ; Exact mapped bytes 0F 8E 30 01 00 00: jle 0x1009737f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x1009737f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2678h]
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x10097381
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 64h]
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x100972f8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 99fh
        ; Exact mapped bytes 7E 12: jle 0x10097296
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10097296
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 267ch]
        ; Exact mapped bytes EB 02: jmp 0x10097298
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100972ca
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9a0h
        ; Exact mapped bytes 0F 8E A0 00 00 00: jle 0x1009737f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x1009737f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2680h]
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x10097381
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 68h]
        cmp esi, eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x10097391
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 9a1h
        ; Exact mapped bytes 7E 12: jle 0x10097328
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10097328
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2684h]
        ; Exact mapped bytes EB 02: jmp 0x1009732a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1009735c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9a2h
        ; Exact mapped bytes 7E 12: jle 0x1009737f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009737f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2688h]
        ; Exact mapped bytes EB 02: jmp 0x10097381
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x10097436
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7D: jmp 0x1009740e
        __asm _emit 0xeb
        __asm _emit 0x7d
        cmp ecx, 9a3h
        ; Exact mapped bytes 7E 12: jle 0x100973ab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100973ab
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 268ch]
        ; Exact mapped bytes EB 02: jmp 0x100973ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 5ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100973df
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9a4h
        ; Exact mapped bytes 7E 12: jle 0x10097402
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10097402
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2690h]
        ; Exact mapped bytes EB 02: jmp 0x10097404
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10097436
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
