// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798500 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58798500() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 75 36: jne 0x58798544
        __asm _emit 0x75
        __asm _emit 0x36
        movzx eax, word ptr [edi + 26ch]
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 29: je 0x58798544
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 74 23: je 0x58798544
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 1D: je 0x58798544
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [edi + 0a4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0a8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 22: jmp 0x58798566
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [edi + 0a4h]
        mov edx, 1
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0a8h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0a8h]
        mov dword ptr [eax + 50h], ecx
        mov ebp, dword ptr [edi + 4]
        mov ebx, dword ptr [edi + 8]
        add ebp, 64h
        add ebx, 0aah
        lea esi, [edi + 1d0h]
        mov dword ptr [esp + 1ch], 20h
        test byte ptr [esp + 14h], 1
        ; Exact mapped bytes 74 24: je 0x587985ae
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 FD AC 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 1E: je 0x587985b9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, ecx
        mov edx, dword ptr [eax + 50h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea ebp, [ecx + ebp + 5]
        ; Exact mapped bytes EB 0B: jmp 0x587985b9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        shr dword ptr [esp + 14h], 1
        add esi, 4
        sub dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 75 BC: jne 0x58798583
        __asm _emit 0x75
        __asm _emit 0xbc
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi + 0d0h]
        push eax
        ; Exact mapped bytes E8 89 ED 16 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0d0h]
        ; Exact mapped bytes 66 83 4F 24 01: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x01
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
