// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6ED0 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_100c6ed0_100C6ED0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 3E 88 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 0a0h]
        lea eax, [edi + edi*2]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 29 88 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 0
        ; Exact mapped bytes E8 1C 88 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0
        ; Exact mapped bytes E8 0F 88 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [edi + edi*2]
        lea ecx, [eax + eax*4]
        mov eax, 10624dd3h
        shl ecx, 4
        imul ecx
        sar edx, 6
        mov ecx, edx
        mov eax, 88888889h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 94h]
        mov ebx, edx
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 D4 87 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, ebx
        mov ecx, 3ch
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 98h]
        push edx
        ; Exact mapped bytes E8 BE 87 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [eax + 54h], 0
        mov dword ptr [eax + 58h], edi
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 18h
        ; Exact mapped bytes 7E 0F: jle 0x100c6f8f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c6f8f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 60h]
        ; Exact mapped bytes EB 02: jmp 0x100c6f91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a4h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100c6fc6
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
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 14h
        ; Exact mapped bytes 7E 0F: jle 0x100c6fe3
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c6fe3
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 50h]
        ; Exact mapped bytes EB 02: jmp 0x100c6fe5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100c701a
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
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 3B F5 FF FF: call 0x100c6560
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
