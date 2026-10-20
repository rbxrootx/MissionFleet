// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048443F .. +0x598 bytes.
extern "C" __declspec(naked) void FUN_0048443f_0048443F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 534h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 534h]
        mov ecx, 14dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 530h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 140h]
        push ecx
        mov edx, dword ptr [ebp - 530h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 49 1A F8 FF: call 0x405ec8
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 50ch], eax
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 140h]
        push ecx
        mov edx, dword ptr [ebp - 530h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 8D 17 F8 FF: call 0x405c2f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 504h], eax
        mov dword ptr [ebp - 508h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4844c3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 508h]
        add eax, 1
        mov dword ptr [ebp - 508h], eax
        cmp dword ptr [ebp - 504h], -1
        ; Exact mapped bytes 0F 84 ED 04 00 00: je 0x4849bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        lea ecx, [ebp - 500h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 530h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 40 16 F8 FF: call 0x405b34
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 04 00 00: je 0x48498a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 0F 85 81 04 00 00: jne 0x48498a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 500h]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 510h], ecx
        mov dword ptr [ebp - 51ch], 31h
        mov dword ptr [ebp - 520h], 0
        lea edx, [ebp - 51ch]
        push edx
        lea eax, [ebp - 520h]
        push eax
        lea ecx, [ebp - 510h]
        push ecx
        ; Exact mapped bytes E8 74 F2 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 05 04 00 00: je 0x48495c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 1
        ; Exact mapped bytes 0F 85 E2 03 00 00: jne 0x48495c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov dword ptr [eax + ecx + 16bdch], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 510h]
        mov edx, dword ptr [ebp - 504h]
        mov dword ptr [eax + ecx*4 + 16b14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea edi, [ecx + edx + 16be0h]
        mov ecx, 17h
        lea esi, [ebp - 500h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea edi, [ecx + edx + 16c3ch]
        mov ecx, 33h
        lea esi, [ebp - 4a4h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp - 510h]
        and eax, 3fffffh
        shl eax, 0ah
        mov ecx, dword ptr [ecx + edx + 16be0h]
        and ecx, 3ffh
        or ecx, eax
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 16be0h], ecx
        ; Exact mapped bytes 66 8B 8D 24 FB FF FF: mov cx, word ptr [ebp - 0x4dc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 74 2A: je 0x484698
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov dword ptr [eax + ecx + 16bdch], 1
        mov dword ptr [ebp - 194h], 1
        push 140h
        lea edx, [ebp - 3d6h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16d0ah]
        push eax
        ; Exact mapped bytes E8 5A 49 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 514h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4846e4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 514h]
        add ecx, 1
        mov dword ptr [ebp - 514h], ecx
        cmp dword ptr [ebp - 514h], 20h
        ; Exact mapped bytes 0F 83 C3 01 00 00: jae 0x4848b4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 514h]
        mov eax, dword ptr [ebp + edx*4 - 214h]
        mov dword ptr [ebp - 518h], eax
        mov dword ptr [ebp - 524h], 63h
        mov dword ptr [ebp - 528h], 0
        mov ecx, dword ptr [ebp - 518h]
        mov dword ptr [ebp - 52ch], ecx
        lea edx, [ebp - 524h]
        push edx
        lea eax, [ebp - 528h]
        push eax
        lea ecx, [ebp - 52ch]
        push ecx
        ; Exact mapped bytes E8 82 F0 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x484855
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 518h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 224h]
        cmp edx, dword ptr [ebp - 518h]
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x484855
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 518h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 0ch
        and eax, 0fh
        cmp eax, dword ptr [ebp - 514h]
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x484855
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 518h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2bch]
        cmp ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x484855
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 518h]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 1
        ; Exact mapped bytes 75 7C: jne 0x484855
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 514h]
        mov eax, dword ptr [ebp - 518h]
        mov dword ptr [ecx + edx*4 + 270h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov eax, dword ptr [ebp - 514h]
        mov esi, dword ptr [ebp - 518h]
        mov edx, dword ptr [edx + esi*4 + 94h]
        mov dword ptr [ecx + eax*4 + 2f0h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 518h]
        mov byte ptr [eax], 2
        ; Exact mapped bytes EB 5A: jmp 0x4848af
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 514h]
        mov dword ptr [ecx + edx*4 + 270h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 514h]
        mov dword ptr [eax + ecx*4 + 2f0h], 0ffffffffh
        ; Exact mapped bytes E9 21 FE FF FF: jmp 0x4846d5
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 FF EA FF FF: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 534h]
        and ecx, 1fh
        shl ecx, 1
        mov edx, dword ptr [edx + eax + 16be0h]
        and edx, 0ffffffc1h
        or edx, ecx
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 16be0h], edx
        mov edx, dword ptr [ebp - 510h]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 81 DD FF FF: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 500h]
        and ecx, 1
        cmp ecx, 1
        ; Exact mapped bytes 75 18: jne 0x48495a
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 4fch], 0
        ; Exact mapped bytes 76 0F: jbe 0x48495a
        __asm _emit 0x76
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 510h]
        mov dword ptr [edx + 16ch], eax
        ; Exact mapped bytes EB 2E: jmp 0x48498a
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov dword ptr [ebp - 194h], 1
        push 500h
        lea ecx, [ebp - 500h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 530h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 F2 15 F8 FF: call 0x405f7c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 504h]
        cmp ecx, dword ptr [ebp - 50ch]
        ; Exact mapped bytes 75 02: jne 0x48499a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x4849bd
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 530h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 A2 13 F8 FF: call 0x405d54
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 504h], eax
        ; Exact mapped bytes E9 F7 FA FF FF: jmp 0x4844b4
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        add esp, 534h
        cmp ebp, esp
        ; Exact mapped bytes E8 0F 3E 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
