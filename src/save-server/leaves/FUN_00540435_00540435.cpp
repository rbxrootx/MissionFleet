// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540435 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_00540435_00540435() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ce93h
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
        sub esp, 68h
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax], 6374d4h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x540489
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x540490
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x5404b6
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5404bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x5404e3
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5404ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 11: je 0x540510
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x540517
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 11: je 0x54053d
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x540544
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 2B: je 0x540578
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 38h]
        ; Exact mapped bytes E8 F2 63 FE FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x540578
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 38h]
        ; Exact mapped bytes E8 A5 13 F8 FF: call 0x4c190c
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 36 BF F8 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB D5: jmp 0x54054d
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 12: je 0x54059f
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5405a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 12: je 0x5405cd
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5405d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 12: je 0x5405fb
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x540602
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9F 97 F0 FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x97
        __asm _emit 0xf0
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
        mov esp, ebp
        pop ebp
        ret
    }
}
