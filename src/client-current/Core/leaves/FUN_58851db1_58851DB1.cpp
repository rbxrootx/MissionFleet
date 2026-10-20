// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851DB1 .. +0x213 bytes.
extern "C" __declspec(naked) void FUN_58851db1_58851DB1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea ecx, [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 35 41 00 00: call 0x58855efb
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 2C: je 0x58851df6
        __asm _emit 0x74
        __asm _emit 0x2c
        test esi, esi
        ; Exact mapped bytes 74 3D: je 0x58851e0b
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp esi, 2
        ; Exact mapped bytes 7C 05: jl 0x58851dd8
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp esi, 24h
        ; Exact mapped bytes 7E 33: jle 0x58851e0b
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 3B F1 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x58851f57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x58851f57
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 0ch], 0
        push edi
        mov dword ptr [ebp - 14h], eax
        mov bl, byte ptr [eax]
        lea edi, [eax + 1]
        movzx eax, byte ptr [ebp + 18h]
        mov ecx, eax
        mov byte ptr [ebp - 4], bl
        or ecx, 2
        mov dword ptr [ebp + 0ch], edi
        cmp bl, 2dh
        cmovne ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 74 05: je 0x58851e3a
        __asm _emit 0x74
        __asm _emit 0x05
        cmp bl, 2bh
        ; Exact mapped bytes 75 09: jne 0x58851e43
        __asm _emit 0x75
        __asm _emit 0x09
        mov bl, byte ptr [edi]
        inc edi
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], edi
        push 10h
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58851e4e
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, ecx
        ; Exact mapped bytes 75 70: jne 0x58851ebe
        __asm _emit 0x75
        __asm _emit 0x70
        mov al, bl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x58851e5e
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -30h
        ; Exact mapped bytes EB 1E: jmp 0x58851e7c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov al, bl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58851e6e
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -57h
        ; Exact mapped bytes EB 0E: jmp 0x58851e7c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov al, bl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 3E: ja 0x58851eb4
        __asm _emit 0x77
        __asm _emit 0x3e
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -37h
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x58851eb4
        __asm _emit 0x75
        __asm _emit 0x34
        mov al, byte ptr [edi]
        inc edi
        mov byte ptr [ebp - 10h], al
        mov dword ptr [ebp + 0ch], edi
        cmp al, 78h
        ; Exact mapped bytes 74 13: je 0x58851ea0
        __asm _emit 0x74
        __asm _emit 0x13
        cmp al, 58h
        ; Exact mapped bytes 74 0F: je 0x58851ea0
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 10h]
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 A4 3F 00 00: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes EB 16: jmp 0x58851eb6
        __asm _emit 0xeb
        __asm _emit 0x16
        mov bl, byte ptr [edi]
        lea eax, [edi + 1]
        test esi, esi
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], eax
        cmovne ecx, esi
        mov esi, ecx
        ; Exact mapped bytes EB 0A: jmp 0x58851ebe
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0ah
        test esi, esi
        pop eax
        cmovne eax, esi
        mov esi, eax
        or eax, 0ffffffffh
        mov edi, dword ptr [ebp - 8]
        xor edx, edx
        div esi
        mov dword ptr [ebp - 10h], eax
        mov al, bl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x58851edb
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        add ecx, -30h
        ; Exact mapped bytes EB 23: jmp 0x58851efe
        __asm _emit 0xeb
        __asm _emit 0x23
        mov al, bl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58851eeb
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        add ecx, -57h
        ; Exact mapped bytes EB 13: jmp 0x58851efe
        __asm _emit 0xeb
        __asm _emit 0x13
        mov al, bl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58851efb
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        add ecx, -37h
        ; Exact mapped bytes EB 03: jmp 0x58851efe
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        cmp ecx, esi
        ; Exact mapped bytes 73 33: jae 0x58851f35
        __asm _emit 0x73
        __asm _emit 0x33
        mov ebx, dword ptr [ebp - 0ch]
        mov eax, ebx
        imul eax, esi
        lea edx, [eax + ecx]
        cmp edx, eax
        mov dword ptr [ebp - 0ch], edx
        sbb ecx, ecx
        neg ecx
        cmp dword ptr [ebp - 10h], ebx
        sbb eax, eax
        neg eax
        or ecx, eax
        shl ecx, 2
        or ecx, 8
        or edi, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov bl, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 96: jmp 0x58851ecb
        __asm _emit 0xeb
        __asm _emit 0x96
        push dword ptr [ebp - 4]
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes E8 FD 3E 00 00: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, edi
        pop edi
        test bl, 8
        ; Exact mapped bytes 75 10: jne 0x58851f5b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58851f57
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        xor eax, eax
        ; Exact mapped bytes EB 65: jmp 0x58851fc0
        __asm _emit 0xeb
        __asm _emit 0x65
        mov esi, dword ptr [ebp - 0ch]
        push esi
        push ebx
        ; Exact mapped bytes E8 7E FD FF FF: call 0x58851ce3
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 40: je 0x58851fab
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 22h
        test bl, 1
        ; Exact mapped bytes 75 05: jne 0x58851f83
        __asm _emit 0x75
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 2F: jmp 0x58851fb2
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 10h]
        test bl, 2
        ; Exact mapped bytes 74 10: je 0x58851f9b
        __asm _emit 0x74
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58851f94
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, 80000000h
        ; Exact mapped bytes EB 25: jmp 0x58851fc0
        __asm _emit 0xeb
        __asm _emit 0x25
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58851fa4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, 7fffffffh
        ; Exact mapped bytes EB 15: jmp 0x58851fc0
        __asm _emit 0xeb
        __asm _emit 0x15
        test bl, 2
        ; Exact mapped bytes 74 02: je 0x58851fb2
        __asm _emit 0x74
        __asm _emit 0x02
        neg esi
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x58851fbe
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
