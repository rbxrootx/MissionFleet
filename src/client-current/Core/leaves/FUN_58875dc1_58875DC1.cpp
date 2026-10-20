// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875DC1 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58875dc1_58875DC1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 48 FB FE FF: call 0x58865917
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 60: je 0x58875e35
        __asm _emit 0x74
        __asm _emit 0x60
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5A: je 0x58875e35
        __asm _emit 0x74
        __asm _emit 0x5a
        mov esi, dword ptr [ebp + 8]
        xor edx, edx
        mov dword ptr [ebp - 4], edx
        lea ecx, [esi + 2]
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        add esi, 2
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 F5: jne 0x58875de6
        __asm _emit 0x75
        __asm _emit 0xf5
        sub esi, ecx
        sar esi, 1
        ; Exact mapped bytes EB 38: jmp 0x58875e2f
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, edx
        lea eax, [ecx + 2]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 F4: jne 0x58875dff
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, dword ptr [ebp - 8]
        sar ecx, 1
        cmp ecx, esi
        ; Exact mapped bytes 76 18: jbe 0x58875e2c
        __asm _emit 0x76
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 3C 72 3D: cmp word ptr [edx + esi*2], 0x3d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x72
        __asm _emit 0x3d
        ; Exact mapped bytes 75 11: jne 0x58875e2c
        __asm _emit 0x75
        __asm _emit 0x11
        push esi
        push dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EB 5C 00 00: call 0x5887bb10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58875e3b
        __asm _emit 0x74
        __asm _emit 0x0f
        add edi, 4
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x58875df7
        __asm _emit 0x75
        __asm _emit 0xc2
        xor eax, eax
        pop edi
        pop esi
        leave
        ret
        mov eax, dword ptr [edi]
        lea eax, [eax + esi*2]
        add eax, 2
        ; Exact mapped bytes EB F2: jmp 0x58875e37
        __asm _emit 0xeb
        __asm _emit 0xf2
    }
}
