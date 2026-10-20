// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017DF0 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_10017df0_10017DF0() {
    __asm {
        push -1
        push 1016d513h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 20h]
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E8 84 6B 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esi], 101751f8h
        test eax, eax
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10017e6d
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], 0
        test eax, eax
        mov dword ptr [esi], 10175500h
        ; Exact mapped bytes 7D 05: jge 0x10017e88
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        mov dword ptr [esi + 58h], eax
        mov ecx, 0e10h
        cdq
        idiv ecx
        push edi
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 58h], edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 190h
        idiv ecx
        add edx, 0c8h
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x10017ebe
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        add eax, 8
        push 101h
        mov ecx, esi
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 90 72 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        push 20h
        ; Exact mapped bytes E8 C3 48 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x48
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 14h], 1
        pop edi
        ; Exact mapped bytes 74 32: je 0x10017f20
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0dh
        ; Exact mapped bytes 7E 17: jle 0x10017f14
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 194h]
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x10017f14
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + 34h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 EE 09 03 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10017f22
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 E2 09 03 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10017f22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 64h], eax
        mov eax, esi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
