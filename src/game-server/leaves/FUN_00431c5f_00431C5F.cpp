// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431C5F .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_00431c5f_00431C5F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 8], 31h
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1E 1B FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x431d26
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16be4h], 0
        ; Exact mapped bytes 74 61: je 0x431d26
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 74 45: je 0x431d26
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16e4ch], -1
        ; Exact mapped bytes 74 29: je 0x431d26
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 02 06 6C 01 00: mov cx, word ptr [edx + eax + 0x16c06]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 21: je 0x431d47
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 50000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 54 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x431f0a
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 59 01 00: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 8E 01 00 00: je 0x431eee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 370h
        mov eax, dword ptr [eax + esi + 16e4ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp edx, ecx
        ; Exact mapped bytes 0F 87 38 01 00 00: ja 0x431eee
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 64h]
        imul esi, esi, 3e8h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FC 0B 00 00: call 0x4329e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 82 02 01 00 00: jb 0x431eee
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 16ch], -1
        ; Exact mapped bytes 74 77: je 0x431e6f
        __asm _emit 0x74
        __asm _emit 0x77
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 69: je 0x431e6f
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16be0h]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 46 08 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        mov eax, dword ptr [ecx + edx + 16be0h]
        or al, 1
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 F1 07 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 16ch], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 50001h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 53 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x431f0a
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 50000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 53 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 CB 68 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
