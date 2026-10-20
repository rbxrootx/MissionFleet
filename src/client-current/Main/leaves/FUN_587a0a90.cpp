// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0A90 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_587a0a90() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 90h], 0
        push edi
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x587a0c00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 20 C1 98 58: mov edi, dword ptr [0x5898c120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 94h]
        add ecx, 3e8h
        cmp ecx, eax
        ; Exact mapped bytes 0F 83 38 01 00 00: jae 0x587a0c00
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 94h], eax
        mov edx, dword ptr [esi + 8ch]
        mov eax, dword ptr [edx]
        mov edi, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 54h]
        mov ebx, eax
        mov eax, dword ptr [esi + 6ch]
        mov eax, dword ptr [eax]
        mov ebp, eax
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 1ch], ebp
        nop
        mov edx, dword ptr [esi + 8ch]
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [esp + 2ch], edx
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x587a0b15
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x587a0b1a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 58 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        cmp ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x587a0c00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x587a0be3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 41 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 18h]
        ; Exact mapped bytes 75 05: jne 0x587a0b3d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 35 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x587a0bea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes 75 05: jne 0x587a0b5a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 18 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        xor dword ptr [ebx + 10h], eax
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x587a0bf1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 C1 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes 75 05: jne 0x587a0b7d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 F5 C0 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 C1 98 58: call dword ptr [0x5898c120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add eax, dword ptr [esp + 14h]
        mov dword ptr [ebp + 10h], eax
        test edi, edi
        ; Exact mapped bytes 75 6A: jne 0x587a0bf8
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes E8 DF C0 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        cmp ebx, dword ptr [edi + 18h]
        ; Exact mapped bytes 75 05: jne 0x587a0b9d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 D5 C0 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x587a0bfc
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes E8 C8 C0 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes 75 05: jne 0x587a0bb6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 BC C0 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        xor dword ptr [ebx + 10h], ecx
        inc dword ptr [esp + 14h]
        lea ecx, [esp + 20h]
        ; Exact mapped bytes E8 17 FE FF FF: call 0x587a09e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 0E FE FF FF: call 0x587a09e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 24h]
        mov edi, dword ptr [esp + 20h]
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x587a0b00
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x587a0b33
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x587a0b50
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x587a0b73
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB 97: jmp 0x587a0b93
        __asm _emit 0xeb
        __asm _emit 0x97
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB AC: jmp 0x587a0bac
        __asm _emit 0xeb
        __asm _emit 0xac
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x587a0c26
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 10: je 0x587a0c24
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587a0c07
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
