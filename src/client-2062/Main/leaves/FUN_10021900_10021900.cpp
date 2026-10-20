// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021900 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_10021900_10021900() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        push edi
        xor edi, edi
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push edi
        push edi
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8B D0 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esi], 101751f8h
        cmp eax, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 2C: je 0x10021965
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax + 1ch]
        lea edx, [eax + 20h]
        mov dword ptr [esi + 10h], ecx
        lea ecx, [esi + 14h]
        mov ebp, dword ptr [edx]
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], ebp
        mov ebp, dword ptr [esp + 1ch]
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], edx
        cmp eax, edi
        mov dword ptr [esi], 101755b4h
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x100219a4
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
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], ebp
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 168h
        idiv ecx
        mov eax, 0b4h
        sub eax, edx
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 168h
        idiv ecx
        mov eax, 0b4h
        sub eax, edx
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 96h
        pop edi
        idiv ecx
        mov eax, esi
        add edx, 50h
        mov dword ptr [esi + 6ch], edx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
