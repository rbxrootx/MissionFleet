// Reconstructed from FUN_101036b0 Ghidra pseudocode and disassembly.
// Builds a graphics surface using device and pixel-format globals, then
// configures its data region through the surface vtable.
extern "C" __declspec(naked) void CreateSpriteDataSurface() {
    __asm {
        sub esp, 24h
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        ; Exact immediate encoding: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [esp + 0ch]
        mov dword ptr [esi + 14h], edx
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 34h]
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 0ch], 24h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], ecx
        ; Exact immediate encoding: je near ptr L_101037DB
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dl, byte ptr [101c9330h]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test dl, dl
        ; Exact immediate encoding: je near ptr L_1010377B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp word ptr [ecx + 2], 1
        ; Exact immediate encoding: jne short L_1010377B
        __asm _emit 0x75
        __asm _emit 0x79
        mov ecx, dword ptr [esp + 3ch]
        ; Exact immediate encoding: mov edx, dword ptr [10176cf8h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        or ecx, 10110h
        mov dword ptr [esp + 20h], edx
        ; Exact immediate encoding: mov edx, dword ptr [10176d00h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        ; Exact immediate encoding: mov ecx, dword ptr [10176cfch]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [esi + 18h]
        mov dword ptr [esp + 24h], ecx
        ; Exact immediate encoding: mov ecx, dword ptr [10176d04h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 2ch], ecx
        push 0
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 2ch], edx
        mov edx, dword ptr [eax]
        push edi
        push ecx
        push eax
        call dword ptr [edx + 0ch]
        test eax, eax
        ; Exact immediate encoding: jl near ptr L_1010383C
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        lea ebp, [esi + 1ch]
        push ebp
        push 10176d18h
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx]
        test eax, eax
        ; Exact immediate encoding: jge near ptr L_1010380A
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        ; Exact immediate encoding: mov dword ptr [ebp], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        xor eax, eax
        pop ebp
        add esp, 24h
        ret 0ch
L_1010377B:
        mov eax, dword ptr [esp + 3ch]
        ; Exact immediate encoding: mov dword ptr [esi + 1ch], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov ecx, dword ptr [10176cb0h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov edx, dword ptr [10176cb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        or eax, 101c0h
        mov dword ptr [esp + 20h], ecx
        ; Exact immediate encoding: mov ecx, dword ptr [10176cbch]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact immediate encoding: mov eax, dword ptr [10176cb8h]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 28h], eax
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [esi + 18h]
        push 0
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [eax]
        push edi
        push ecx
        push eax
        call dword ptr [edx + 0ch]
        test eax, eax
        ; Exact immediate encoding: jge short L_1010380A
        __asm _emit 0x7d
        __asm _emit 0x3a
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 24h
        ret 0ch
L_101037DB:
        mov edx, dword ptr [esp + 3ch]
        ; Exact immediate encoding: mov dword ptr [esi + 1ch], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101c934ch]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        or edx, 101c0h
        mov dword ptr [esp + 10h], edx
        lea edi, [esi + 18h]
        mov ecx, dword ptr [eax]
        push 0
        lea edx, [esp + 10h]
        push edi
        push edx
        push eax
        call dword ptr [ecx + 0ch]
        test eax, eax
        ; Exact immediate encoding: jl short L_1010383C
        __asm _emit 0x7c
        __asm _emit 0x32
L_1010380A:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi + 14h]
        push 0
        push 0
        mov ecx, dword ptr [eax]
        lea ebp, [esi + 10h]
        push 0
        push 0
        push ebp
        push edx
        push 0
        push eax
        call dword ptr [ecx + 2ch]
        test eax, eax
        ; Exact immediate encoding: jl short L_1010383C
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edi, dword ptr [edi]
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [ebp]
        push 0
        mov eax, dword ptr [edi]
        push 0
        push ecx
        push edx
        push edi
        call dword ptr [eax + 4ch]
L_1010383C:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 24h
        ret 0ch
    }
}
