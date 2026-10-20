// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E570 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5877e570() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 3C: je 0x5877e5b7
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [edi + 70h]
        cmp dword ptr [eax + 60h], 40000000h
        ; Exact mapped bytes 75 12: jne 0x5877e599
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [eax + 58h]
        mov ecx, dword ptr [edi + 68h]
        imul eax, ecx
        cdq
        idiv dword ptr [edi + 54h]
        sub ecx, eax
        mov dword ptr [edi + 60h], ecx
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5877e5b7
        __asm _emit 0x74
        __asm _emit 0x17
        push esi
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5877e5b9
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x5877e5a1
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
