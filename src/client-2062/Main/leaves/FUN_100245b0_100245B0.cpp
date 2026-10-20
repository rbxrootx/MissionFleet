// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100245B0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_100245b0_100245B0() {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ecx + 60h]
        push esi
        cmp ebx, ecx
        push edi
        ; Exact mapped bytes 74 7E: je 0x1002463b
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [esp + 10h]
        xor eax, eax
        mov al, byte ptr [edx + 330h]
        mov edx, dword ptr [ebx]
        cmp dword ptr [edx + 4], eax
        ; Exact mapped bytes 74 0D: je 0x100245dd
        __asm _emit 0x74
        __asm _emit 0x0d
        add ebx, 4
        cmp ebx, ecx
        ; Exact mapped bytes 75 F2: jne 0x100245c9
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov edi, dword ptr [eax + 10h]
        mov ecx, dword ptr [eax + 14h]
        cmp edi, ecx
        ; Exact mapped bytes 74 52: je 0x1002463b
        __asm _emit 0x74
        __asm _emit 0x52
        push ebp
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp esi, ecx
        ; Exact mapped bytes 74 34: je 0x10024630
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [eax + 0f10h]
        mov eax, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [edx + 0ch]
        push eax
        mov edx, dword ptr [ecx + 0f10h]
        mov ecx, dword ptr [edx + 6ch]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x10024626
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 EA 14 FE FF: call 0x10005b10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        add esi, 4
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 75 CC: jne 0x100245fc
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebx]
        add edi, 4
        cmp edi, dword ptr [ecx + 14h]
        ; Exact mapped bytes 75 B6: jne 0x100245f0
        __asm _emit 0x75
        __asm _emit 0xb6
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
