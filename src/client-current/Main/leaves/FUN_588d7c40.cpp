// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D7C40 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_588d7c40() {
    __asm {
        sub esp, 0ch
        push ebp
        xor ebp, ebp
        cmp byte ptr [esp + 18h], 0
        push edi
        mov edi, ecx
        mov dword ptr [esp + 10h], ebp
        mov byte ptr [esp + 0bh], 1
        ; Exact mapped bytes 0F 86 34 01 00 00: jbe 0x588d7d91
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        mov esi, dword ptr [esp + 28h]
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes EB 07: jmp 0x588d7c70
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        and eax, 1fh
        cmp dword ptr [edi + eax*4 + 17ch], 0
        lea eax, [edi + eax*4 + 17ch]
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x588d7d72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 3ch]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi]
        and ecx, 1fh
        cmp ebp, 3
        mov edx, dword ptr [edi + ecx*4 + 17ch]
        mov ebx, eax
        ; Exact mapped bytes 7D 09: jge 0x588d7cb0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [edx + 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x588d7cb7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [edx + 68h], 0ffffffffh
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 75 72: jne 0x588d7d33
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 D2 C5 F7 FF: call 0x588542a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [edx + 20c9ch]
        and ecx, 1fh
        mov ecx, dword ptr [eax + ecx*4 + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [edx + 20c9ch]
        and ecx, 1fh
        mov ecx, dword ptr [eax + ecx*4 + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add dword ptr [esp + 18h], eax
        ; Exact mapped bytes FF 0D 00 49 A2 58: dec dword ptr [0x58a24900]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [esp + 13h], 0
        ; Exact mapped bytes 74 1C: je 0x588d7d33
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 7ch]
        movzx ecx, word ptr [eax + 4]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 76 05: jbe 0x588d7d2e
        __asm _emit 0x76
        __asm _emit 0x05
        dec ecx
        ; Exact mapped bytes 66 89 48 04: mov word ptr [eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        mov byte ptr [esp + 13h], 0
        mov eax, dword ptr [esi]
        and eax, 1fh
        mov eax, dword ptr [edi + eax*4 + 0e8ch]
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x588d7d72
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 66 0F B6 10: movzx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x10
        movzx eax, dx
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 0F: jne 0x588d7d5f
        __asm _emit 0x75
        __asm _emit 0x0f
        lea eax, [ebx*8]
        add dword ptr [edi + 1420h], eax
        ; Exact mapped bytes EB 13: jmp 0x588d7d72
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 0D: jne 0x588d7d72
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebx*8]
        add dword ptr [edi + 1424h], ecx
        movzx edx, byte ptr [esp + 24h]
        add dword ptr [esp + 14h], 3
        inc ebp
        add esi, 4
        cmp ebp, edx
        ; Exact mapped bytes 0F 8C E8 FE FF FF: jl 0x588d7c70
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 18h], 14h
        pop esi
        pop ebx
        ; Exact mapped bytes 7F 1B: jg 0x588d7dac
        __asm _emit 0x7f
        __asm _emit 0x1b
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 75 11: jne 0x588d7dac
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 6dh
        push 6ah
        push 16h
        ; Exact mapped bytes E8 F4 41 01 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
    }
}
