// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A3A0 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_5886a3a0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 288h], 0
        ; Exact mapped bytes 0F 85 1A 01 00 00: jne 0x5886a4cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 28ch], 0
        ; Exact mapped bytes 74 38: je 0x5886a3f2
        __asm _emit 0x74
        __asm _emit 0x38
        lea eax, [esp + 4]
        push 5899ed3ch
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 4
        lea edx, [esp + 8]
        push edx
        push eax
        ; Exact mapped bytes E8 E1 F6 F4 FF: call 0x587b9ad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
        mov ecx, dword ptr [esi + 100h]
        mov eax, dword ptr [ecx + 80h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x5886a4cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ebp
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ebp, eax
        inc ebp
        cmp ebp, 2
        ; Exact mapped bytes 0F 8E AC 00 00 00: jle 0x5886a4c9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 100h]
        mov eax, dword ptr [edx + 80h]
        push edi
        push eax
        xor edi, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5886a477
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes EB 0B: jmp 0x5886a440
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100h]
        mov ecx, dword ptr [eax + 80h]
        mov al, byte ptr [edi + ecx]
        cmp al, 20h
        ; Exact mapped bytes 74 53: je 0x5886a4a6
        __asm _emit 0x74
        __asm _emit 0x53
        cmp al, 27h
        ; Exact mapped bytes 74 4F: je 0x5886a4a6
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp al, 1
        ; Exact mapped bytes 7C 04: jl 0x5886a45f
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 1fh
        ; Exact mapped bytes 7E 47: jle 0x5886a4a6
        __asm _emit 0x7e
        __asm _emit 0x47
        cmp al, 7fh
        ; Exact mapped bytes 74 43: je 0x5886a4a6
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [esi + 100h]
        mov eax, dword ptr [edx + 80h]
        push eax
        inc edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp edi, eax
        ; Exact mapped bytes 75 C9: jne 0x5886a440
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 100h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push edx
        push eax
        ; Exact mapped bytes E8 30 F6 F4 FF: call 0x587b9ad0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret
        mov ecx, dword ptr [esi + 100h]
        ; Exact mapped bytes E8 8F 54 EF FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0xef
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 3e6h
        ; Exact mapped bytes E8 2F 16 F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
    }
}
