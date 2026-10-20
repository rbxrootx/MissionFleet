// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC160 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_587cc160() {
    __asm {
        mov al, byte ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        imul ecx, ecx, 5dch
        mov byte ptr [esi + 0ch], al
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587cc187
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 A2 0C 1B 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        movzx eax, byte ptr [esi + 0ch]
        xor ecx, ecx
        mov edx, 3
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 8D 53 1A 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0ch]
        lea ecx, [ecx + ecx*2]
        push ecx
        push 0
        push eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 94 0A 1B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x1b
        __asm _emit 0x00
        xor eax, eax
        add esp, 10h
        cmp byte ptr [esi + 0ch], al
        ; Exact mapped bytes 74 19: je 0x587cc1d7
        __asm _emit 0x74
        __asm _emit 0x19
        xor ecx, ecx
        mov dl, 0feh
        push edi
        mov edi, dword ptr [esi + 4]
        mov byte ptr [edi + ecx + 2], dl
        movzx edi, byte ptr [esi + 0ch]
        inc eax
        add ecx, 3
        cmp eax, edi
        ; Exact mapped bytes 75 ED: jne 0x587cc1c3
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587cc1e7
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 42 0C 1B 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        push 20h
        ; Exact mapped bytes E8 40 53 1A 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi + 8], eax
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        add esp, 4
        mov dword ptr [eax + 18h], ecx
        mov dword ptr [eax + 1ch], ecx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
