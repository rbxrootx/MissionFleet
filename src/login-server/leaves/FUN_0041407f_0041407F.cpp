// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041407F .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_0041407f_0041407F() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        cmp dword ptr [esi + 0e0h], ebx
        ; Exact mapped bytes 75 12: jne 0x4140a3
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 7D 08 01: cmp word ptr [ebp + 8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 0B: je 0x4140a3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        push ebx
        push 3eah
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp dword ptr [esi + 0c8h], ebx
        mov edi, 3f8h
        ; Exact mapped bytes 74 11: je 0x4140c1
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes 74 09: je 0x4140c1
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp dword ptr [esi + 88h], 3
        ; Exact mapped bytes 74 3F: je 0x414109
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [esi + 0c8h], ebx
        ; Exact mapped bytes 74 13: je 0x4140e5
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 66 83 7D 08 01: cmp word ptr [ebp + 8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 27: je 0x414100
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 83 7D 08 06: cmp word ptr [ebp + 8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x06
        ; Exact mapped bytes 75 05: jne 0x4140e5
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 7F 1B: jg 0x414100
        __asm _emit 0x7f
        __asm _emit 0x1b
        cmp dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes 74 1C: je 0x414109
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 7D 08 04: cmp word ptr [ebp + 8], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x04
        ; Exact mapped bytes 74 0C: je 0x414100
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 7D 08 06: cmp word ptr [ebp + 8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x06
        ; Exact mapped bytes 75 0E: jne 0x414109
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 7D 09: jge 0x414109
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
