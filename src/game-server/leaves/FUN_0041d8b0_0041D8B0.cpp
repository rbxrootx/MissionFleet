// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D8B0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_0041d8b0_0041D8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 F9 12 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 D5 11 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CC 14 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41d914
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x41da3e
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 34 14 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x41da3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 8A 00 00 00: mov ax, word ptr [edx + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 7E 0C: jle 0x41d949
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 81 8A 00 00 00 05 00: mov word ptr [ecx + 0x8a], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x41d962
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 8A 00 00 00: mov cx, word ptr [eax + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7D 78: jge 0x41d9eb
        __asm _emit 0x7d
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 90h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 24: jne 0x41d9a9
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*8 + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 8ch], 0
        ; Exact mapped bytes EB 3D: jmp 0x41d9e6
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*8 + 90h]
        mov dword ptr [ecx + eax*8 + 90h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*8 + 8ch]
        mov dword ptr [ecx + eax*8 + 8ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x41d959
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 90h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*8 + 8ch], 0
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 8A 00 00 00: mov ax, word ptr [edx + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x41da35
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 8A 00 00 00: mov dx, word ptr [ecx + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 8A 00 00 00: mov word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41da3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 97 AD 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xad
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
