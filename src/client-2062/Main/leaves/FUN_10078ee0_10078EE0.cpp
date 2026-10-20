// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10078EE0 .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_10078ee0_10078EE0() {
    __asm {
        push -1
        push 1016f989h
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 8B 5A 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 10175d10h
        ; Exact mapped bytes E8 62 38 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x38
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x10078fc3
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 38h
        ; Exact mapped bytes 7E 12: jle 0x10078f70
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10078f70
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0e0h]
        ; Exact mapped bytes EB 02: jmp 0x10078f72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2A 5A 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10078fbd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x10078fc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes E8 C9 37 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 49: je 0x10079030
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x10079008
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10079008
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 240h]
        ; Exact mapped bytes EB 02: jmp 0x1007900a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 1eh]
        push 40h
        push ecx
        lea ecx, [ebp + 0c4h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 92 E2 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10079032
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes E8 5C 37 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 32: je 0x10079086
        __asm _emit 0x74
        __asm _emit 0x32
        push 646464h
        push 0
        lea edx, [ebx + 31h]
        push 0ffffffh
        lea ecx, [ebp + 0bch]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 21h
        push ecx
        add ebp, 3ah
        push ebx
        push ebp
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CC F8 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10079088
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [eax + 90h], 0bh
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5f0h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
