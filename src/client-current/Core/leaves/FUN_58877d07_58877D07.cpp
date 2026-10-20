// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877D07 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_58877d07_58877D07() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 79 0E FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes E8 72 0E FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov edi, dword ptr [eax + 34ch]
        ; Exact mapped bytes E8 9E 00 00 00: call 0x58877dd8
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 60h], 0
        mov esi, eax
        pop ecx
        push 78h
        lea eax, [ebp - 0f4h]
        mov ecx, 1001h
        push eax
        push 3
        pop eax
        cmovne ecx, eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58877d66
        __asm _emit 0x75
        __asm _emit 0x05
        and dword ptr [edi], eax
        inc eax
        ; Exact mapped bytes EB 61: jmp 0x58877dc7
        __asm _emit 0xeb
        __asm _emit 0x61
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 3B BF FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebx + 60h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58877d87
        __asm _emit 0x75
        __asm _emit 0x09
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x58877db4
        __asm _emit 0x75
        __asm _emit 0x32
        push edi
        push 1
        ; Exact mapped bytes EB 20: jmp 0x58877da7
        __asm _emit 0xeb
        __asm _emit 0x20
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x58877dbd
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebx + 5ch], ecx
        ; Exact mapped bytes 74 2D: je 0x58877dbd
        __asm _emit 0x74
        __asm _emit 0x2d
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 11 BF FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x58877dbd
        __asm _emit 0x75
        __asm _emit 0x18
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 85 01 00 00: call 0x58877f32
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58877dbd
        __asm _emit 0x74
        __asm _emit 0x09
        or dword ptr [edi], 4
        mov dword ptr [edi + 4], esi
        mov dword ptr [edi + 8], esi
        mov eax, dword ptr [edi]
        shr eax, 2
        not eax
        and eax, 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 7C 92 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x92
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
