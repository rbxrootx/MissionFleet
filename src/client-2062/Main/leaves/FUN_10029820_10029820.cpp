// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029820 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_10029820_10029820() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 7D: je 0x100298a7
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edi, dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 54h]
        inc edi
        test eax, eax
        mov dword ptr [esi + 50h], edi
        mov ecx, edi
        ; Exact mapped bytes 74 49: je 0x10029883
        __asm _emit 0x74
        __asm _emit 0x49
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp ecx, edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x10029883
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10029883
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100298a7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100298a2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1002988a
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
