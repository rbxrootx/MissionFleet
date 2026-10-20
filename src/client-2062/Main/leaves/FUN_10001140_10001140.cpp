// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001140 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_10001140_10001140() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 4
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x100011ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 74: jne 0x100011cb
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [esi + 28h]
        cmp eax, 100h
        ; Exact mapped bytes 74 36: je 0x10001197
        __asm _emit 0x74
        __asm _emit 0x36
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x10001176
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 64h]
        add eax, -2
        push eax
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes E8 AC DF 0F 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 59: jmp 0x100011cf
        __asm _emit 0xeb
        __asm _emit 0x59
        test cl, 1
        ; Exact mapped bytes 74 54: je 0x100011cf
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, esi
        ; Exact mapped bytes E8 DE DE 0F 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 27 DF 0F 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 62: je 0x100011ef
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop esi
        ret
        mov edx, dword ptr [esi + 50h]
        inc edx
        mov eax, edx
        mov dword ptr [esi + 50h], edx
        cmp eax, 7
        ; Exact mapped bytes 75 2A: jne 0x100011cf
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 6
        mov dword ptr [esi + 58h], 50h
        idiv ecx
        mov eax, dword ptr [esi + 28h]
        add edx, 7
        add eax, -4
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes EB 04: jmp 0x100011cf
        __asm _emit 0xeb
        __asm _emit 0x04
        dec eax
        mov dword ptr [esi + 58h], eax
        mov ecx, dword ptr [esi + 5ch]
        mov eax, 66666667h
        inc ecx
        imul ecx
        sar edx, 3
        mov eax, edx
        mov dword ptr [esi + 5ch], ecx
        shr eax, 1fh
        add edx, eax
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 61 DB 0F 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdb
        __asm _emit 0x0f
        __asm _emit 0x00
        pop esi
        ret
    }
}
