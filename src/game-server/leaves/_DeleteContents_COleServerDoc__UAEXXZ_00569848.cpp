// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569848 .. +0xD1 bytes.
extern "C" __declspec(naked) void _DeleteContents_COleServerDoc__UAEXXZ_00569848() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE 76 FE FF: call 0x550f57
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB 76 FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x569889
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 2C FE FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x56986a
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B 76 FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 36: je 0x5698e5
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 2B: je 0x5698e3
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x5698dc
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5698e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB B5: jmp 0x56989a
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F 76 FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x569915
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 26 FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x5698f6
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov esp, ebp
        pop ebp
        ret
    }
}
