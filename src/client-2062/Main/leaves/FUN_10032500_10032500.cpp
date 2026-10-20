// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032500 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_10032500_10032500() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x100325b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], 2
        ; Exact mapped bytes 75 7E: jne 0x10032592
        __asm _emit 0x75
        __asm _emit 0x7e
        mov edx, dword ptr [esi + 58h]
        test edx, edx
        ; Exact mapped bytes 7E 5D: jle 0x10032578
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1003252a
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 0C: mov ax, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1003252c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 50h]
        dec eax
        cmp ecx, eax
        ; Exact mapped bytes 75 3D: jne 0x10032571
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 5ch], 1
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10032547
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 68h]
        test ecx, ecx
        ; Exact mapped bytes 74 44: je 0x10032592
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov edi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub eax, 190h
        sub ecx, edi
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push eax
        ; Exact mapped bytes E8 21 64 01 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x10032592
        __asm _emit 0xeb
        __asm _emit 0x21
        add ecx, edx
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes EB 1A: jmp 0x10032592
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 7D 18: jge 0x10032592
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x1003258d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 5ch], eax
        test ecx, ecx
        ; Exact mapped bytes 74 BC: je 0x10032547
        __asm _emit 0x74
        __asm _emit 0xbc
        ; Exact mapped bytes EB B5: jmp 0x10032542
        __asm _emit 0xeb
        __asm _emit 0xb5
        add eax, edx
        mov dword ptr [esi + 50h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100325b6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100325b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10032599
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
