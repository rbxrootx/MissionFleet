// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100459F0 .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_100459f0_100459F0() {
    __asm {
        push -1
        push 1016e813h
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
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 28h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E8 E2 E2 FF FF: call 0x10043d10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 20h]
        xor edi, edi
        mov dword ptr [esi], 101759b0h
        mov dword ptr [esi + 243d4h], edx
        mov dword ptr [esi + 243d8h], edi
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 14h], edi
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x10045a67
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10045a67
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x10045a69
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e0h], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, 9
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 0F: jle 0x10045a90
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10045a90
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x10045a92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e4h], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x10045ab5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10045ab5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x10045ab7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e8h], eax
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 243d0h], 2
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        sbb eax, eax
        push ebx
        mov ebx, dword ptr [ecx + 164h]
        add eax, 7
        cmp ebx, eax
        pop ebx
        ; Exact mapped bytes 7E 13: jle 0x10045af9
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x10045af9
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x10045af9
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10045afb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e0h], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 0F: jle 0x10045b1d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10045b1d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x10045b1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a8h
        mov dword ptr [esi + 244e4h], eax
        ; Exact mapped bytes E8 71 6C 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, edi
        mov byte ptr [esp + 14h], 1
        ; Exact mapped bytes 74 10: je 0x10045b4f
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 33 4C FE FF: call 0x1002a780
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10045b51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 164h], eax
        mov dword ptr [esi + 243dch], edi
        mov ecx, 40h
        xor eax, eax
        lea edi, [esi + 243e0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 58h], 1
        mov eax, esi
        pop edi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
