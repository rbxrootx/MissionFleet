// Reconstructed from FUN_10167820 Ghidra pseudocode and disassembly.
// Creates and configures a DirectDraw/Direct3D surface for sprite-frame data.
extern "C" void AllocateObjectThunk();
extern "C" void FUN_1016c784();

extern "C" __declspec(naked) void CreateSurfaceFromSpriteFrame() {
    __asm {
        sub esp, 24h
        push ebx
        mov ebx, dword ptr [esp + 34h]
        push ebp
        mov ebp, dword ptr [esp + 34h]
        mov edx, ebp
        push esi
        imul edx, ebx
        mov esi, ecx
        push edi
        ; Exact immediate encoding: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [esp + 10h]
        mov dword ptr [esi + 14h], edx
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esi + 40h], ebp
        mov dword ptr [esi + 44h], ebx
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], edx
        xor edx, edx
        cmp eax, edx
        ; Exact immediate encoding: mov dword ptr [esp + 10h], 24h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], ecx
        ; Exact immediate encoding: je short L_101678E6
        __asm _emit 0x74
        __asm _emit 0x7b
        cmp word ptr [ecx + 2], 1
        ; Exact immediate encoding: jne short L_101678A6
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [esp + 44h]
        lea edi, [esi + 18h]
        or ecx, 10110h
        push edx
        lea edx, [esp + 14h]
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [eax]
        push edi
        push edx
        push eax
        call dword ptr [ecx + 0ch]
        test eax, eax
        ; Exact immediate encoding: jl short L_1016790F
        __asm _emit 0x7c
        __asm _emit 0x7b
        mov eax, dword ptr [edi]
        lea edx, [esi + 1ch]
        push edx
        push 10176d18h
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx]
        ; Exact immediate encoding: jmp short L_1016790B
        __asm _emit 0xeb
        __asm _emit 0x65
L_101678A6:
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [esi + 1ch], edx
        ; Exact immediate encoding: mov ecx, dword ptr [10176cb0h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        or eax, 10100h
        mov dword ptr [esp + 14h], eax
        ; Exact immediate encoding: mov eax, dword ptr [10176cb4h]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 28h], eax
        ; Exact immediate encoding: mov eax, dword ptr [10176cbch]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 24h], ecx
        ; Exact immediate encoding: mov ecx, dword ptr [10176cb8h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 30h], eax
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 2ch], ecx
        lea edi, [esi + 18h]
        ; Exact immediate encoding: jmp short L_101678FE
        __asm _emit 0xeb
        __asm _emit 0x18
L_101678E6:
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [esi + 1ch], edx
        or eax, 10100h
        lea edi, [esi + 18h]
        mov dword ptr [esp + 14h], eax
        ; Exact immediate encoding: mov eax, dword ptr [101c934ch]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
L_101678FE:
        mov ecx, dword ptr [eax]
        push edx
        lea edx, [esp + 14h]
        push edi
        push edx
        push eax
        call dword ptr [ecx + 0ch]
L_1016790B:
        test eax, eax
        ; Exact immediate encoding: jge short L_1016791B
        __asm _emit 0x7d
        __asm _emit 0x0c
L_1016790F:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 24h
        ret 10h
L_1016791B:
        mov eax, dword ptr [edi]
        lea edx, [esp + 44h]
        ; Exact immediate encoding: mov dword ptr [esp + 44h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [eax]
        push 10176d08h
        push eax
        call dword ptr [ecx]
        test eax, eax
        ; Exact immediate encoding: jge short L_10167944
        __asm _emit 0x7d
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 24h
        ret 10h
L_10167944:
        lea eax, [ebp*8]
        push eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 40h], eax
        test eax, eax
        ; Exact immediate encoding: jne short L_10167966
        __asm _emit 0x75
        __asm _emit 0x0a
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret 10h
L_10167966:
        test ebp, ebp
        ; Exact immediate encoding: jbe short L_10167989
        __asm _emit 0x76
        __asm _emit 0x1f
        mov ecx, ebx
        mov edx, ebp
L_1016796E:
        lea ebp, [ecx - 1]
        add ecx, ebx
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [esi + 2ch]
        mov dword ptr [eax + 4], ebp
        add eax, 8
        dec edx
        ; Exact immediate encoding: jne short L_1016796E
        __asm _emit 0x75
        __asm _emit 0xed
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 40h]
L_10167989:
        mov ecx, dword ptr [esp + 44h]
        push eax
        push ebp
        push ecx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0ch]
        test eax, eax
        mov eax, dword ptr [esp + 44h]
        ; Exact immediate encoding: jge short L_101679C8
        __asm _emit 0x7d
        __asm _emit 0x2b
        test eax, eax
        ; Exact immediate encoding: je short L_101679AF
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx + 8]
        ; Exact immediate encoding: mov dword ptr [esp + 44h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101679AF:
        mov edx, dword ptr [esp + 40h]
        push edx
        call FUN_1016c784
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret 10h
L_101679C8:
        test eax, eax
        ; Exact immediate encoding: je short L_101679DA
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx + 8]
        ; Exact immediate encoding: mov dword ptr [esp + 44h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101679DA:
        mov edx, dword ptr [esp + 40h]
        push edx
        call FUN_1016c784
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi + 14h]
        add esp, 4
        lea ebx, [esi + 10h]
        mov ecx, dword ptr [eax]
        push 0
        push 0
        push 0
        push 0
        push ebx
        push edx
        push 0
        push eax
        call dword ptr [ecx + 2ch]
        test eax, eax
        ; Exact immediate encoding: jl short L_10167A18
        __asm _emit 0x7c
        __asm _emit 0x13
        mov edi, dword ptr [edi]
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [ebx]
        push 0
        mov eax, dword ptr [edi]
        push 0
        push ecx
        push edx
        push edi
        call dword ptr [eax + 4ch]
L_10167A18:
        pop edi
        pop esi
        pop ebp
        ; Exact immediate encoding: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 24h
        ret 10h
    }
}
