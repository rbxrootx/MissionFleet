// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040BA7D .. +0x522 bytes.
extern "C" __declspec(naked) void FUN_0040ba7d_0040BA7D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 52 DF 07 00: call 0x4899f7
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 04 00 00: je 0x40bf8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], ecx
        mov esi, esp
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        push eax
        push 5a0c74h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 08 CD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 16ch], -1
        ; Exact mapped bytes 0F 84 64 04 00 00: je 0x40bf4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ecx + eax + 16e4ch]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 38h], 63h
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 38h]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 91 7C FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 03 00 00: je 0x40beef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 0ah
        ; Exact mapped bytes 72 30: jb 0x40bb90
        __asm _emit 0x72
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 11h
        ; Exact mapped bytes 73 09: jae 0x40bb90
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E9 5D 03 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 0ah
        ; Exact mapped bytes 72 2F: jb 0x40bbe6
        __asm _emit 0x72
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 18h
        ; Exact mapped bytes 73 09: jae 0x40bbe6
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E9 07 03 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 18h
        ; Exact mapped bytes 72 30: jb 0x40bc3d
        __asm _emit 0x72
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1fh
        ; Exact mapped bytes 73 09: jae 0x40bc3d
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E9 B0 02 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 1fh
        ; Exact mapped bytes 72 30: jb 0x40bc93
        __asm _emit 0x72
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 26h
        ; Exact mapped bytes 73 09: jae 0x40bc93
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 26h
        ; Exact mapped bytes 72 2F: jb 0x40bce9
        __asm _emit 0x72
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 2fh
        ; Exact mapped bytes 73 09: jae 0x40bce9
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 4
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 2fh
        ; Exact mapped bytes 72 30: jb 0x40bd40
        __asm _emit 0x72
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 38h
        ; Exact mapped bytes 73 09: jae 0x40bd40
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 38h
        ; Exact mapped bytes 72 30: jb 0x40bd96
        __asm _emit 0x72
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 41h
        ; Exact mapped bytes 73 09: jae 0x40bd96
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 6
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 72 2F: jb 0x40bdec
        __asm _emit 0x72
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 4ch
        ; Exact mapped bytes 73 09: jae 0x40bdec
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 7
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 4ch
        ; Exact mapped bytes 72 30: jb 0x40be43
        __asm _emit 0x72
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 57h
        ; Exact mapped bytes 73 09: jae 0x40be43
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 4], 8
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x40beed
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 57h
        ; Exact mapped bytes 72 2D: jb 0x40be96
        __asm _emit 0x72
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 62h
        ; Exact mapped bytes 73 06: jae 0x40be96
        __asm _emit 0x73
        __asm _emit 0x06
        mov byte ptr [ebp - 4], 9
        ; Exact mapped bytes EB 57: jmp 0x40beed
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 62h
        ; Exact mapped bytes 72 2C: jb 0x40bee9
        __asm _emit 0x72
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 7dh
        ; Exact mapped bytes 73 06: jae 0x40bee9
        __asm _emit 0x73
        __asm _emit 0x06
        mov byte ptr [ebp - 4], 0ah
        ; Exact mapped bytes EB 04: jmp 0x40beed
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes EB 04: jmp 0x40bef3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c04h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 0c7ch]
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 BF DB 01 00: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 10: je 0x40bf46
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        mov byte ptr [ebp - 3], cl
        ; Exact mapped bytes EB 04: jmp 0x40bf4a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 3], 0
        ; Exact mapped bytes EB 08: jmp 0x40bf54
        __asm _emit 0xeb
        __asm _emit 0x08
        mov byte ptr [ebp - 4], 0
        mov byte ptr [ebp - 3], 0
        mov dword ptr [ebp - 24h], 5000000h
        mov dword ptr [ebp - 20h], 2
        mov edx, dword ptr [ebp - 24h]
        or edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], edx
        push 1ah
        lea eax, [ebp - 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        push 80020114h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 72 DB 07 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40bf8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 47 C8 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
