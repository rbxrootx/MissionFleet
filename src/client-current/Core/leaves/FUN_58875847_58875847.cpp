// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875847 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58875847_58875847() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D 9C 98 96 58: mov edi, dword ptr [0x5896989c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, edi
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5887588a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ebx, dword ptr [ebp + 0ch]
        push ebx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 62 00 00: call 0x5887bb10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58875881
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        movzx eax, word ptr [eax + ebx*2]
        cmp eax, 3dh
        ; Exact mapped bytes 74 1C: je 0x58875898
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x58875898
        __asm _emit 0x74
        __asm _emit 0x17
        add esi, 4
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x58875860
        __asm _emit 0x75
        __asm _emit 0xd6
        sub esi, edi
        sar esi, 2
        neg esi
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret
        sub esi, edi
        sar esi, 2
        ; Exact mapped bytes EB F2: jmp 0x58875891
        __asm _emit 0xeb
        __asm _emit 0xf2
    }
}
