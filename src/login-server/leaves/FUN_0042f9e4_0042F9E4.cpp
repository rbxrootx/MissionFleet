// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F9E4 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_0042f9e4_0042F9E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 D7 25 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 33: je 0x42fa2f
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [edi + 1ch], esi
        ; Exact mapped bytes 75 26: jne 0x42fa27
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes E8 AD 62 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 14h], bl
        ; Exact mapped bytes 75 19: jne 0x42fa24
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 A3 62 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 09: jne 0x42fa1e
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 9F 5D 00 00: call 0x4357b9
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x42fa24
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 10 97 00 00: call 0x439134
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 1ch], ebx
        cmp dword ptr [edi + 20h], esi
        ; Exact mapped bytes 75 03: jne 0x42fa2f
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 20h], ebx
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x42fa3e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov dword ptr [esi + 30h], ebx
        mov ecx, dword ptr [esi + 34h]
        push 1
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 06: je 0x42fa4e
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        and dword ptr [esi + 34h], 0
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 74 4C: je 0x42faa3
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes E8 2A 60 00 00: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0cch]
        test edi, edi
        ; Exact mapped bytes 74 3D: je 0x42faa3
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 37: je 0x42faa3
        __asm _emit 0x74
        __asm _emit 0x37
        push 2ch
        lea eax, [ebp - 2ch]
        push 0
        push eax
        ; Exact mapped bytes E8 67 F0 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1ch]
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 2ch]
        mov dword ptr [ebp - 2ch], 28h
        push eax
        push 0
        push 405h
        mov dword ptr [ebp - 28h], ebx
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 14 C5 43 00: mov edi, dword ptr [0x43c514]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push -4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, esi
        mov ebx, eax
        ; Exact mapped bytes E8 86 F7 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push -4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, ebx
        ; Exact mapped bytes 75 1C: jne 0x42fae0
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x42fae0
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        push -4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6F F8 FF FF: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 A4 00 00 00: call dword ptr [eax + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
