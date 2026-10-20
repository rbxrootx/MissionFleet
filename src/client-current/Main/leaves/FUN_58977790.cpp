// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977790 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_58977790() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, dword ptr [edi + 140h]
        mov ecx, dword ptr [edi + 0e0h]
        mov eax, dword ptr [esi + 8]
        cmp eax, ecx
        ; Exact mapped bytes 0F 83 85 00 00 00: jae 0x58977834
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        lea ebp, [esi + 0ch]
        cmp dword ptr [ebp], 8
        ; Exact mapped bytes 73 25: jae 0x589777e1
        __asm _emit 0x73
        __asm _emit 0x25
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + 144h]
        push 8
        lea edx, [esi + 18h]
        push ebp
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        push ebx
        push edx
        push edi
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp]
        add esp, 1ch
        cmp eax, 8
        ; Exact mapped bytes 75 51: jne 0x58977834
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [edi + 148h]
        lea ecx, [esi + 18h]
        push ecx
        push edi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        add esp, 8
        test al, al
        mov al, byte ptr [esi + 10h]
        ; Exact mapped bytes 74 2C: je 0x58977827
        __asm _emit 0x74
        __asm _emit 0x2c
        test al, al
        ; Exact mapped bytes 74 09: je 0x58977808
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebx]
        inc eax
        mov dword ptr [ebx], eax
        mov byte ptr [esi + 10h], 0
        mov edx, dword ptr [esi + 8]
        mov dword ptr [ebp], 0
        inc edx
        mov dword ptr [esi + 8], edx
        mov ecx, dword ptr [edi + 0e0h]
        mov eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 72 94: jb 0x589777b6
        __asm _emit 0x72
        __asm _emit 0x94
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        test al, al
        ; Exact mapped bytes 75 09: jne 0x58977834
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebx]
        dec eax
        mov dword ptr [ebx], eax
        mov byte ptr [esi + 10h], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
