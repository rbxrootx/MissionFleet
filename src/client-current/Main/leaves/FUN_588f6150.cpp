// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6150 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_588f6150() {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        cmp ebp, dword ptr [ecx + 4]
        mov dword ptr [esp + 4], ecx
        ; Exact mapped bytes 7D 7B: jge 0x588f61da
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 72: jge 0x588f61da
        __asm _emit 0x7d
        __asm _emit 0x72
        test ebp, ebp
        ; Exact mapped bytes 74 49: je 0x588f61b5
        __asm _emit 0x74
        __asm _emit 0x49
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588f61b5
        __asm _emit 0x74
        __asm _emit 0x45
        push ebx
        push edi
        mov edi, ebp
        imul edi, edi, 6900h
        xor ebx, ebx
        add edi, 589cfd14h
        push esi
        mov esi, dword ptr [edi - 4]
        xor eax, eax
        test esi, esi
        ; Exact mapped bytes 76 18: jbe 0x588f61a4
        __asm _emit 0x76
        __asm _emit 0x18
        mov edx, edi
        mov edi, edi
        movzx ecx, word ptr [edx]
        shr ecx, 6
        cmp ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 74 1E: je 0x588f61ba
        __asm _emit 0x74
        __asm _emit 0x1e
        inc eax
        add edx, 2
        cmp eax, esi
        ; Exact mapped bytes 72 EC: jb 0x588f6190
        __asm _emit 0x72
        __asm _emit 0xec
        inc ebx
        add edi, 0e0h
        cmp ebx, 78h
        ; Exact mapped bytes 7C D3: jl 0x588f6183
        __asm _emit 0x7c
        __asm _emit 0xd3
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push ebx
        push ebp
        ; Exact mapped bytes E8 8B FF FF FF: call 0x588f6150
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 04: je 0x588f61ce
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 E4: jne 0x588f61b2
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [esp + 1ch]
        pop esi
        pop edi
        pop ebx
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
