// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057916A .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_0057916a_0057916A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 9A 00 00 00: ja 0x579220
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D 4C 92 57 00: jmp dword ptr [ecx*4 + 0x57924c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0x57
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 21: je 0x5791ba
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 00 00 00: call 0x57925c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x579243
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 12: je 0x5791da
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes EB 67: jmp 0x579243
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 12: je 0x5791f7
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        ; Exact mapped bytes EB 4A: jmp 0x579243
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x57921e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes EB 23: jmp 0x579243
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x57923d
        __asm _emit 0x74
        __asm _emit 0x14
        push 94h
        push 67d108h
        ; Exact mapped bytes E8 08 FB FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57923d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x579220
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
