// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048870 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_10048870_10048870() {
    __asm {
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ebx
        test eax, eax
        push esi
        mov ebx, ecx
        ; Exact mapped bytes 74 6D: je 0x100488ea
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edi
        ; Exact mapped bytes 8B 3D DC 56 1C 10: mov edi, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 104e0h]
        mov eax, dword ptr [edi + 1ch]
        mov esi, dword ptr [edi + 14h]
        sub eax, esi
        mov ebp, dword ptr [ecx + 110h]
        sar eax, 1
        mov esi, dword ptr [ebx + 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        mov edx, dword ptr [edi + 18h]
        sub esi, eax
        mov eax, dword ptr [ecx + 50h]
        sub esi, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, edx
        mov edi, dword ptr [ecx + 54h]
        sar eax, 1
        mov ecx, dword ptr [ebx + 58h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        sub eax, dword ptr [ebx + 8]
        add eax, edi
        pop edi
        test ecx, ecx
        pop ebp
        ; Exact mapped bytes 74 07: je 0x100488ea
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        push esi
        ; Exact mapped bytes E8 A6 00 00 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 2ch], 101h
        pop esi
        pop ebx
        ret
    }
}
