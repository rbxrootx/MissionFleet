// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF130 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_100bf130_100BF130() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x100bf280
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 13: jne 0x100bf162
        __asm _emit 0x75
        __asm _emit 0x13
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x100bf25c
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 22: jne 0x100bf18b
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 588h]
        mov edx, dword ptr [ecx + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x100bf25c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e5fah
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x100bf25c
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x100bf25c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edx + 4]
        test edx, edx
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x100bf25c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 104e0h]
        mov eax, dword ptr [ecx + 50h]
        sub eax, edi
        mov edi, dword ptr [ecx + 54h]
        mov ecx, dword ptr [edx + 8]
        cdq
        idiv dword ptr [esi + 578h]
        sub edi, ecx
        mov ecx, eax
        mov eax, edi
        cdq
        idiv dword ptr [esi + 57ch]
        mov edi, ecx
        mov dword ptr [esi + 74h], ecx
        imul edi, ecx
        mov edx, eax
        mov dword ptr [esi + 78h], eax
        imul edx, eax
        add edx, edi
        mov edi, dword ptr [esi + 0d4h]
        cmp edx, edi
        ; Exact mapped bytes 7E 09: jle 0x100bf1f9
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [esi + 70h], 0
        ; Exact mapped bytes EB 07: jmp 0x100bf200
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [esi + 70h], 1
        mov edx, dword ptr [esi + 580h]
        mov edi, dword ptr [esi + 4d8h]
        add edx, edi
        mov edi, dword ptr [esi + 4]
        add edx, edi
        mov edi, dword ptr [esi + 8]
        add edx, ecx
        mov ecx, dword ptr [esi + 584h]
        mov dword ptr [esi + 7ch], edx
        mov edx, dword ptr [esi + 4dch]
        add ecx, edx
        add ecx, edi
        add ecx, eax
        lea eax, [esi + 84h]
        mov dword ptr [esi + 80h], ecx
        mov ecx, 5
        mov edx, dword ptr [eax + 28h]
        mov edi, dword ptr [esi + 7ch]
        add edx, edi
        mov dword ptr [eax], edx
        mov edx, dword ptr [eax + 2ch]
        mov edi, dword ptr [esi + 80h]
        add eax, 8
        add edx, edi
        dec ecx
        mov dword ptr [eax - 4], edx
        ; Exact mapped bytes 75 E2: jne 0x100bf23e
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100bf280
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100bf27b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100bf263
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
