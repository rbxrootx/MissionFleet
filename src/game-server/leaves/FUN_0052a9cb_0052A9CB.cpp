// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A9CB .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_0052a9cb_0052A9CB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 2D: je 0x52aa10
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a0h]
        sub edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0a0h], edx
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 77 0C: ja 0x52aa10
        __asm _emit 0x77
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 75 05: jne 0x52aa15
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x52aae2
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 14: jne 0x52aa35
        __asm _emit 0x75
        __asm _emit 0x14
        push 192h
        push 5c8fcch
        ; Exact mapped bytes E8 D0 9F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52aa35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x52aa15
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 69: je 0x52aabd
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 75 14: jne 0x52aa7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 196h
        push 5c8fcch
        ; Exact mapped bytes E8 8B 9F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52aa7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x52aa54
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x52aab2
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 85: jmp 0x52aa42
        __asm _emit 0xeb
        __asm _emit 0x85
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 37 29 FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0a4h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
