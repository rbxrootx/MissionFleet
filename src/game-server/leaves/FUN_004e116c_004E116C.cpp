// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E116C .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_004e116c_004E116C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 1D: je 0x4e119b
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 0ch], 400h
        ; Exact mapped bytes 74 14: je 0x4e119b
        __asm _emit 0x74
        __asm _emit 0x14
        push 117h
        push 5cb6b4h
        ; Exact mapped bytes E8 6A 38 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e119b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4e1178
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 AF 3D 06 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x4e1254
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 24h]
        and ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x4e11d6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x4e128a
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 07: jne 0x4e11eb
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 D2 1D 01 00: call 0x4f2fbd
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 A9 05 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4e123a
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 6C 81 FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 34h], 28h
        mov dword ptr [ebp - 30h], 1
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 34h]
        push eax
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F A9 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        not ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        and eax, ecx
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 24h], eax
        mov eax, 1
        ; Exact mapped bytes EB 36: jmp 0x4e128a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        and eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x4e1285
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 DD 41 06 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 1034h], 4e135eh
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        or eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 24h], eax
        mov eax, 1
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
