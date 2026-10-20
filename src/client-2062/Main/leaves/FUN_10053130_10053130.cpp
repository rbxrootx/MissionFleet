// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053130 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_10053130_10053130() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        or eax, 0ffffffffh
        push edi
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 9ch], eax
        mov eax, dword ptr [esi + 1fch]
        mov edi, 40000000h
        mov ebx, 0fffffffeh
        mov ebp, 0fffeh
        mov dword ptr [esi + 100h], edi
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 94h], ebx
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esp + 14h]
        cmp eax, 64h
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x100532b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20ch]
        mov ecx, 1
        xor ebp, ebp
        or byte ptr [eax + 24h], 4
        mov eax, dword ptr [esi + 20ch]
        push ebp
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20ch]
        mov dword ptr [eax + 88h], 20h
        mov eax, dword ptr [esi + 20ch]
        mov dword ptr [eax + 28h], ebp
        mov dword ptr [eax + 84h], 100h
        mov dword ptr [eax + 8ch], edi
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B7 51 06 00: call 0x100b83b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0bch]
        mov ecx, dword ptr [esi + 458h]
        imul edx, dword ptr [esi + 0b8h]
        mov dword ptr [esi + 454h], ebp
        mov dword ptr [esi + 45ch], ecx
        mov dword ptr [esi + 0e4h], edx
        ; Exact mapped bytes A1 14 D1 1A 10: mov eax, dword ptr [0x101ad114]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes 8B 0D 18 D1 1A 10: mov ecx, dword ptr [0x101ad118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esi + 0e0h], ecx
        lea ecx, [esi + 5f4h]
        lea edi, [esi + 534h]
        mov dword ptr [esp + 14h], 10h
        mov eax, dword ptr [edi - 40h]
        mov edx, 0fff0h
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x10053259
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x10053263
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 40h]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x10053270
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 80h]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x1005327e
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebx, 3
        mov edx, 2
        mov eax, dword ptr [ecx]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x10053294
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 EE: jne 0x10053288
        __asm _emit 0x75
        __asm _emit 0xee
        dec ebx
        ; Exact mapped bytes 75 E6: jne 0x10053283
        __asm _emit 0x75
        __asm _emit 0xe6
        mov eax, dword ptr [esp + 14h]
        add edi, 4
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 9E: jne 0x10053249
        __asm _emit 0x75
        __asm _emit 0x9e
        mov ecx, esi
        ; Exact mapped bytes E8 AE 0A 00 00: call 0x10053d60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0c8h
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x100533bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 20ch]
        push 1
        mov dword ptr [edx + 88h], 20h
        mov eax, dword ptr [esi + 20ch]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], 0
        mov dword ptr [eax + 8ch], edi
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B2 50 06 00: call 0x100b83b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 458h]
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, dword ptr [esi + 0bch]
        mov dword ptr [esi + 45ch], eax
        mov eax, dword ptr [esi + 1f8h]
        mov dword ptr [esi + 0dch], ecx
        mov dword ptr [esi + 454h], edi
        mov dword ptr [esi + 0e4h], 1
        mov dword ptr [esi + 0e0h], edx
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 AD 01 00 00: call 0x100534f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x1005334d
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 90h], ebx
        lea ecx, [esi + 5f4h]
        lea ebx, [esi + 534h]
        mov dword ptr [esp + 14h], 10h
        mov ebp, 0fh
        mov eax, dword ptr [ebx - 40h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10053371
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1005337b
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 40h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10053386
        __asm _emit 0x74
        __asm _emit 0x04
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [ebx + 80h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10053394
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov edi, 3
        mov edx, 2
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100533a8
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 F0: jne 0x1005339e
        __asm _emit 0x75
        __asm _emit 0xf0
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10053399
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esp + 14h]
        add ebx, 4
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 A7: jne 0x10053366
        __asm _emit 0x75
        __asm _emit 0xa7
        mov ecx, esi
        ; Exact mapped bytes E8 9A 09 00 00: call 0x10053d60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
