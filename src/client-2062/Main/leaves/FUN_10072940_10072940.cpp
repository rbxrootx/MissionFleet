// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10072940 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_10072940_10072940() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 11ch]
        mov ecx, edi
        ; Exact mapped bytes E8 0F C7 08 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 58 C7 08 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        xor edi, edi
        and eax, 0e4fdh
        mov dword ptr [esi + 58h], edi
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 50h], edi
        mov dword ptr [eax + 54h], 226h
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 114h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes A1 DC 58 1C 10: mov eax, dword ptr [0x101c58dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 75 1B: jne 0x100729bf
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 1430h]
        mov dword ptr [eax + 4], edi
        cmp ecx, -1
        ; Exact mapped bytes 74 0D: je 0x100729bf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [eax + 1424h]
        push ecx
        ; Exact mapped bytes FF 15 F4 50 17 10: call dword ptr [0x101750f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        ret
    }
}
