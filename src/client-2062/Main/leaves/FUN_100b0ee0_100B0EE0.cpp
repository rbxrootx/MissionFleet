// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0EE0 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_100b0ee0_100B0EE0() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [eax + 0d0ch]
        mov ebx, ecx
        test esi, esi
        push edi
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 74 75: je 0x100b0f75
        __asm _emit 0x74
        __asm _emit 0x75
        add esi, 83ch
        lea ebp, [ebx + 0e4h]
        mov dword ptr [esp + 10h], 20h
        mov edi, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x100b0f59
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [edi + 30h]
        cmp eax, ebx
        ; Exact mapped bytes 74 19: je 0x100b0f3d
        __asm _emit 0x74
        __asm _emit 0x19
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 D4 DF 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 6C E0 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 13 7A F7 FF: call 0x10028950
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 4]
        sub eax, 1eh
        mov ecx, dword ptr [ecx + 8]
        sub ecx, 37h
        push ecx
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 7B DD 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        add ebp, 4
        add esi, 4
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 AA: jne 0x100b0f14
        __asm _emit 0x75
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2B F3 FA FF: call 0x100602a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 4]
        ; Exact mapped bytes 8B 15 C0 58 1C 10: mov edx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 9
        xor ebp, ebp
        mov esi, dword ptr [edx + 24h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [ebx + 8]
        add eax, 3ah
        test esi, esi
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x100b104c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        cmp dword ptr [edi + 30h], ebx
        ; Exact mapped bytes 74 18: je 0x100b0fbc
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 54 DF 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 EC DF 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 94 7A F7 FF: call 0x10028a50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov edi, dword ptr [ebx + 17ch]
        mov edx, dword ptr [esp + 14h]
        push eax
        mov eax, ebp
        sub eax, edi
        mov ecx, eax
        add edx, eax
        shl ecx, 5
        add ecx, eax
        lea eax, [edx + ecx*2]
        mov ecx, dword ptr [esi + 0ch]
        push eax
        ; Exact mapped bytes E8 EC DC 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 17ch]
        cmp ebp, eax
        ; Exact mapped bytes 7C 10: jl 0x100b0ffe
        __asm _emit 0x7c
        __asm _emit 0x10
        add eax, 7
        cmp ebp, eax
        ; Exact mapped bytes 7D 09: jge 0x100b0ffe
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [esi + 0ch]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 09: jmp 0x100b1007
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ch]
        test dword ptr [eax + 0e4h], 10000000h
        ; Exact mapped bytes 74 2A: je 0x100b1040
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x100b1033
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 88 0B 04 00: call 0x100f1bb0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x100b1033
        __asm _emit 0x75
        __asm _emit 0x07
        push 80h
        ; Exact mapped bytes EB 05: jmp 0x100b1038
        __asm _emit 0xeb
        __asm _emit 0x05
        push 100h
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 E0 E0 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi + 8]
        inc ebp
        test esi, esi
        ; Exact mapped bytes 0F 85 50 FF FF FF: jne 0x100b0f9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 1B FB FF FF: call 0x100b0b70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
