// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3D10 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_100f3d10_100F3D10() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr [esi + 1434h], edi
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x100f3f04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 142ch]
        mov dword ptr [esi + 1434h], 1
        cmp eax, edi
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x100f3e31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1430h]
        cmp dword ptr [esi + eax*4 + 408h], edi
        ; Exact mapped bytes 74 74: je 0x100f3dbd
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + eax*4 + 1024h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [eax + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x100f3dff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [eax + 0ch]
        cmp edx, ecx
        ; Exact mapped bytes 74 19: je 0x100f3d82
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 4]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 75 04: jne 0x100f3d75
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x100f3d78
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [edx + 1]
        mov dword ptr [eax + 10h], ecx
        mov ecx, dword ptr [eax + 8]
        dec ecx
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esi + 1430h]
        mov eax, dword ptr [eax + 14h]
        mov ebp, dword ptr [esi + ecx*4 + 0c08h]
        mov ecx, dword ptr [esi + ecx*4 + 808h]
        push ebp
        push ecx
        mov ecx, dword ptr [eax + edx*4]
        ; Exact mapped bytes E8 BD B7 FF FF: call 0x100ef560
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1430h]
        mov eax, dword ptr [esi + ecx*4 + 1024h]
        mov edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp edx, ecx
        ; Exact mapped bytes 75 A5: jne 0x100f3d5f
        __asm _emit 0x75
        __asm _emit 0xa5
        pop ebp
        ; Exact mapped bytes EB 42: jmp 0x100f3dff
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [esi + eax*4 + 808h]
        cmp ecx, edi
        ; Exact mapped bytes 74 13: je 0x100f3ddb
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 1430h]
        mov dword ptr [esi + ecx*4 + 808h], edi
        mov edx, dword ptr [esi + 1430h]
        mov ecx, dword ptr [esi + edx*4 + 808h]
        cmp ecx, edi
        ; Exact mapped bytes 74 13: je 0x100f3dff
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 1430h]
        mov dword ptr [esi + ecx*4 + 808h], edi
        mov edx, dword ptr [esi + 1424h]
        push -1
        push edx
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 1424h]
        push eax
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 1424h], edi
        mov dword ptr [esi + 142ch], edi
        mov dword ptr [esi + 1430h], 0ffffffffh
        cmp dword ptr [esi + 1430h], -1
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x100f3efe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1014h]
        mov eax, dword ptr [esi + 1018h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x100f3efe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 74 25: je 0x100f3e7b
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [esi + 100ch]
        dec edx
        cmp eax, edx
        ; Exact mapped bytes 75 04: jne 0x100f3e65
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x100f3e68
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov dword ptr [esi + 1018h], ecx
        mov ecx, dword ptr [esi + 1010h]
        dec ecx
        mov dword ptr [esi + 1010h], ecx
        mov ecx, dword ptr [esi + 101ch]
        mov eax, dword ptr [ecx + eax*4]
        cmp dword ptr [esi + eax*4 + 808h], edi
        ; Exact mapped bytes 75 71: jne 0x100f3efe
        __asm _emit 0x75
        __asm _emit 0x71
        cmp dword ptr [esi + eax*4 + 408h], edi
        ; Exact mapped bytes 74 68: je 0x100f3efe
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [esi + 1018h]
        mov ecx, dword ptr [esi + 1014h]
        cmp eax, ecx
        ; Exact mapped bytes 74 25: je 0x100f3ecb
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [esi + 100ch]
        dec edx
        cmp eax, edx
        ; Exact mapped bytes 75 04: jne 0x100f3eb5
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x100f3eb8
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov dword ptr [esi + 1018h], ecx
        mov ecx, dword ptr [esi + 1010h]
        dec ecx
        mov dword ptr [esi + 1010h], ecx
        mov ecx, dword ptr [esi + 101ch]
        mov edx, dword ptr [ecx + eax*4]
        lea eax, [esi + 1428h]
        push eax
        push edi
        push esi
        push 100f3b10h
        push edi
        push edi
        mov dword ptr [esi + 1430h], edx
        ; Exact mapped bytes FF 15 E8 50 17 10: call dword ptr [0x101750e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        push eax
        mov dword ptr [esi + 1424h], eax
        ; Exact mapped bytes FF 15 E4 50 17 10: call dword ptr [0x101750e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 1434h], edi
        pop edi
        pop esi
        ret
    }
}
