// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0200 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_588d0200() {
    __asm {
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 30h]
        mov ecx, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, ecx
        mov ebp, ecx
        xor eax, eax
        and edi, 1
        and ebx, 10h
        and ebp, 100h
        and ecx, 1000h
        lea esi, [edx + 1deh]
        mov dword ptr [esp + 14h], 9
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esi - 20h]
        test edi, edi
        ; Exact mapped bytes 74 06: je 0x588d024d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0bh
        ; Exact mapped bytes 75 01: jne 0x588d024d
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x588d0257
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0ch
        ; Exact mapped bytes 75 01: jne 0x588d0257
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebp, ebp
        ; Exact mapped bytes 74 06: je 0x588d0261
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0dh
        ; Exact mapped bytes 75 01: jne 0x588d0261
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588d026b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0eh
        ; Exact mapped bytes 75 01: jne 0x588d026b
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        mov dl, byte ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 06: je 0x588d0277
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0bh
        ; Exact mapped bytes 75 01: jne 0x588d0277
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x588d0281
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0ch
        ; Exact mapped bytes 75 01: jne 0x588d0281
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebp, ebp
        ; Exact mapped bytes 74 06: je 0x588d028b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0dh
        ; Exact mapped bytes 75 01: jne 0x588d028b
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588d0295
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0eh
        ; Exact mapped bytes 75 01: jne 0x588d0295
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        mov dl, byte ptr [esi + 20h]
        test edi, edi
        ; Exact mapped bytes 74 06: je 0x588d02a2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0bh
        ; Exact mapped bytes 75 01: jne 0x588d02a2
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x588d02ac
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0ch
        ; Exact mapped bytes 75 01: jne 0x588d02ac
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ebp, ebp
        ; Exact mapped bytes 74 06: je 0x588d02b6
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0dh
        ; Exact mapped bytes 75 01: jne 0x588d02b6
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588d02c0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dl, 0eh
        ; Exact mapped bytes 75 01: jne 0x588d02c0
        __asm _emit 0x75
        __asm _emit 0x01
        inc eax
        add esi, 60h
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 72 FF FF FF: jne 0x588d0240
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
