// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D5E0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5884d5e0() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 3B: je 0x5884d626
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [edi + 50h]
        mov eax, dword ptr [ecx + 70h]
        cmp dword ptr [eax + 60h], 40000000h
        ; Exact mapped bytes 75 0C: jne 0x5884d606
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 58h]
        mov ecx, dword ptr [edi + 78h]
        push edx
        ; Exact mapped bytes E8 5A 9D 0B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x5884d626
        __asm _emit 0x74
        __asm _emit 0x19
        push esi
        mov edi, edi
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5884d628
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x5884d610
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
