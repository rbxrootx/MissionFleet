// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58804770 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_58804770() {
    __asm {
        push -1
        push 58982bc6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esi], 5899d3d8h
        mov ecx, dword ptr [esi + 60h]
        xor ebp, ebp
        mov dword ptr [esp + 24h], 1
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588047bf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x588047d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 174h], ebp
        mov ecx, dword ptr [esi + 120h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x588047ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 120h], ebp
        mov ecx, dword ptr [esi + 124h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58804807
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 124h], ebp
        mov ecx, dword ptr [esi + 128h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5880481f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 128h], ebp
        mov eax, dword ptr [esi + 0dch]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x58804838
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 13 84 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0dch], ebp
        mov ecx, dword ptr [esi + 170h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58804850
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 170h], ebp
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58804868
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 174h], ebp
        lea edi, [esi + 150h]
        xor ebx, ebx
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes EB 0E: jmp 0x58804884
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB 08: jmp 0x58804880
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 104h]
        add eax, ebx
        cmp dword ptr [eax], ebp
        ; Exact mapped bytes 74 19: je 0x588048a9
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x588048a0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 104h]
        mov dword ptr [ebx + ecx], ebp
        mov ecx, dword ptr [edi - 20h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588048bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi - 20h], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588048cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebp
        xor edi, edi
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        mov edx, dword ptr [ecx + ebx]
        cmp dword ptr [edx + edi], ebp
        lea eax, [edx + edi]
        ; Exact mapped bytes 74 1C: je 0x588048fd
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x588048f1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 108h]
        mov edx, dword ptr [ecx + ebx]
        mov dword ptr [edi + edx], ebp
        add edi, 4
        cmp edi, 1000h
        ; Exact mapped bytes 7C C8: jl 0x588048d0
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov eax, dword ptr [esi + 108h]
        add eax, ebx
        cmp dword ptr [eax], ebp
        ; Exact mapped bytes 74 14: je 0x58804928
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 0A 85 17 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        add esp, 4
        mov dword ptr [ebx + ecx], ebp
        add dword ptr [esp + 14h], 4
        add ebx, 4
        cmp ebx, 20h
        ; Exact mapped bytes 0F 8C 47 FF FF FF: jl 0x58804880
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 108h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x58804952
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 DD 84 17 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 108h], ebp
        mov eax, dword ptr [esi + 104h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x5880496b
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 E0 82 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 104h], ebp
        mov ecx, dword ptr [esi + 248h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58804983
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
    }
}
