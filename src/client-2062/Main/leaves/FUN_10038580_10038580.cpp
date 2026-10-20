// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10038580 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_10038580_10038580() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 304h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10038597
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e8h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100385ac
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x100385af
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        test eax, eax
        mov dword ptr [esi + 304h], eax
        ; Exact mapped bytes 74 40: je 0x100385f9
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 3B 8E 88 02 00 00: cmp cx, word ptr [esi + 0x288]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 27: jne 0x100385ef
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 66 8B 86 A4 02 00 00: mov ax, word ptr [esi + 0x2a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 74 1A: je 0x100385ef
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x100385ef
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x100385ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x100385f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 0c0h]
        or byte ptr [eax + 24h], 2
        mov edx, dword ptr [esi + 304h]
        push ebx
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov eax, dword ptr [edx + 14h]
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 73 B8 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 2B C1 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc1
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E7: jne 0x10038612
        __asm _emit 0x75
        __asm _emit 0xe7
        mov eax, dword ptr [esi + 304h]
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x10038677
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 0e8h]
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 FD B7 0C 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        mov ebx, eax
        ; Exact mapped bytes E8 40 B8 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, ebx
        mov ecx, dword ptr [esi + 8]
        imul eax, edi
        lea edx, [eax + ecx + 0ddh]
        mov ecx, dword ptr [esi + 1f8h]
        push edx
        ; Exact mapped bytes E8 55 67 0C 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1f8h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 0C: jmp 0x10038683
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0e8h]
        pop ebx
        mov edi, dword ptr [ecx + 88h]
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x100386b6
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 F7 B7 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        inc eax
        mov ecx, dword ptr [esi + 8]
        lea eax, [eax + eax*8]
        shl eax, 3
        cdq
        idiv edi
        lea edx, [ecx + eax + 0e9h]
        mov ecx, dword ptr [esi + 7ch]
        push edx
        ; Exact mapped bytes E8 0A 67 0C 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
