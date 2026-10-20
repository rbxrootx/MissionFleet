// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E6FA0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_584e6fa0_584E6FA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
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
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x584e7106
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 F0 FD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 58h]
        ; Exact mapped bytes 78 15: js 0x584e6fea
        __asm _emit 0x78
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 EF FD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x584e6ff1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 E5 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA EF FD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 8E C4 00 00 00: jle 0x584e70d3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 20: je 0x584e7038
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 E2 2C 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584e7068
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584e7068
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584e70d1
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584e708b
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584e7071
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D E5 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584e70af
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584e70d1
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584e70cf
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 E5 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584e7071
        __asm _emit 0xeb
        __asm _emit 0xa0
        ; Exact mapped bytes EB 33: jmp 0x584e7106
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 F8 F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584e70ff
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584e7106
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov esp, ebp
    }
}
