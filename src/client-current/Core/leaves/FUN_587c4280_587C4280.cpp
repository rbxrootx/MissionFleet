// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4280 .. +0x2EA bytes.
extern "C" __declspec(naked) void FUN_587c4280_587C4280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 C5 02 00 00: je 0x587c4568
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F 84 26 02 00 00: je 0x587c44de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F 8E D0 00 00 00: jle 0x587c439d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        sub edx, dword ptr [ecx + 80h]
        cmp edx, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x587c42f0
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 1ch], 1e240h
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x587c4389
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        sub edx, dword ptr [ecx + 80h]
        cmp edx, 3039h
        ; Exact mapped bytes 7E 09: jle 0x587c4310
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 3039h
        ; Exact mapped bytes EB 73: jmp 0x587c4383
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        sub edx, dword ptr [ecx + 80h]
        cmp edx, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x587c4330
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 4d2h
        ; Exact mapped bytes EB 4D: jmp 0x587c437d
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        sub edx, dword ptr [ecx + 80h]
        cmp edx, 7bh
        ; Exact mapped bytes 7E 09: jle 0x587c434d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 7bh
        ; Exact mapped bytes EB 2A: jmp 0x587c4377
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 7ch]
        sub edx, dword ptr [ecx + 80h]
        cmp edx, 0ch
        ; Exact mapped bytes 7E 09: jle 0x587c436a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ch
        ; Exact mapped bytes EB 07: jmp 0x587c4371
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        sub edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], edx
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x587c447a
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x587c447a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 7ch]
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x587c43d4
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 1e240h
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x587c446b
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 7ch]
        cmp eax, 3039h
        ; Exact mapped bytes 7E 09: jle 0x587c43f3
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 3039h
        ; Exact mapped bytes EB 72: jmp 0x587c4465
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 7ch]
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x587c4412
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 4d2h
        ; Exact mapped bytes EB 4D: jmp 0x587c445f
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 7ch]
        cmp eax, 7bh
        ; Exact mapped bytes 7E 09: jle 0x587c442f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 7bh
        ; Exact mapped bytes EB 2A: jmp 0x587c4459
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 7ch]
        cmp eax, 0ch
        ; Exact mapped bytes 7E 09: jle 0x587c444c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ch
        ; Exact mapped bytes EB 07: jmp 0x587c4453
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        add eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 3B: je 0x587c44be
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 40 7C: cvtsi2ss xmm0, dword ptr [eax + 0x7c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x40
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 49 78: cvtsi2ss xmm1, dword ptr [ecx + 0x78]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x49
        __asm _emit 0x78
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 5A C0: cvtss2sd xmm0, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push 588be460h
        push 80h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 37 C9 CE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 20: jmp 0x587c44de
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 588be458h
        push 80h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes E8 15 C9 CE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587c44ff
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c44ff
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587c4568
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c4522
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587c4508
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 10 CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587c4546
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587c4568
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587c4566
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 10 CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587c4508
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
