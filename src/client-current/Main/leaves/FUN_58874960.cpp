// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874960 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_58874960() {
    __asm {
        cmp dword ptr [esp + 4], 0
        push edi
        mov edi, ecx
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x58874a0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 78h]
        add eax, 0dch
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov eax, dword ptr [edi + 68h]
        mov ecx, dword ptr [eax + 80h]
        mov eax, dword ptr [edi + 78h]
        push esi
        mov esi, 14h
        add eax, 0dch
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [esi + 7fffffeah]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x588749bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x588749bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], dl
        inc eax
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x588749a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588749bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x588749c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 78 82 01 00: call 0x5888cc50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 10 68 F0 FF: call 0x5877b1f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0a64h
        ; Exact mapped bytes E8 00 71 EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 03 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 4F 24 02: or word ptr [edi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x02
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        pop esi
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        sub eax, 1
        ; Exact mapped bytes 74 0F: je 0x58874a22
        __asm _emit 0x74
        __asm _emit 0x0f
        sub eax, 1
        ; Exact mapped bytes 75 21: jne 0x58874a39
        __asm _emit 0x75
        __asm _emit 0x21
        push eax
        push eax
        push eax
        push 0a6bh
        ; Exact mapped bytes EB 0B: jmp 0x58874a2d
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        push 0
        push 0
        push 0a6ah
        ; Exact mapped bytes E8 BE 70 EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 02 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 4F 24 02: or word ptr [edi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x02
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
