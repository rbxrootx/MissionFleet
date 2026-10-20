// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002100 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_10002100_10002100() {
    __asm {
        sub esp, 8
        push ebx
        mov dword ptr [esp + 8], ecx
        xor ebx, ebx
        push ebp
        add ecx, 5ch
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        xor edi, edi
        mov esi, 9cch
        mov eax, dword ptr [esp + 14h]
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [esi + eax + 328h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10002138
        __asm _emit 0x74
        __asm _emit 0x0b
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 1A: je 0x10002152
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + eax + 328h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100021c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 76: jne 0x100021c8
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [eax + 0e74h]
        mov ebp, 80000000h
        mov ecx, edi
        mov edx, dword ptr [edx + 254h]
        shr ebp, cl
        mov ecx, 1fh
        sub ecx, edi
        and edx, ebp
        shr edx, cl
        cmp edx, ebx
        ; Exact mapped bytes 75 52: jne 0x100021c8
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [esi + eax + 328h]
        test ecx, ecx
        ; Exact mapped bytes 74 47: je 0x100021c8
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 8B 8C 06 A8 02 00 00: mov cx, word ptr [esi + eax + 0x2a8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 76 38: jbe 0x100021c8
        __asm _emit 0x76
        __asm _emit 0x38
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 0A: mov cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F9 01: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x100021a3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 25: jne 0x100021c8
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [esi + eax - 7b0h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x100021c8
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 7A 30 00: cmp word ptr [edx + 0x30], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 77 07: ja 0x100021bc
        __asm _emit 0x77
        __asm _emit 0x07
        mov ecx, dword ptr [edx + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100021c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 14h]
        push ebx
        push edi
        push eax
        ; Exact mapped bytes E8 B8 25 00 00: call 0x10004780
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        inc edi
        cmp esi, 0a4ch
        ; Exact mapped bytes 0F 8C 43 FF FF FF: jl 0x1000211b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        inc ebx
        add ecx, 34h
        cmp ebx, 2
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 27 FF FF FF: jl 0x10002114
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
