// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412F51 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00412f51_00412F51() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 0cch], ebx
        ; Exact mapped bytes 75 0B: jne 0x412f6a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        push ebx
        push 3f1h
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x413007
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0c8h], ebx
        ; Exact mapped bytes 75 10: jne 0x412f8c
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes 75 08: jne 0x412f8c
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 0e4h], ebx
        ; Exact mapped bytes 74 0D: je 0x412f99
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        push ebx
        push 3efh
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov eax, dword ptr [esi + 88h]
        push edi
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x412fa9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 3
        ; Exact mapped bytes 75 33: jne 0x412fdc
        __asm _emit 0x75
        __asm _emit 0x33
        cmp dword ptr [esi + 0a8h], 1
        ; Exact mapped bytes 75 2A: jne 0x412fdc
        __asm _emit 0x75
        __asm _emit 0x2a
        push 2
        push ebx
        push 1
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 F3 95 01 00: call 0x42c5b2
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 EB: je 0x412fb2
        __asm _emit 0x74
        __asm _emit 0xeb
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x412fdc
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp dword ptr [esi + 1ch], ebx
        pop edi
        ; Exact mapped bytes 74 1B: je 0x412ffd
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [esi + 14h], ebx
        ; Exact mapped bytes 76 16: jbe 0x412ffd
        __asm _emit 0x76
        __asm _emit 0x16
        cmp dword ptr [esi + 94h], ebx
        mov ecx, esi
        ; Exact mapped bytes 74 07: je 0x412ff8
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 9E 1F 00 00: call 0x414f94
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 73 1F 00 00: call 0x414f70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 94h], 1
        pop esi
        pop ebx
        ret
    }
}
