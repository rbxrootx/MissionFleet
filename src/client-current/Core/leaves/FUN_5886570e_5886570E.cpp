// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886570E .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_5886570e_5886570E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        xor edi, edi
        mov esi, ebx
        movzx eax, word ptr [ebx]
        mov edx, edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3A: je 0x58865767
        __asm _emit 0x74
        __asm _emit 0x3a
        push 3dh
        mov ecx, eax
        pop ebx
        ; Exact mapped bytes 66 3B CB: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcb
        lea eax, [edx + 1]
        mov ecx, esi
        cmove eax, edx
        mov edx, eax
        lea edi, [ecx + 2]
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
        ; Exact mapped bytes 75 F4: jne 0x58865742
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, edi
        sar ecx, 1
        lea esi, [esi + ecx*2]
        add esi, 2
        movzx eax, word ptr [esi]
        mov ecx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 D0: jne 0x58865732
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ebx, dword ptr [ebp + 8]
        xor edi, edi
        lea eax, [edx + 1]
        push 4
        push eax
        ; Exact mapped bytes E8 9E 9A 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0A: jne 0x58865784
        __asm _emit 0x75
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes E8 90 74 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 7F: jmp 0x58865803
        __asm _emit 0xeb
        __asm _emit 0x7f
        movzx eax, word ptr [ebx]
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6A: je 0x588657f9
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, eax
        mov ecx, ebx
        lea edi, [ecx + 2]
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
        ; Exact mapped bytes 75 F4: jne 0x58865796
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, edi
        sar ecx, 1
        push 3dh
        lea eax, [ecx + 1]
        pop ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 38: je 0x588657ec
        __asm _emit 0x74
        __asm _emit 0x38
        push 2
        push eax
        ; Exact mapped bytes E8 54 9A 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 45: je 0x58865809
        __asm _emit 0x74
        __asm _emit 0x45
        push ebx
        push dword ptr [ebp - 0ch]
        push edi
        ; Exact mapped bytes E8 B2 17 00 00: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 4F: jne 0x58865824
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [ebp - 8], eax
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 28 74 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop ecx
        lea ebx, [ebx + eax*2]
        movzx eax, word ptr [ebx]
        mov edx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 98: jne 0x58865791
        __asm _emit 0x75
        __asm _emit 0x98
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 0F 74 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push esi
        ; Exact mapped bytes E8 22 00 00 00: call 0x58865831
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes E8 F9 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 F3 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB E0: jmp 0x58865804
        __asm _emit 0xeb
        __asm _emit 0xe0
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 A9 B7 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
