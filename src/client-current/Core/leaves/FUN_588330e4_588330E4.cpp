// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588330E4 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588330e4_588330E4() {
    __asm {
        push esi
        xor esi, esi
        push esi
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, eax
        mov eax, 5a4dh
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 75 5B: jne 0x58833155
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [edx + 34h]
        push ebx
        xor ebx, ebx
        inc ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x58833122
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [edx + 38h], esi
        ; Exact mapped bytes 74 18: je 0x58833122
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 0F B6 05 95 7D 96 58: movzx eax, byte ptr [0x58967d95]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x95
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [edx + 30h], esi
        ; Exact mapped bytes 88 1D 94 7D 96 58: mov byte ptr [0x58967d94], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        cmove eax, ebx
        ; Exact mapped bytes A2 95 7D 96 58: mov byte ptr [0x58967d95], al
        __asm _emit 0xa2
        __asm _emit 0x95
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, dword ptr [edx + 38h]
        test esi, esi
        ; Exact mapped bytes 74 2B: je 0x58833154
        __asm _emit 0x74
        __asm _emit 0x2b
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x58833154
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [edx + 30h]
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x58833154
        __asm _emit 0x74
        __asm _emit 0x20
        cmp ecx, esi
        ; Exact mapped bytes 76 06: jbe 0x5883313e
        __asm _emit 0x76
        __asm _emit 0x06
        mov eax, ecx
        sub eax, esi
        ; Exact mapped bytes EB 04: jmp 0x58833142
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, esi
        sub eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 74 08: je 0x5883314e
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, esi
        ; Exact mapped bytes 75 0A: jne 0x58833154
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp edx, ecx
        ; Exact mapped bytes 75 06: jne 0x58833154
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 88 1D 95 7D 96 58: mov byte ptr [0x58967d95], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x95
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        pop ebx
        pop esi
        ret
    }
}
