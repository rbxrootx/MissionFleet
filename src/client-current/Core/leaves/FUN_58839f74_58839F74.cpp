// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839F74 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_58839f74_58839F74() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, 62dh
        push 0de3h
        push dword ptr [esi + 18h]
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x58839fa0
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp byte ptr [esi + 24h], al
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5883a02a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes EB 79: jmp 0x5883a019
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes E8 38 A2 FF FF: call 0x588341dd
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58839fad
        __asm _emit 0x75
        __asm _emit 0x04
        push 0ah
        ; Exact mapped bytes EB F0: jmp 0x58839f9d
        __asm _emit 0xeb
        __asm _emit 0xf0
        ; Exact mapped bytes E8 A7 A1 FF FF: call 0x58834159
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x58839fcf
        __asm _emit 0x75
        __asm _emit 0x19
        push 0ch
        push 630h
        push 8b1h
        lea ecx, [esi + 22c4h]
        ; Exact mapped bytes E8 4F 38 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x58839f81
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov ecx, esi
        ; Exact mapped bytes E8 C2 C8 FF FF: call 0x58836898
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58839fdf
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [esi + 25h], al
        ; Exact mapped bytes 74 A2: je 0x58839f81
        __asm _emit 0x74
        __asm _emit 0xa2
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x5883a012
        __asm _emit 0x74
        __asm _emit 0x2a
        movzx eax, byte ptr [esi + 25h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 A4 C8 FF FF: call 0x58836898
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 588f1108h
        ; Exact mapped bytes E8 54 23 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 7B 00 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 0
        push 1f4h
        lea eax, [esi + 22c4h]
        push eax
        ; Exact mapped bytes E8 D6 AA FF FF: call 0x58834afb
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x58839f81
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
