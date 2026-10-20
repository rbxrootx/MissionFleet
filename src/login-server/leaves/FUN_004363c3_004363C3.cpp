// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004363C3 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_004363c3_004363C3() {
    __asm {
        push esi
        push edi
        xor edi, edi
        ; Exact mapped bytes 39 3D E4 FB 44 00: cmp dword ptr [0x44fbe4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x4363d7
        __asm _emit 0x74
        __asm _emit 0x08
        push 1
        pop eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x436471
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 435eb6h
        mov ecx, 44fb80h
        ; Exact mapped bytes E8 62 0A 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 4], edi
        ; Exact mapped bytes 75 70: jne 0x43645d
        __asm _emit 0x75
        __asm _emit 0x70
        mov dword ptr [esi + 0ch], 4293f0h
        mov dword ptr [esi + 10h], 429460h
        mov dword ptr [esi + 14h], 429520h
        mov dword ptr [esi + 18h], 4296a0h
        mov dword ptr [esi + 1ch], 429b40h
        mov dword ptr [esi + 20h], 429a40h
        mov dword ptr [esi + 24h], 429e20h
        mov dword ptr [esi + 28h], 429740h
        mov dword ptr [esi + 2ch], 429880h
        ; Exact mapped bytes E8 82 F8 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [eax + 8]
        ; Exact mapped bytes FF 56 0C: call dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x436456
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 4], 1
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 75 04: jne 0x436466
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x436471
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes E8 48 F8 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [eax + 8]
        ; Exact mapped bytes FF 56 14: call dword ptr [esi + 0x14]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x14
        pop edi
        pop esi
        ret
    }
}
