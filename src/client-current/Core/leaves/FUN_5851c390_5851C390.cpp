// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851C390 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_5851c390_5851C390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x5851c4bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 98 52 FB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x5851c4ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 EF A5 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 2E 4C 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4c
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 BD FC F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 0C 4C 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4c
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ebp - 14h]
        imul eax, edx, 75h
        cdq
        mov esi, 64h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 E9 4B 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 51 4E 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4e
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 80h], 5fh
        xor edx, edx
        mov ecx, 64h
        div ecx
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 73 43: jae 0x5851c49d
        __asm _emit 0x73
        __asm _emit 0x43
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5851c46c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 7ch]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 23: jge 0x5851c49b
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes 73 10: jae 0x5851c499
        __asm _emit 0x73
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 89 88 B8 00 00 00: mov word ptr [eax + 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5851c49b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x5851c463
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 0D: jmp 0x5851c4aa
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        ; Exact mapped bytes EB 0D: jmp 0x5851c4b9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes EB 0D: jmp 0x5851c4c8
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
