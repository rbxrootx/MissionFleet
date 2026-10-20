// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005DE90 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_1005de90_1005DE90() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x1005df2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b58h]
        test ecx, ecx
        ; Exact mapped bytes 74 68: je 0x1005df13
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [eax + 0b54h]
        test ecx, ecx
        ; Exact mapped bytes 74 5E: je 0x1005df13
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        ; Exact mapped bytes 74 53: je 0x1005df13
        __asm _emit 0x74
        __asm _emit 0x53
        test byte ptr [eax + 48h], 1
        ; Exact mapped bytes 74 17: je 0x1005dedd
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esi + 56ch]
        push 80h
        mov dword ptr [edx + 80h], 80h
        ; Exact mapped bytes EB 12: jmp 0x1005deef
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [esi + 56ch]
        push 0
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [esi + 56ch]
        ; Exact mapped bytes E8 66 12 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 56ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov esi, dword ptr [esi + 56ch]
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        ret
        mov eax, dword ptr [esi + 56ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esi, dword ptr [esi + 56ch]
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        ret
        mov esi, dword ptr [esi + 56ch]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        ret
    }
}
