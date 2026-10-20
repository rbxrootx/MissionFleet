// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587439A0 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_587439a0_587439A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 8
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 AB D2 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 72: jle 0x58743a3b
        __asm _emit 0x7e
        __asm _emit 0x72
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 13 5D DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 59: jle 0x58743a3b
        __asm _emit 0x7e
        __asm _emit 0x59
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 53: je 0x58743a3b
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 74 D2 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58743a14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 1C: jge 0x58743a36
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2D DD 07 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x58743a0b
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x58743ad9
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 74h]
        ; Exact mapped bytes E8 21 D2 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 74h]
        ; Exact mapped bytes E8 8B 5C DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0xde
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 10h]
        cmp esi, eax
        ; Exact mapped bytes 7D 6D: jge 0x58743ad9
        __asm _emit 0x7d
        __asm _emit 0x6d
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 74h]
        ; Exact mapped bytes E8 70 5C DE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5c
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 54: jle 0x58743ad9
        __asm _emit 0x7e
        __asm _emit 0x54
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 4E: jne 0x58743ad9
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 74h]
        ; Exact mapped bytes E8 D1 D1 07 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58743ab7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 1C: jge 0x58743ad9
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8A DC 07 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x58743aae
        __asm _emit 0xeb
        __asm _emit 0xd5
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
