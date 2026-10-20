// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005696B9 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_005696b9_005696B9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fddah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 58ab84h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 56 01 00 00: call 0x569848
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 1B: je 0x569719
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 0bch]
        ; Exact mapped bytes E8 F8 28 FE FF: call 0x54c004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BC 76 FE FF: call 0x550ddd
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 78 FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0E: je 0x569747
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AC 75 FE FF: call 0x550cf1
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB DD: jmp 0x569724
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 3E: je 0x569791
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x56977d
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x569784
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 11: je 0x5697ae
        __asm _emit 0x74
        __asm _emit 0x11
        push 41h
        push 5d053ch
        ; Exact mapped bytes E8 57 B2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5697ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x569791
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x5697d9
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5697b4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 25: je 0x569810
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0ach], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x5697df
        __asm _emit 0x75
        __asm _emit 0xc9
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 24 40 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 11 C6 FF FF: call 0x565e48
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
