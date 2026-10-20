// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006BE90 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_1006be90_1006BE90() {
    __asm {
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        push edi
        push 22bh
        mov ecx, 101c4558h
        mov dword ptr [esi + 10498h], edi
        mov dword ptr [esi + 1049ch], edi
        mov dword ptr [esi + 10494h], edi
        ; Exact mapped bytes E8 27 6A 07 00: call 0x100e28e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ebp, 1
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20b94h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 20ba4h], edi
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        cmp eax, edi
        ; Exact mapped bytes 74 3E: je 0x1006bf2d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 4]
        mov eax, 7d000h
        push ebx
        mov ebx, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 104f0h], ebp
        cdq
        idiv dword ptr [ebx + 110h]
        sub edi, eax
        mov eax, 5dc00h
        cdq
        mov dword ptr [esi + 104f4h], edi
        idiv dword ptr [ebx + 110h]
        pop ebx
        sub ecx, eax
        xor edi, edi
        mov dword ptr [esi + 104f8h], ecx
        ; Exact mapped bytes A1 D8 58 1C 10: mov eax, dword ptr [0x101c58d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes A1 58 CE 1A 10: mov eax, dword ptr [0x101ace58]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes A1 5C CE 1A 10: mov eax, dword ptr [0x101ace5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 58 CE 1A 10: mov ecx, dword ptr [0x101ace58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 CC 37 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C CE 1A 10: mov ecx, dword ptr [0x101ace5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 C0 37 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes E8 35 32 09 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 58 1C 10: mov eax, dword ptr [0x101c58dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], ebp
        ; Exact mapped bytes 75 1B: jne 0x1006bf90
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 1430h]
        mov dword ptr [eax + 4], edi
        cmp ecx, -1
        ; Exact mapped bytes 74 0D: je 0x1006bf90
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [eax + 1424h]
        push edx
        ; Exact mapped bytes FF 15 F4 50 17 10: call dword ptr [0x101750f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp dword ptr [esi + 21a34h], edi
        ; Exact mapped bytes 75 0A: jne 0x1006bfa2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov esi, dword ptr [esi + 10a30h]
        or byte ptr [esi + 24h], 0fh
        pop edi
        pop esi
        pop ebp
        ret
    }
}
