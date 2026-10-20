// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413498 .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_00413498_00413498() {
    __asm {
        mov eax, 43a65dh
        ; Exact mapped bytes E8 66 C1 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [ebp - 24h], esi
        cmp dword ptr [esi + 4], ebx
        mov dword ptr [ebp - 10h], esp
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x413626
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [esi + 8], ebx
        mov dword ptr [ebp - 4], ebx
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 75 2F: jne 0x4134fe
        __asm _emit 0x75
        __asm _emit 0x2f
        push 60h
        ; Exact mapped bytes E8 16 A4 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 20h], ecx
        cmp ecx, ebx
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 74 07: je 0x4134eb
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 80 E7 FF FF: call 0x411c69
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x4134ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [ebp - 4], 1
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0c0h], 1
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        push eax
        lea ecx, [ebp - 18h]
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 CE A7 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 89 A6 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp dword ptr [ecx + 4], ebx
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x4135d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        push 1
        mov dword ptr [ebp - 14h], eax
        pop eax
        cmp dword ptr [esi + 88h], eax
        ; Exact mapped bytes 75 09: jne 0x413548
        __asm _emit 0x75
        __asm _emit 0x09
        test byte ptr [esi + 2ch], 4
        ; Exact mapped bytes 75 03: jne 0x413548
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ebp - 14h], eax
        push dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx]
        mov edi, 43d65ch
        push dword ptr [ebp - 18h]
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp eax, ebx
        ; Exact mapped bytes 74 61: je 0x4135c0
        __asm _emit 0x74
        __asm _emit 0x61
        cmp dword ptr [esi + 88h], 1
        ; Exact mapped bytes 75 68: jne 0x4135d0
        __asm _emit 0x75
        __asm _emit 0x68
        cmp dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 75 63: jne 0x4135d0
        __asm _emit 0x75
        __asm _emit 0x63
        lea eax, [ebp - 12h]
        push eax
        lea eax, [ebp - 20h]
        push 4
        push eax
        mov eax, dword ptr [esi + 8]
        push 2ch
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 0A 90 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x41359e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        push ebx
        push dword ptr [ebp - 1ch]
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        test byte ptr [ebp - 20h], 10h
        ; Exact mapped bytes 75 2C: jne 0x4135d0
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 8]
        push 1
        push dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx]
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp eax, ebx
        ; Exact mapped bytes 75 10: jne 0x4135d0
        __asm _emit 0x75
        __asm _emit 0x10
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 DF A5 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x413629
        __asm _emit 0xeb
        __asm _emit 0x59
        lea eax, [esi + 4]
        push eax
        mov eax, dword ptr [esi + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 97 8F 01 00: call 0x42c576
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        cmp eax, ebx
        ; Exact mapped bytes 75 0A: jne 0x4135f5
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push ebx
        push -2
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 0fh
        ; Exact mapped bytes E8 A7 39 02 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push esi
        add ecx, 1ch
        mov byte ptr [ebp - 4], 4
        ; Exact mapped bytes E8 26 9D 01 00: call 0x42d332
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fh
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 F9 39 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 85 A5 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        pop eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
