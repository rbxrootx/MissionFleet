// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CDB30 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_588cdb30() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        movzx ebx, word ptr [edx + 4]
        and ebx, 1fh
        xor esi, esi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [edi + 78h]
        push 5
        push 1
        push esi
        mov dword ptr [eax + 184h], esi
        mov ecx, dword ptr [edi + 78h]
        push 1
        ; Exact mapped bytes E8 C8 A3 FC FF: call 0x58897f30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        inc esi
        cmp esi, 3
        ; Exact mapped bytes 7C E2: jl 0x588cdb50
        __asm _emit 0x7c
        __asm _emit 0xe2
        cmp ebx, 8
        ; Exact mapped bytes 74 1B: je 0x588cdb8e
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ebx, 7
        ; Exact mapped bytes 74 16: je 0x588cdb8e
        __asm _emit 0x74
        __asm _emit 0x16
        cmp ebx, 6
        ; Exact mapped bytes 74 11: je 0x588cdb8e
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [edi + 78h]
        pop edi
        pop esi
        mov dword ptr [ecx + 184h], 0ffffffffh
        pop ebx
        ret
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax + 0cc0h]
        movzx esi, word ptr [ecx + 0eh]
        mov ecx, dword ptr [edi + 78h]
        shr esi, 4
        and esi, 0ffh
        ; Exact mapped bytes E8 4E 9C FC FF: call 0x58897800
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [esi - 32h]
        cmp edx, 20h
        ; Exact mapped bytes 77 3C: ja 0x588cdbf6
        __asm _emit 0x77
        __asm _emit 0x3c
        cmp ebx, 7
        ; Exact mapped bytes 74 26: je 0x588cdbe5
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ebx, 6
        ; Exact mapped bytes 74 21: je 0x588cdbe5
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [edi + 78h]
        push 1
        push 1
        push 3
        mov dword ptr [eax + 184h], 3
        mov ecx, dword ptr [edi + 78h]
        push 1
        ; Exact mapped bytes E8 4F A3 FC FF: call 0x58897f30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, dword ptr [edi + 78h]
        pop edi
        pop esi
        mov dword ptr [ecx + 184h], 0
        pop ebx
        ret
        lea edx, [esi - 53h]
        cmp edx, 24h
        ; Exact mapped bytes 77 3C: ja 0x588cdc3a
        __asm _emit 0x77
        __asm _emit 0x3c
        cmp ebx, 7
        ; Exact mapped bytes 74 26: je 0x588cdc29
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ebx, 6
        ; Exact mapped bytes 74 21: je 0x588cdc29
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [edi + 78h]
        push 1
        push 1
        push 4
        mov dword ptr [eax + 184h], 4
        mov ecx, dword ptr [edi + 78h]
        push 1
        ; Exact mapped bytes E8 0B A3 FC FF: call 0x58897f30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, dword ptr [edi + 78h]
        pop edi
        pop esi
        mov dword ptr [ecx + 184h], 1
        pop ebx
        ret
        cmp esi, 78h
        ; Exact mapped bytes 75 38: jne 0x588cdc77
        __asm _emit 0x75
        __asm _emit 0x38
        cmp ebx, 7
        ; Exact mapped bytes 74 26: je 0x588cdc6a
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ebx, 6
        ; Exact mapped bytes 74 21: je 0x588cdc6a
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [edi + 78h]
        push 1
        push 1
        push 5
        mov dword ptr [edx + 184h], 5
        mov ecx, dword ptr [edi + 78h]
        push 1
        ; Exact mapped bytes E8 CA A2 FC FF: call 0x58897f30
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [edi + 78h]
        mov dword ptr [eax + 184h], 2
        pop edi
        pop esi
        pop ebx
        ret
    }
}
