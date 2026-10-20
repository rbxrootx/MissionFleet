// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D98CA .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_004d98ca_004D98CA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 333h
        push 6725f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 79 09 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 24 BD 68 00: call dword ptr [0x68bd24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x4d9933
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 15 D0 6C 68 00: mov edx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4d991d
        __asm _emit 0x74
        __asm _emit 0x12
        push 6726b0h
        push 6726e0h
        ; Exact mapped bytes E8 FB 6C FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], ecx
        xor eax, eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x4d99cf
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 35: je 0x4d9971
        __asm _emit 0x74
        __asm _emit 0x35
        push 6726e4h
        push 672720h
        ; Exact mapped bytes E8 CA 6C FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4d996b
        __asm _emit 0x74
        __asm _emit 0x14
        push 345h
        push 6725f0h
        ; Exact mapped bytes E8 DA F3 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d996b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d994e
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes A1 D0 6C 68 00: mov eax, dword ptr [0x686cd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4d998e
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        push 672724h
        ; Exact mapped bytes E8 02 F4 04 00: call 0x528d90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 36ah
        ; Exact mapped bytes 74 30: je 0x4d99ca
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4d99ca
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        push eax
        ; Exact mapped bytes FF 15 28 BD 68 00: call dword ptr [0x68bd28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 8C BE 68 00: call dword ptr [0x68be8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
