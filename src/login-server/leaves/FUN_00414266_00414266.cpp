// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414266 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_00414266_00414266() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        movzx eax, word ptr [ebp + 0ch]
        push ebx
        xor ebx, ebx
        push esi
        dec eax
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x4143a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x414380
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x41435a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x414333
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 40: je 0x4142d7
        __asm _emit 0x74
        __asm _emit 0x40
        dec eax
        ; Exact mapped bytes 74 1A: je 0x4142b4
        __asm _emit 0x74
        __asm _emit 0x1a
        dec eax
        dec eax
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x4143fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [esi + 0a0h], 0fffffffeh
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x4143fb
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        lea edi, [esi + 0a0h]
        mov dword ptr [ebp - 4], eax
        push eax
        push edi
        ; Exact mapped bytes E8 E1 10 00 00: call 0x4153ab
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        push dword ptr [esi + 98h]
        push dword ptr [edi]
        ; Exact mapped bytes EB 4B: jmp 0x414322
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 83 7D 08 64: cmp word ptr [ebp + 8], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 25: je 0x414309
        __asm _emit 0x74
        __asm _emit 0x25
        cmp eax, ebx
        ; Exact mapped bytes 7E 09: jle 0x4142f1
        __asm _emit 0x7e
        __asm _emit 0x09
        dec eax
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes EB 22: jmp 0x414313
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 74 10: je 0x414309
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 9ch]
        add ecx, eax
        mov dword ptr [esi + 0a0h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x414313
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0a0h], 0fffffffeh
        push dword ptr [ebp + 8]
        push dword ptr [esi + 98h]
        push dword ptr [esi + 0a0h]
        lea eax, [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 9B 10 00 00: call 0x4153c9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x4143fb
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [esi + 0c8h], ebx
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x4143fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea eax, [esi + 0a0h]
        push dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 56 10 00 00: call 0x4153ab
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4143fb
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes 66 83 7D 08 64: cmp word ptr [ebp + 8], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        ; Exact mapped bytes 74 29: je 0x41438e
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 0F 84 34 FF FF FF: je 0x4142a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ch]
        dec eax
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes EB 7B: jmp 0x4143fb
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes 66 83 7D 08 64: cmp word ptr [ebp + 8], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 75 12: jne 0x4143a0
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [esi + 0a0h], 0fffffffeh
        mov dword ptr [esi + 9ch], ebx
        ; Exact mapped bytes EB 66: jmp 0x414406
        __asm _emit 0xeb
        __asm _emit 0x66
        mov dword ptr [esi + 0a0h], ebx
        ; Exact mapped bytes EB 53: jmp 0x4143fb
        __asm _emit 0xeb
        __asm _emit 0x53
        push dword ptr [ebp + 8]
        lea edi, [esi + 0a0h]
        mov dword ptr [ebp - 4], 1
        push dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 EA 0F 00 00: call 0x4153ab
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea ebx, [esi + 9ch]
        push dword ptr [esi + 98h]
        push dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 F1 0F 00 00: call 0x4153c9
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 75 18: jne 0x4143f9
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 7D 08 64: cmp word ptr [ebp + 8], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        ; Exact mapped bytes 75 61: jne 0x414449
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [edi]
        inc eax
        cmp dword ptr [ebx], eax
        ; Exact mapped bytes 75 15: jne 0x414404
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [esi + 98h], 1
        xor ebx, ebx
        ; Exact mapped bytes 66 83 7D 08 64: cmp word ptr [ebp + 8], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        ; Exact mapped bytes 75 49: jne 0x41444b
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes EB 02: jmp 0x414406
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 66 83 7D 0C 02: cmp word ptr [ebp + 0xc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 74 2B: je 0x414438
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 66 83 7D 0C 03: cmp word ptr [ebp + 0xc], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x03
        ; Exact mapped bytes 74 24: je 0x414438
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 7D 0C 08: cmp word ptr [ebp + 0xc], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x08
        ; Exact mapped bytes 74 1D: je 0x414438
        __asm _emit 0x74
        __asm _emit 0x1d
        xor eax, eax
        cmp dword ptr [ebp - 4], ebx
        setge al
        xor ecx, ecx
        cmp eax, ebx
        sete cl
        mov dword ptr [esi + 0c8h], eax
        mov dword ptr [esi + 0c4h], ecx
        ; Exact mapped bytes EB 1F: jmp 0x414457
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 1
        pop eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes EB 0E: jmp 0x414457
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ebx, ebx
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0c8h], ebx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
