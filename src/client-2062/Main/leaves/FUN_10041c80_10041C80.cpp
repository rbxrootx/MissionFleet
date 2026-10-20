// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041C80 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_10041c80_10041C80() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [ecx + 0e0h]
        mov ecx, dword ptr [ecx + 0e4h]
        cmp esi, ecx
        ; Exact mapped bytes 74 6B: je 0x10041cfd
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [esp + 10h]
        and eax, 0ffh
        mov edx, dword ptr [esi]
        cmp dword ptr [edx + 78h], eax
        ; Exact mapped bytes 74 0C: je 0x10041cae
        __asm _emit 0x74
        __asm _emit 0x0c
        add esi, 4
        cmp esi, ecx
        ; Exact mapped bytes 75 F2: jne 0x10041c9b
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 88h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        cmp ecx, edx
        ; Exact mapped bytes 74 3D: je 0x10041cfd
        __asm _emit 0x74
        __asm _emit 0x3d
        mov bl, byte ptr [esp + 0ch]
        push edi
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 88h]
        mov eax, dword ptr [edx + 4]
        mov edi, dword ptr [edx + 8]
        cmp eax, edi
        ; Exact mapped bytes 74 15: je 0x10041cec
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [eax]
        add eax, 4
        mov byte ptr [edx + 0dh], bl
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 88h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 EB: jne 0x10041cd7
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, dword ptr [esi]
        add ecx, 4
        mov edx, dword ptr [eax + 88h]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 75 C9: jne 0x10041cc5
        __asm _emit 0x75
        __asm _emit 0xc9
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
