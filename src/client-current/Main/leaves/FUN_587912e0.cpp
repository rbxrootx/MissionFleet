// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587912E0 .. +0x277 bytes.
extern "C" __declspec(naked) void FUN_587912e0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [edi + 4], 101h
        mov esi, ecx
        ; Exact mapped bytes 75 21: jne 0x58791312
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [edi + 8], 2ch
        ; Exact mapped bytes 75 1B: jne 0x58791312
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp byte ptr [esi + 11f68h], 0
        ; Exact mapped bytes 75 0B: jne 0x5879130b
        __asm _emit 0x75
        __asm _emit 0x0b
        lea ecx, [esi + 11f64h]
        ; Exact mapped bytes E8 C5 62 03 00: call 0x587c75d0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push ebx
        test al, 2
        ; Exact mapped bytes 0F 84 2F 02 00 00: je 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5879134e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58791346
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0C: je 0x5879134e
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58791330
        __asm _emit 0x75
        __asm _emit 0xea
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x58791421
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 102h
        ; Exact mapped bytes 74 09: je 0x5879136c
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 3
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12138h]
        cmp eax, 8
        ; Exact mapped bytes 73 13: jae 0x5879138a
        __asm _emit 0x73
        __asm _emit 0x13
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        mov dword ptr [esi + 12144h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 0F 85 BB 01 00 00: jne 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [esi + 12124h]
        add edi, 4
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 96 01 FA FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x587913e0
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [esi + 12128h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x587913d8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 12124h]
        push 1
        ; Exact mapped bytes E8 55 02 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12128h]
        push 0
        ; Exact mapped bytes E8 48 02 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12128h]
        push edi
        ; Exact mapped bytes E8 54 01 FA FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4B 24: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58791419
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 12128h]
        push 1
        ; Exact mapped bytes E8 14 02 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12124h]
        push 0
        ; Exact mapped bytes E8 07 02 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12138h]
        cmp eax, 11h
        ; Exact mapped bytes 0F 82 1E 01 00 00: jb 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        add ecx, -9
        cmp ecx, 1fh
        ; Exact mapped bytes 0F 87 EE 00 00 00: ja 0x5879152d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ecx + 5879156ch]
        ; Exact mapped bytes FF 24 95 58 15 79 58: jmp dword ptr [edx*4 + 0x58791558]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0x15
        __asm _emit 0x79
        __asm _emit 0x58
        cmp eax, 11h
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12124h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 23: je 0x5879148a
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 12128h]
        push 1
        ; Exact mapped bytes E8 AC 01 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12124h]
        push 0
        ; Exact mapped bytes E8 9F 01 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 12128h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12124h]
        push 1
        ; Exact mapped bytes E8 75 01 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12128h]
        push 0
        ; Exact mapped bytes E8 68 01 FA FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x5879154e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 1213ch], 13h
        ; Exact mapped bytes 75 7B: jne 0x5879154e
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 64 17 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 28h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 13 E4 FF FF: call 0x5878f920
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12140h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 1ch]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 64 17 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
