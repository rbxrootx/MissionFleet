// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101091A0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_101091a0_101091A0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 46: je 0x101091f2
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [edi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x101091ca
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, eax
        mov edx, dword ptr [edi + 58h]
        not ecx
        xor cl, al
        mov dword ptr [edi + 54h], edx
        and ecx, 1
        xor ecx, eax
        ; Exact mapped bytes 66 89 4F 24: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes EB 04: jmp 0x101091ce
        __asm _emit 0xeb
        __asm _emit 0x04
        dec ecx
        mov dword ptr [edi + 54h], ecx
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x101091f2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x101091ed
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x101091d5
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
