// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046EA0 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_10046ea0_10046EA0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        sub esp, 0ch
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 20h]
        push edi
        push eax
        mov eax, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C9 F1 FF FF: call 0x10046090
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov dword ptr [esi], 10175a38h
        mov dword ptr [esi + 38fch], edi
        mov dword ptr [esi + 3900h], edi
        mov dword ptr [esi + 3904h], 0c8h
        mov dword ptr [esi + 3908h], 64h
        mov dword ptr [esi + 390ch], 1
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x10046f16
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10046f16
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x10046f18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a3ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x10046f3b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10046f3b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x10046f3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a40h], eax
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 38f8h], 2
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edx, dword ptr [ecx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x10046f7d
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x10046f7d
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x10046f7d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10046f7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [esp + 8]
        mov dword ptr [esi + 3a3ch], eax
        push edx
        mov dword ptr [esp + 0ch], 1
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes FF 15 34 50 17 10: call dword ptr [0x10175034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 3914h], eax
        mov dword ptr [esi + 3938h], edi
        mov ecx, 40h
        xor eax, eax
        lea edi, [esi + 393ch]
        mov dword ptr [esi + 3918h], 0ffffffceh
        mov dword ptr [esi + 3920h], 32h
        mov dword ptr [esi + 391ch], 0ffffffe7h
        mov dword ptr [esi + 3924h], 19h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 58h], 1
        mov eax, esi
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
