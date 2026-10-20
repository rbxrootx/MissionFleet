// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B03A0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_587b03a0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 1ch]
        cmp eax, ecx
        ; Exact mapped bytes 7D 29: jge 0x587b03d7
        __asm _emit 0x7d
        __asm _emit 0x29
        push edi
        mov edi, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x587b03ba
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 1
        sub eax, ecx
        imul eax, eax, 64h
        cdq
        idiv edi
        mov ecx, dword ptr [esi + 34h]
        pop edi
        add eax, 64h
        cmp ecx, eax
        mov dword ptr [esi + 38h], eax
        ; Exact mapped bytes 7F 02: jg 0x587b03d2
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [esi + 34h], eax
        ; Exact mapped bytes EB 09: jmp 0x587b03e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 48h]
        add eax, 64h
        mov dword ptr [esi + 38h], eax
        mov ecx, esi
        mov dword ptr [esi + 40h], 18h
        ; Exact mapped bytes E8 02 FB FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x587b04a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 63b0h], 0
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x587b04a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587b04a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 38h], 0ah
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x587b04a3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4dh
        push 46h
        mov dword ptr [esi + 0ch], 40000000h
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0dh
        ; Exact mapped bytes E8 67 BB 13 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x587b04a3
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 5
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x587b0463
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587b0463
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b0465
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 FC 48 A2 58: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 20 75 15 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x587b0491
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587b0491
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b0493
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], 0
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
