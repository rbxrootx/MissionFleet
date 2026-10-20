// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F76B .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_0044f76b_0044F76B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x44f810
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 69: je 0x44f803
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 24h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44f7cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 399h
        push 67702ch
        ; Exact mapped bytes E8 7A 95 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44f7cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44f7b1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x44f7f8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 0B: je 0x44f7f8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes E8 70 63 08 00: call 0x4d5b68
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 54 02 08 00: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [edx + 38h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
