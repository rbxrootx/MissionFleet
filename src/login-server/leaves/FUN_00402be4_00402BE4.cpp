// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402BE4 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00402be4_00402BE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 108h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x402caa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 3]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 2]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push 0
        push 927c0h
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [edx + 8]
        push ecx
        ; Exact mapped bytes E8 29 BC 01 00: call 0x41e860
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 0ea60h
        div ecx
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push 0
        push 927c0h
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [edx + 8]
        push ecx
        ; Exact mapped bytes E8 98 BB 01 00: call 0x41e7f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        push 448598h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 24h
        push -3
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 6B EC 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 49 EC 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x402cac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
