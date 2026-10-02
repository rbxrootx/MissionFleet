// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 104 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589032E0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_589032e0_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr [ebx + 3ch]
        push edi
        mov edi, eax
        sub edi, dword ptr [ebx + 4]
        mov dword ptr [ebx + 4], eax
        test esi, esi
        ; Exact mapped bytes 74 56: je 0x5890334e
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes EB 06: jmp 0x58903300
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903300 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_589032e0_segment_01() {
    __asm {
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 2000h
        ; Exact mapped bytes 66 85 C1: test cx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 74 34: je 0x58903342
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [esi + 3ch]
        add dword ptr [esi + 4], edi
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x58903342
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes EB 06: jmp 0x58903320
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903320 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_589032e0_segment_02() {
    __asm {
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 2000h
        ; Exact mapped bytes 66 85 C1: test cx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 74 08: je 0x58903336
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        mov ecx, edx
        ; Exact mapped bytes E8 2A FB FF FF: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edx + 38h]
        cmp edx, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 04: je 0x58903342
        __asm _emit 0x74
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x58903320
        __asm _emit 0x75
        __asm _emit 0xde
        mov esi, dword ptr [esi + 38h]
        cmp esi, dword ptr [ebx + 3ch]
        ; Exact mapped bytes 74 04: je 0x5890334e
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 B2: jne 0x58903300
        __asm _emit 0x75
        __asm _emit 0xb2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
