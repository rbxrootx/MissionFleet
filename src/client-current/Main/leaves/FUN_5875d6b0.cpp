// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D6B0 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_5875d6b0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 75 10: jne 0x5875d6c9
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 0A: jne 0x5875d6c9
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [esi + 60h], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x5875d781
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x5875d731
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x5875d6ff
        __asm _emit 0x75
        __asm _emit 0x27
        cmp dword ptr [esi + 58h], eax
        ; Exact mapped bytes 75 05: jne 0x5875d6e2
        __asm _emit 0x75
        __asm _emit 0x05
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 73: jmp 0x5875d755
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5875d780
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 60h], 2
        ; Exact mapped bytes E8 38 F6 FF FF: call 0x5875cd30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1
        ; Exact mapped bytes EB 5E: jmp 0x5875d75d
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp eax, 1
        ; Exact mapped bytes 75 14: jne 0x5875d718
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 76: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0x76
        pop edi
        mov dword ptr [esi + 60h], 3
        pop esi
        ; Exact mapped bytes E9 88 F6 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 63: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0x63
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 75 5D: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0x5d
        pop edi
        mov dword ptr [esi + 60h], 6
        pop esi
        ; Exact mapped bytes E9 6F F6 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1
        cmp eax, edi
        ; Exact mapped bytes 75 46: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x5875d783
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [esi + 58h], eax
        ; Exact mapped bytes 75 09: jne 0x5875d74f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 60h], 2
        ; Exact mapped bytes EB 09: jmp 0x5875d758
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 2B: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0x2b
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 D3 F5 FF FF: call 0x5875cd30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov dword ptr [esi + 78h], 203ah
        pop edi
        pop esi
        ret
        cmp eax, edi
        ; Exact mapped bytes 75 14: jne 0x5875d79b
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 75 F3: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        mov dword ptr [esi + 60h], 3
        pop esi
        ; Exact mapped bytes E9 05 F6 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 E0: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 DA: jne 0x5875d780
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        mov dword ptr [esi + 60h], 6
        pop esi
        ; Exact mapped bytes E9 EC F5 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
