// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004149B3 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_004149b3_004149B3() {
    __asm {
        mov eax, 43a6fah
        ; Exact mapped bytes E8 4B AC 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 7C 01 00: call 0x42c5ee
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes 66 83 FE 02: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 74 EC: je 0x4149c5
        __asm _emit 0x74
        __asm _emit 0xec
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 4C: jne 0x414a31
        __asm _emit 0x75
        __asm _emit 0x4c
        push 14h
        ; Exact mapped bytes E8 00 8F 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 18h], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x414a04
        __asm _emit 0x74
        __asm _emit 0x0a
        push esi
        ; Exact mapped bytes E8 9A CF FF FF: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x414a06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esi]
        or dword ptr [ebp - 4], 0ffffffffh
        push 1
        mov ecx, esi
        push dword ptr [ebp + 8]
        push dword ptr [edi + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, edi
        ; Exact mapped bytes E8 F9 E8 FF FF: call 0x413319
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 8]
        push 443350h
        push eax
        mov dword ptr [ebp + 8], esi
        ; Exact mapped bytes E8 F6 AB 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FE 63: cmp si, 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x63
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x414af8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ebx, eax
        push dword ptr [eax + 4]
        lea esi, [eax + 4]
        ; Exact mapped bytes FF 15 20 C2 43 00: call dword ptr [0x43c220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push dword ptr [ebx + 8]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 7B 01 00: call 0x42c5e8
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 74 E9: je 0x414a4f
        __asm _emit 0x74
        __asm _emit 0xe9
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push dword ptr [ebp - 14h]
        mov ecx, edi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x414aa9
        __asm _emit 0x74
        __asm _emit 0x2d
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 7B 01 00: call 0x42c5ee
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes 66 83 FE 02: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 74 EC: je 0x414a7c
        __asm _emit 0x74
        __asm _emit 0xec
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 95: jne 0x414a31
        __asm _emit 0x75
        __asm _emit 0x95
        push dword ptr [ebp + 8]
        mov eax, dword ptr [edi]
        mov ecx, edi
        push esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes EB 88: jmp 0x414a31
        __asm _emit 0xeb
        __asm _emit 0x88
        push 14h
        ; Exact mapped bytes E8 3C 8E 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 18h], eax
        push 1
        pop ebx
        test eax, eax
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 0E: je 0x414acc
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp - 14h]
        mov ecx, eax
        ; Exact mapped bytes E8 D2 CE FF FF: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x414ace
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esi]
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        mov ecx, esi
        push dword ptr [ebp + 8]
        push dword ptr [edi + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, edi
        ; Exact mapped bytes E8 32 E8 FF FF: call 0x413319
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 18h]
        push 443350h
        push eax
        mov dword ptr [ebp - 18h], esi
        ; Exact mapped bytes E8 2F AB 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
