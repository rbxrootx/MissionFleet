// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427240 .. +0x64A bytes.
extern "C" __declspec(naked) void FUN_00427240_00427240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a78h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a78h]
        mov ecx, 29eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x427273
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 01 06 00 00: jmp 0x427874
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 508h], 0ffffffffh
        mov dword ptr [ebp - 50ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x427298
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 50ch]
        add ecx, 1
        mov dword ptr [ebp - 50ch], ecx
        cmp dword ptr [ebp - 50ch], 32h
        ; Exact mapped bytes 0F 8D CA 05 00 00: jge 0x42786f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 9D A3 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 508h], eax
        cmp dword ptr [ebp - 508h], -1
        ; Exact mapped bytes 0F 84 94 05 00 00: je 0x427868
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        lea eax, [ebp - 504h]
        push eax
        mov ecx, dword ptr [ebp - 508h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 0E A6 FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 66 05 00 00: je 0x427866
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 0F 85 59 05 00 00: jne 0x427866
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50ch]
        and ecx, 3fffffh
        shl ecx, 0ah
        mov edx, dword ptr [ebp - 504h]
        and edx, 3ffh
        or edx, ecx
        mov dword ptr [ebp - 504h], edx
        mov eax, dword ptr [ebp - 504h]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 510h], eax
        mov dword ptr [ebp - 0a1ch], 31h
        mov dword ptr [ebp - 0a20h], 0
        lea ecx, [ebp - 0a1ch]
        push ecx
        lea edx, [ebp - 0a20h]
        push edx
        lea eax, [ebp - 510h]
        push eax
        ; Exact mapped bytes E8 A4 9F FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 04 00 00: je 0x427838
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 0F 85 9B 04 00 00: jne 0x427838
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        mov dword ptr [edx + eax + 16bdch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        mov ecx, dword ptr [ebp - 508h]
        mov dword ptr [edx + eax*4 + 16b14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea edi, [eax + ecx + 16be0h]
        mov ecx, 17h
        lea esi, [ebp - 504h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea edi, [eax + ecx + 16c3ch]
        mov ecx, 33h
        lea esi, [ebp - 4a8h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 510h]
        and edx, 3fffffh
        shl edx, 0ah
        mov eax, dword ptr [eax + ecx + 16be0h]
        and eax, 3ffh
        or eax, edx
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [edx + ecx + 16be0h], eax
        ; Exact mapped bytes 66 8B 85 20 FB FF FF: mov ax, word ptr [ebp - 0x4e0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 74 27: je 0x4274a5
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        mov dword ptr [edx + eax + 16bdch], 1
        mov dword ptr [ebp - 198h], 1
        push 140h
        lea ecx, [ebp - 3dah]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16d0ah]
        push edx
        ; Exact mapped bytes E8 30 DE 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 514h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4274ee
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 514h]
        add eax, 1
        mov dword ptr [ebp - 514h], eax
        cmp dword ptr [ebp - 514h], 20h
        ; Exact mapped bytes 0F 83 AB 01 00 00: jae 0x4276a6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 514h]
        mov edx, dword ptr [ebp + ecx*4 - 218h]
        mov dword ptr [ebp - 518h], edx
        mov dword ptr [ebp - 0a24h], 63h
        mov dword ptr [ebp - 0a28h], 0
        mov eax, dword ptr [ebp - 518h]
        mov dword ptr [ebp - 0a2ch], eax
        lea ecx, [ebp - 0a24h]
        push ecx
        lea edx, [ebp - 0a28h]
        push edx
        lea eax, [ebp - 0a2ch]
        push eax
        ; Exact mapped bytes E8 CE 9D FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x42764d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 518h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 224h]
        cmp ecx, dword ptr [ebp - 518h]
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x42764d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 518h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 0ch
        and edx, 0fh
        cmp edx, dword ptr [ebp - 514h]
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x42764d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 518h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2bch]
        cmp eax, dword ptr [ebp - 50ch]
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x42764d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 518h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 75 73: jne 0x42764d
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 514h]
        mov edx, dword ptr [ebp - 518h]
        mov dword ptr [eax + ecx*4 + 270h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov edx, dword ptr [ebp - 514h]
        mov esi, dword ptr [ebp - 518h]
        mov ecx, dword ptr [ecx + esi*4 + 94h]
        mov dword ptr [eax + edx*4 + 2f0h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 518h]
        mov byte ptr [edx], 2
        ; Exact mapped bytes EB 54: jmp 0x4276a1
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 514h]
        mov dword ptr [eax + ecx*4 + 270h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 514h]
        mov dword ptr [edx + eax*4 + 2f0h], 0ffffffffh
        ; Exact mapped bytes E9 39 FE FF FF: jmp 0x4274df
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 9B FD FF: call 0x401285
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a34h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 0a34h]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [eax + ecx + 16be0h]
        and al, 0c1h
        or eax, edx
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [edx + ecx + 16be0h], eax
        push 500h
        push 0
        lea eax, [ebp - 0a18h]
        push eax
        ; Exact mapped bytes E8 B1 E1 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        mov ecx, dword ptr [edx + eax + 16bdch]
        mov dword ptr [ebp - 6ach], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea esi, [eax + ecx + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 0a18h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea esi, [eax + ecx + 16c3ch]
        mov ecx, 33h
        lea edi, [ebp - 9bch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        push 140h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 510h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16d0ah]
        push edx
        lea eax, [ebp - 8eeh]
        push eax
        ; Exact mapped bytes E8 56 DB 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 510h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16ecch]
        push ecx
        lea edx, [ebp - 7ach]
        push edx
        ; Exact mapped bytes E8 28 DB 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 510h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16e4ch]
        push eax
        lea ecx, [ebp - 72ch]
        push ecx
        ; Exact mapped bytes E8 FA DA 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 0a18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 0a30h], esp
        push eax
        ; Exact mapped bytes E8 F5 4C 0A 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0a38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 52 A1 FD FF: call 0x401988
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 2E: jmp 0x427866
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov dword ptr [ebp - 198h], 1
        push 500h
        lea edx, [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 508h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 4B A0 FD FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x42786a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x42786f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1A FA FF FF: jmp 0x427289
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 0a78h
        cmp ebp, esp
        ; Exact mapped bytes E8 6C D5 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
