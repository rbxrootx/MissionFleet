// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053A80 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_10053a80_10053A80() {
    __asm {
        push -1
        push 1016ecdbh
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
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 10h], 0
        mov dword ptr [edi + 984h], 30h
        lea esi, [edi + 774h]
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 6
        push 84h
        idiv ecx
        mov ebp, edx
        ; Exact mapped bytes E8 D0 8C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 14h], ebx
        test ebx, ebx
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 65: je 0x10053b4a
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes A1 AC 57 1C 10: mov eax, dword ptr [0x101c57ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x10053b05
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10053b05
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10053b05
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x10053b07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 57 26: mov dx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 98 08: add dx, 0x898
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x08
        push edx
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 7d0h
        idiv ecx
        mov eax, 258h
        sub eax, edx
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 0fa0h
        idiv ecx
        mov eax, 834h
        mov ecx, ebx
        sub eax, edx
        push eax
        push ebp
        push edi
        push 10h
        ; Exact mapped bytes E8 48 F7 FC FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10053b4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 FE B5 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi - 4]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [esi - 4]
        mov dword ptr [ecx + 78h], 101h
        mov eax, dword ptr [esi - 4]
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 984h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 16 FF FF FF: jl 0x10053ab6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 0a4h]
        mov ecx, dword ptr [esp + 18h]
        add edx, 78h
        mov dword ptr [edi + 70h], 0
        mov dword ptr [edi + 74h], edx
        mov dword ptr [edi + 78h], 320h
        mov dword ptr [edi + 7ch], 10eh
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
