// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB1E0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_100fb1e0_100FB1E0() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 10 00: cmp word ptr [esp + 0x10], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 74 23: je 0x100fb210
        __asm _emit 0x74
        __asm _emit 0x23
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 7E 67: jle 0x100fb25c
        __asm _emit 0x7e
        __asm _emit 0x67
        mov esi, dword ptr [esp + 10h]
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 2F FB FF FF: call 0x100fad30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 37ch
        dec edi
        ; Exact mapped bytes 75 EF: jne 0x100fb1f9
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x100fb22f
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [eax + 48h]
        shr edx, 0ah
        cmp edx, ecx
        ; Exact mapped bytes 74 3D: je 0x100fb262
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x100fb21b
        __asm _emit 0x75
        __asm _emit 0xec
        xor ebx, ebx
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 7E 23: jle 0x100fb25c
        __asm _emit 0x7e
        __asm _emit 0x23
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 10h]
        push esi
        shr eax, 0ch
        and eax, 0fh
        mov ecx, dword ptr [ebx + eax*4 + 83ch]
        ; Exact mapped bytes E8 CD B9 F2 FF: call 0x10026c20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        add esi, 37ch
        dec edi
        ; Exact mapped bytes 75 E1: jne 0x100fb23d
        __asm _emit 0x75
        __asm _emit 0xe1
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB CB: jmp 0x100fb231
        __asm _emit 0xeb
        __asm _emit 0xcb
    }
}
