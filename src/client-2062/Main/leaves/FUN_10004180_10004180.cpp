// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004180 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_10004180_10004180() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        mov ebx, ecx
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x10004261
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebx + 0ch]
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x10004256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 21 A4 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x10004256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0ch]
        xor ebp, ebp
        mov ecx, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        and edx, 7c00h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 86 81 00 00 00: jbe 0x10004256
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 9cch
        mov ecx, dword ptr [esi + eax + 328h]
        test ecx, ecx
        ; Exact mapped bytes 74 56: je 0x1000423b
        __asm _emit 0x74
        __asm _emit 0x56
        test ecx, ecx
        ; Exact mapped bytes 74 52: je 0x1000423b
        __asm _emit 0x74
        __asm _emit 0x52
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 47: jne 0x1000423b
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [esi + eax - 7b0h]
        push 0fa0h
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 61 AF 0E 00: call 0x100ef170
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x1000423b
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebx + 0ch]
        push edi
        push edx
        mov ecx, dword ptr [eax + 21a4ch]
        ; Exact mapped bytes E8 18 FE 01 00: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 0E: je 0x1000423b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x1000426b
        __asm _emit 0x75
        __asm _emit 0x34
        mov dword ptr [esp + 10h], edi
        mov eax, dword ptr [ebx + 0ch]
        inc ebp
        add esi, 4
        mov ecx, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        cmp ebp, edx
        ; Exact mapped bytes 7C 84: jl 0x100041da
        __asm _emit 0x7c
        __asm _emit 0x84
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x1000419f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
