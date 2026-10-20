// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FAB20 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_588fab20() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 1ch], ebx
        ; Exact mapped bytes 74 1C: je 0x588fab47
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes EB 03: jmp 0x588fab30
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x588fab42
        __asm _emit 0x74
        __asm _emit 0x0b
        dec eax
        mov dword ptr [esi + 1ch], eax
        cmp eax, ebx
        ; Exact mapped bytes 75 03: jne 0x588fab42
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 18h], ebx
        cmp dword ptr [esi + 1ch], ebx
        ; Exact mapped bytes 75 E9: jne 0x588fab30
        __asm _emit 0x75
        __asm _emit 0xe9
        push edi
        mov edi, dword ptr [esi + 14h]
        cmp edi, ebx
        ; Exact mapped bytes 76 1C: jbe 0x588fab6b
        __asm _emit 0x76
        __asm _emit 0x1c
        nop
        mov eax, dword ptr [esi + 10h]
        dec edi
        cmp dword ptr [eax + edi*4], ebx
        lea eax, [eax + edi*4]
        ; Exact mapped bytes 74 0B: je 0x588fab67
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DE 20 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        cmp edi, ebx
        ; Exact mapped bytes 77 E5: ja 0x588fab50
        __asm _emit 0x77
        __asm _emit 0xe5
        mov eax, dword ptr [esi + 10h]
        pop edi
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x588fab7c
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 C9 20 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
    }
}
