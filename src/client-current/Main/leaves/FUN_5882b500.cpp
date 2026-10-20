// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882B500 .. +0x462 bytes.
extern "C" __declspec(naked) void FUN_5882b500() {
    __asm {
        push -1
        push 58987f48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi], 5899def8h
        mov ecx, dword ptr [esi + 64h]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b549
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 64h], ebx
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b55b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 68h], ebx
        lea edi, [esi + 80h]
        mov ebp, 5
        mov ecx, dword ptr [edi - 14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b578
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 14h], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5882b588
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi + 0a4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b5a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0a4h], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 BE: jne 0x5882b566
        __asm _emit 0x75
        __asm _emit 0xbe
        lea edi, [esi + 0a0h]
        mov ebp, 3
        mov ecx, dword ptr [edi - 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b5c5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 0ch], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5882b5d5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi + 24h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b5e7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 24h], ebx
        mov ecx, dword ptr [edi + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b5ff
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 98h], ebx
        mov ecx, dword ptr [edi + 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b611
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0ch], ebx
        mov ecx, dword ptr [edi + 18h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b623
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 18h], ebx
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b635
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 30h], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 0F 85 72 FF FF FF: jne 0x5882b5b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 178h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5882b65a
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 D5 17 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 178h], ebx
        mov eax, dword ptr [esi + 17ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5882b673
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 BC 17 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 17ch], ebx
        mov eax, dword ptr [esi + 180h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5882b68c
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 A3 17 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 180h], ebx
        mov eax, dword ptr [esi + 184h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5882b6a5
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 8A 17 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 184h], ebx
        mov ecx, dword ptr [esi + 104h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b6bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 104h], ebx
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b6d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 108h], ebx
        mov ecx, dword ptr [esi + 114h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b6ed
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 114h], ebx
        mov ecx, dword ptr [esi + 118h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b705
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 118h], ebx
        mov ecx, dword ptr [esi + 11ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b71d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 11ch], ebx
        mov ecx, dword ptr [esi + 120h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b735
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 120h], ebx
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b74d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10ch], ebx
        mov ecx, dword ptr [esi + 110h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b765
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 110h], ebx
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b77d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 100h], ebx
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b795
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e8h], ebx
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b7ad
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ech], ebx
        mov ecx, dword ptr [esi + 0f0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b7c5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f0h], ebx
        mov ecx, dword ptr [esi + 0f4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b7dd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f4h], ebx
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b7f5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f8h], ebx
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b80d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0fch], ebx
        mov ecx, dword ptr [esi + 144h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b825
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 144h], ebx
        mov ecx, dword ptr [esi + 148h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b83d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 148h], ebx
        mov ecx, dword ptr [esi + 14ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b855
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 14ch], ebx
        mov ecx, dword ptr [esi + 150h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b86d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 150h], ebx
        mov ecx, dword ptr [esi + 154h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b885
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 154h], ebx
        mov ecx, dword ptr [esi + 158h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b89d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 158h], ebx
        mov ecx, dword ptr [esi + 15ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b8b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 15ch], ebx
        mov ecx, dword ptr [esi + 160h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b8cd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 160h], ebx
        mov ecx, dword ptr [esi + 164h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b8e5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 164h], ebx
        mov ecx, dword ptr [esi + 168h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b8fd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 168h], ebx
        mov ecx, dword ptr [esi + 16ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b915
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 16ch], ebx
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5882b927
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60h], ebx
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5882b93f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 174h], ebx
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 C2 72 0D 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
