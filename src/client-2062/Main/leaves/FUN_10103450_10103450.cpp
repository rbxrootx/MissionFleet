// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103450 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_10103450_10103450() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes FF 15 80 51 17 10: call dword ptr [0x10175180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 50h]
        and edx, 0fffffffdh
        cmp eax, 4
        mov dword ptr [esi + 68h], edx
        ; Exact mapped bytes 75 30: jne 0x1010349a
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [esi + 5ch]
        test ecx, ecx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 50h], 3
        ; Exact mapped bytes 74 18: je 0x10103496
        __asm _emit 0x74
        __asm _emit 0x18
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0D: je 0x10103496
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 10001h
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        xor eax, eax
        pop esi
        ret
        cmp eax, 6
        ; Exact mapped bytes 75 30: jne 0x101034cf
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [esi + 50h], 2
        mov dword ptr [esi + 58h], ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x101034cb
        __asm _emit 0x74
        __asm _emit 0x18
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0D: je 0x101034cb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 10000h
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
    }
}
