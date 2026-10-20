// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F6910 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_585f6910_585F6910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 55 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x55
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 71: je 0x585f699f
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 66 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 4]
        cmp eax, edx
        ; Exact mapped bytes 75 51: jne 0x585f6992
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 5]
        imul edx, ecx, 64h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 5B 17 00: call 0x5876c4a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 66 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 00 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 66 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1D: jne 0x585f6992
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 5]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CF C8 10 00: call 0x58703260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 57 E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x57
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 89: jmp 0x585f6928
        __asm _emit 0xeb
        __asm _emit 0x89
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
