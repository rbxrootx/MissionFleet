// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CDC80 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_588cdc80() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x588cdd59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x588cdcbf
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588cdcb8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588cdcbf
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588cdca2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 20ah
        ; Exact mapped bytes 75 7B: jne 0x588cdd43
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 7D 6A: jge 0x588cdd43
        __asm _emit 0x7d
        __asm _emit 0x6a
        cmp dword ptr [ecx + 6ch], eax
        ; Exact mapped bytes 7E 65: jle 0x588cdd43
        __asm _emit 0x7e
        __asm _emit 0x65
        mov eax, dword ptr [edx + 8]
        cmp dword ptr [ecx + 68h], eax
        ; Exact mapped bytes 7D 5D: jge 0x588cdd43
        __asm _emit 0x7d
        __asm _emit 0x5d
        cmp dword ptr [ecx + 70h], eax
        ; Exact mapped bytes 7E 58: jle 0x588cdd43
        __asm _emit 0x7e
        __asm _emit 0x58
        mov eax, dword ptr [esi + 78h]
        cmp byte ptr [eax + 1a8h], 1
        ; Exact mapped bytes 75 09: jne 0x588cdd00
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [eax + 1a8h], 0
        ; Exact mapped bytes EB 43: jmp 0x588cdd43
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 7E 20: jle 0x588cdd27
        __asm _emit 0x7e
        __asm _emit 0x20
        test byte ptr [ecx + 24h], 0fh
        ; Exact mapped bytes 74 36: je 0x588cdd43
        __asm _emit 0x74
        __asm _emit 0x36
        cmp byte ptr [ecx + 61h], 2
        ; Exact mapped bytes 75 30: jne 0x588cdd43
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ecx + 8], 14dh
        ; Exact mapped bytes 7C 27: jl 0x588cdd43
        __asm _emit 0x7c
        __asm _emit 0x27
        push 0
        ; Exact mapped bytes E8 9D 38 E6 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x38
        __asm _emit 0xe6
        __asm _emit 0xff
        push 0fh
        ; Exact mapped bytes EB 14: jmp 0x588cdd3b
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dl, byte ptr [ecx + 24h]
        and dl, 0fh
        cmp dl, 0fh
        ; Exact mapped bytes 74 11: je 0x588cdd43
        __asm _emit 0x74
        __asm _emit 0x11
        push 0fh
        ; Exact mapped bytes E8 87 38 E6 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0xe6
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 7D 38 E6 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x38
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5ch]
        mov cl, byte ptr [eax + 24h]
        and cl, 0fh
        cmp cl, 0fh
        ; Exact mapped bytes 75 08: jne 0x588cdd59
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 47 1F 00 00: call 0x588cfca0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
