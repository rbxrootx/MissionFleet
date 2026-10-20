// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101034E0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_101034e0_101034E0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 5C: je 0x10103546
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 50h]
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x101034f7
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 6
        ; Exact mapped bytes 75 2B: jne 0x10103522
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x1010351e
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x10103519
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x10103519
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes EB 01: jmp 0x1010351f
        __asm _emit 0xeb
        __asm _emit 0x01
        dec eax
        mov dword ptr [esi + 58h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10103546
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10103541
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10103529
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
