// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877DDF0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5877ddf0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 6F: je 0x5877de6a
        __asm _emit 0x74
        __asm _emit 0x6f
        inc dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5877de4c
        __asm _emit 0x74
        __asm _emit 0x44
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp ecx, edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5877de4c
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [esi + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5877de4c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5877de6a
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5877de6c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5877de54
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
