// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005F1F0 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_1005f1f0_1005F1F0() {
    __asm {
        sub esp, 80h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x1005f3f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d7ch]
        push ebp
        ; Exact mapped bytes 8B 2D 88 51 17 10: mov ebp, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        push eax
        lea ecx, [esp + 10h]
        push 101aac34h
        push ecx
        mov dword ptr [esi + 0d78h], 2000h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea edx, [esp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0d7ch]
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x1005f25a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esi + 0d0ch]
        mov dword ptr [esi + 0d80h], 0
        mov dword ptr [esi + 0d7ch], eax
        mov edi, dword ptr [esi + 0d7ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x1005f3d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3D 56 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [edi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x1005f3d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0A: jne 0x1005f2a9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x1005f2b8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005f289
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x1005f3d0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x1005f3d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d5ch]
        mov al, byte ptr [ecx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 12: je 0x1005f2e1
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 0d5ch]
        mov dword ptr [eax + 58h], 0
        mov edi, dword ptr [esi + 0d7ch]
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x1005f2ef
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4F: jmp 0x1005f33e
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B6 55 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        mov cl, ah
        mov eax, dword ptr [edi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x1005f33c
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edi, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B BF 48 03 00 00: mov di, word ptr [edi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EF 0D: shr di, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 75 0A: jne 0x1005f32e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 0a0h]
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x1005f33a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005f30e
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 02: jmp 0x1005f33c
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov eax, edx
        mov ecx, dword ptr [esi + 0d7ch]
        push eax
        push ecx
        lea edx, [esp + 14h]
        push 101aac1ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0d7ch]
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x1005f36e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4F: jmp 0x1005f3bd
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 37 55 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        mov cl, ah
        mov eax, dword ptr [edi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x1005f3bb
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edi, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B BF 48 03 00 00: mov di, word ptr [edi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EF 0D: shr di, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 75 0A: jne 0x1005f3ad
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 0a0h]
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x1005f3b9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005f38d
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 02: jmp 0x1005f3bb
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov eax, edx
        mov dword ptr [esi + 0d7ch], eax
        mov eax, dword ptr [esi + 0d80h]
        dec eax
        mov dword ptr [esi + 0d80h], eax
        mov eax, dword ptr [esi + 464h]
        pop edi
        test eax, eax
        mov ecx, 0fffeh
        pop ebp
        ; Exact mapped bytes 74 04: je 0x1005f3e5
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 468h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x1005f3f3
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        add esp, 80h
        ret
    }
}
