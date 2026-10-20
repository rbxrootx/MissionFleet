// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042D30 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_10042d30_10042D30() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push ebx
        mov edx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        xor ebx, ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push edi
        push ebx
        push ebx
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 5C BC 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        cmp eax, ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 2A: je 0x10042d92
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [eax + 18h]
        push ebp
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 1ch]
        lea ecx, [eax + 20h]
        mov dword ptr [esi + 10h], edx
        lea edx, [esi + 14h]
        mov ebp, dword ptr [ecx]
        mov dword ptr [edx], ebp
        mov ebp, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], ebp
        mov ebp, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], ebp
        pop ebp
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [esi], 10175928h
        cmp eax, ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10042dc8
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes 66 89 7E 26: mov word ptr [esi + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x26
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 88h], ebx
        mov ecx, 13h
        xor eax, eax
        lea edi, [esi + 98h]
        mov dword ptr [esi + 150h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 104h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f0h], ebx
        mov dword ptr [esi + 0fch], ebx
        mov dword ptr [esi + 100h], ebx
        mov dword ptr [esi + 108h], ebx
        mov dword ptr [esi + 10ch], ebx
        mov dword ptr [esi + 110h], ebx
        mov eax, 1
        mov dword ptr [esi + 114h], ebx
        mov dword ptr [esi + 118h], ebx
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 148h], eax
        mov dword ptr [esi + 14ch], eax
        mov dword ptr [esi + 170h], eax
        mov dword ptr [esi + 174h], eax
        mov dword ptr [esi + 11ch], ebx
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 0ech], ebx
        mov dword ptr [esi + 124h], ebx
        mov dword ptr [esi + 128h], ebx
        mov dword ptr [esi + 130h], ebx
        mov dword ptr [esi + 12ch], ebx
        mov dword ptr [esi + 138h], ebx
        mov dword ptr [esi + 13ch], 0ah
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], 12ch
        mov dword ptr [esi + 120h], ebx
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 140h], ebx
        mov dword ptr [esi + 144h], ebx
        mov dword ptr [esi + 68h], 0ffffffffh
        mov dword ptr [esi + 154h], ebx
        mov dword ptr [esi + 158h], ebx
        mov dword ptr [esi + 160h], ebx
        mov dword ptr [esi + 168h], ebx
        mov dword ptr [esi + 16ch], ebx
        mov dword ptr [esi + 15ch], ebx
        mov dword ptr [esi + 164h], ebx
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 178h], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
