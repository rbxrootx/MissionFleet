// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AD3D0 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_587ad3d0_587AD3D0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        cmp dword ptr [esi + 74h], 0
        ; Exact mapped bytes 75 13: jne 0x587ad3f1
        __asm _emit 0x75
        __asm _emit 0x13
        push esi
        ; Exact mapped bytes E8 2C 05 00 00: call 0x587ad910
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esi + 74h], 0
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x587ad4e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 38h]
        mov dword ptr [esi + 60h], 0
        mov dl, byte ptr [ecx + eax]
        mov eax, dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        ; Exact mapped bytes 66 FF 84 86 94 00 00 00: inc word ptr [esi + eax*4 + 0x94]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 6ch]
        dec dword ptr [esi + 74h]
        inc edx
        mov eax, dword ptr [esi + 16a0h]
        mov dword ptr [esi + 6ch], edx
        cmp eax, dword ptr [esi + 16a4h]
        ; Exact mapped bytes 0F 85 6F FF FF FF: jne 0x587ad3d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 78 07: js 0x587ad477
        __asm _emit 0x78
        __asm _emit 0x07
        mov eax, dword ptr [esi + 38h]
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x587ad479
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        sub edx, ecx
        push edx
        push eax
        push esi
        ; Exact mapped bytes E8 BB 2E 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 9A 2E 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ad4cd
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DD F3 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ad4cd
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 85 FF FE FF FF: jne 0x587ad3d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 74 F1: je 0x587ad4d9
        __asm _emit 0x74
        __asm _emit 0xf1
        mov dword ptr [esi + 16b4h], 0
        cmp eax, 4
        ; Exact mapped bytes 75 79: jne 0x587ad570
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ad505
        __asm _emit 0x78
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 38h]
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587ad507
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 6ch]
        push 1
        sub eax, edx
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 2A 2E 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 09 2E 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ad55e
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4C F3 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ad55e
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [esi]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        cmp dword ptr [ecx + 10h], eax
        pop ebx
        setne al
        add eax, 2
        ret
        cmp dword ptr [esi + 16a0h], 0
        ; Exact mapped bytes 74 3B: je 0x587ad5b4
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ad587
        __asm _emit 0x78
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 38h]
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587ad589
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 6ch]
        push 0
        sub eax, edx
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 A8 2D 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push dword ptr [esi]
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes E8 9B 05 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esp, 14h
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 25 FF FF FF: je 0x587ad4d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    }
}
