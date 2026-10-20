// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819A00 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58819a00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 74h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 3D: je 0x58819a4c
        __asm _emit 0x74
        __asm _emit 0x3d
        push ebx
        mov ecx, eax
        push edi
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 A5 E7 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov ebx, eax
        ; Exact mapped bytes E8 4B E7 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        sub ebx, eax
        imul ebx, edi
        lea edx, [ebx + ecx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        push edx
        ; Exact mapped bytes E8 23 99 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        pop edi
        pop ebx
        ; Exact mapped bytes EB 0F: jmp 0x58819a5b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 9ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 74h]
        cmp dword ptr [edx + 88h], 0
        pop esi
        ; Exact mapped bytes 74 07: je 0x58819a6f
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, edx
        ; Exact mapped bytes E9 51 E7 0E 00: jmp 0x589081c0
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        ret
    }
}
