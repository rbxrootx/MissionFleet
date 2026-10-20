// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475DA0 .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_00475da0_00475DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 AF 0A 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 8B 09 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 82 0C 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x475dfe
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x475ef1
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 EA 0B 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x475eeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 20h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 2ch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AD 29 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 38h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 44h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 29 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 29 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 50h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 4C: mov cx, word ptr [eax + 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4c
        ; Exact mapped bytes 66 89 4A 58: mov word ptr [edx + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 48: mov cx, word ptr [eax + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x48
        ; Exact mapped bytes 66 89 4A 54: mov word ptr [edx + 0x54], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 4A: mov cx, word ptr [eax + 0x4a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4a
        ; Exact mapped bytes 66 89 4A 56: mov word ptr [edx + 0x56], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [edx + 5ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [edx + 60h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 70: mov cx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x70
        ; Exact mapped bytes 66 89 8A 88 00 00 00: mov word ptr [edx + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 80h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 84h], ecx
        ; Exact mapped bytes EB 04: jmp 0x475eef
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x475ef1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 28 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
