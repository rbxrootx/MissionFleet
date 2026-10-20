// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005681E4 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_005681e4_005681E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5682bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x568217
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ch
        push 67b070h
        ; Exact mapped bytes E8 2E 0B FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568217
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5681fd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 11: jne 0x568237
        __asm _emit 0x75
        __asm _emit 0x11
        push 3dh
        push 67b070h
        ; Exact mapped bytes E8 0E 0B FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568237
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56821d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x56824f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes 73 30: jae 0x56828a
        __asm _emit 0x73
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + edx + 4]
        push edx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        lea eax, [edx + eax + 14h]
        push eax
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB BC: jmp 0x568246
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0D 42 F6 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x5682d7
        __asm _emit 0x74
        __asm _emit 0x11
        push 4ch
        push 67b070h
        ; Exact mapped bytes E8 6E 0A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5682d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5682bd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 11: je 0x5682f7
        __asm _emit 0x74
        __asm _emit 0x11
        push 4dh
        push 67b070h
        ; Exact mapped bytes E8 4E 0A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5682f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5682dd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 11: je 0x568317
        __asm _emit 0x74
        __asm _emit 0x11
        push 4eh
        push 67b070h
        ; Exact mapped bytes E8 2E 0A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568317
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5682fd
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
