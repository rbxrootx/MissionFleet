// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1120 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_100f1120_100F1120() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [eax]
        push edi
        mov dword ptr [esi + 34ch], ecx
        mov dword ptr [esi + 0f34h], ecx
        mov ecx, dword ptr [eax + 4]
        lea ebx, [eax + 10h]
        mov dword ptr [esi + 350h], ecx
        mov dword ptr [esi + 0f38h], ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        lea edi, [esi + 0f44h]
        ; Exact mapped bytes 66 89 8E 54 03 00 00: mov word ptr [esi + 0x354], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 3C 0F 00 00: mov word ptr [esi + 0xf3c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0ch]
        push ebx
        mov dword ptr [esi + 358h], ecx
        push edi
        mov dword ptr [esi + 0f40h], ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea eax, [esi + 35ch]
        push ebx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0f38h]
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x100f11d2
        __asm _emit 0x74
        __asm _emit 0x43
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        lea ecx, [eax + eax*2]
        lea eax, [edx + ecx*2 - 43h]
        mov ecx, dword ptr [esi + 0f14h]
        push eax
        ; Exact mapped bytes E8 A4 DB 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100f11c1
        __asm _emit 0x74
        __asm _emit 0x08
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x100f11c1
        __asm _emit 0x74
        __asm _emit 0x04
        push edi
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov esi, dword ptr [esi + 0f0ch]
        pop edi
        or byte ptr [esi + 24h], 1
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        sub ecx, 46h
        push ecx
        mov ecx, dword ptr [esi + 0f14h]
        ; Exact mapped bytes E8 6C DB 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100f11fe
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100f11fe
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov esi, dword ptr [esi + 0f0ch]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
