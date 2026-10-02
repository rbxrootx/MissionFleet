// Complete Ghidra body ranges for the selected function.
// 8 discontiguous segments; total 361 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903AE0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_00() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr [esi], 589a2538h
        cmp dword ptr [esi + 190h], ebp
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x58903b8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        cmp dword ptr [esi + 160h], ebp
        ; Exact mapped bytes 7E 5A: jle 0x58903b5e
        __asm _emit 0x7e
        __asm _emit 0x5a
        xor edi, edi
        ; Exact mapped bytes EB 08: jmp 0x58903b10
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903B10 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_01() {
    __asm {
        mov eax, dword ptr [esi + 190h]
        mov eax, dword ptr [edi + eax + 10h]
        cmp eax, ebp
        ; Exact mapped bytes 74 13: je 0x58903b31
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 1E 91 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        add esp, 4
        mov dword ptr [edi + ecx + 10h], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903B31 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_02() {
    __asm {
        mov edx, dword ptr [esi + 190h]
        mov eax, dword ptr [edi + edx + 14h]
        cmp eax, ebp
        ; Exact mapped bytes 74 13: je 0x58903b52
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 FD 90 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 190h]
        add esp, 4
        mov dword ptr [edi + eax + 14h], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903B52 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_03() {
    __asm {
        inc ebx
        add edi, 40h
        cmp ebx, dword ptr [esi + 160h]
        ; Exact mapped bytes 7C B2: jl 0x58903b10
        __asm _emit 0x7c
        __asm _emit 0xb2
        mov ecx, dword ptr [esi + 190h]
        pop ebx
        cmp ecx, ebp
        ; Exact mapped bytes 74 21: je 0x58903b8a
        __asm _emit 0x74
        __asm _emit 0x21
        cmp dword ptr [ecx - 4], ebp
        lea eax, [ecx - 4]
        ; Exact mapped bytes 74 0A: je 0x58903b7b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 3
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 09: jmp 0x58903b84
        __asm _emit 0xeb
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 C1 90 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903B84 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_04() {
    __asm {
        mov dword ptr [esi + 190h], ebp
        cmp dword ptr [esi + 18ch], ebp
        ; Exact mapped bytes 74 53: je 0x58903be5
        __asm _emit 0x74
        __asm _emit 0x53
        xor edi, edi
        cmp dword ptr [esi + 164h], ebp
        ; Exact mapped bytes 7E 34: jle 0x58903bd0
        __asm _emit 0x7e
        __asm _emit 0x34
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        cmp dword ptr [ecx + edi*4], ebp
        lea eax, [ecx + edi*4]
        ; Exact mapped bytes 74 19: je 0x58903bc7
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x58903bbe
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 18ch]
        mov dword ptr [ecx + edi*4], ebp
        inc edi
        cmp edi, dword ptr [esi + 164h]
        ; Exact mapped bytes 7C D0: jl 0x58903ba0
        __asm _emit 0x7c
        __asm _emit 0xd0
        mov edx, dword ptr [esi + 18ch]
        push edx
        ; Exact mapped bytes E8 66 90 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 18ch], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903BE5 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_05() {
    __asm {
        cmp dword ptr [esi + 194h], ebp
        ; Exact mapped bytes 74 58: je 0x58903c45
        __asm _emit 0x74
        __asm _emit 0x58
        xor edi, edi
        cmp dword ptr [esi + 170h], ebp
        ; Exact mapped bytes 7E 39: jle 0x58903c30
        __asm _emit 0x7e
        __asm _emit 0x39
        ; Exact mapped bytes EB 07: jmp 0x58903c00
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903C00 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_06() {
    __asm {
        mov eax, dword ptr [esi + 194h]
        cmp dword ptr [eax + edi*4], ebp
        lea eax, [eax + edi*4]
        ; Exact mapped bytes 74 19: je 0x58903c27
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x58903c1e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 194h]
        mov dword ptr [ecx + edi*4], ebp
        inc edi
        cmp edi, dword ptr [esi + 170h]
        ; Exact mapped bytes 7C D0: jl 0x58903c00
        __asm _emit 0x7c
        __asm _emit 0xd0
        mov edx, dword ptr [esi + 194h]
        push edx
        ; Exact mapped bytes E8 06 90 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 194h], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903C45 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58903ae0_segment_07() {
    __asm {
        mov esi, dword ptr [esi + 4]
        cmp esi, -1
        ; Exact mapped bytes 74 07: je 0x58903c54
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        pop esi
        pop ebp
        ret
    }
}
