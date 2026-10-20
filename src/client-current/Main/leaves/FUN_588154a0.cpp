// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588154A0 .. +0x389 bytes.
extern "C" __declspec(naked) void FUN_588154a0() {
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
        mov dword ptr [esi], 5899d7ach
        mov ecx, dword ptr [esi + 174h]
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588154ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 174h], edi
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815501
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815513
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815525
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 70h], edi
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815537
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881554f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815567
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ach], edi
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881557f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d8h], edi
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815597
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588155af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e4h], edi
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588155c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e0h], edi
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588155df
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 9ch], edi
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588155f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a0h], edi
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881560f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0bch], edi
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815627
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c0h], edi
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881563f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c4h], edi
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815657
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c8h], edi
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881566f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0cch], edi
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815687
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d0h], edi
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881569f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d4h], edi
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588156b7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 100h], edi
        mov ecx, dword ptr [esi + 104h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588156cf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 104h], edi
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588156e7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 108h], edi
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588156ff
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10ch], edi
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58815717
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5881572f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0fch], edi
        lea ebx, [esi + 124h]
        mov ebp, 5
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx - 14h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815752
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx - 14h], edi
        mov ecx, dword ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x58815762
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [ebx + 14h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815774
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 14h], edi
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 C4: jne 0x58815740
        __asm _emit 0x75
        __asm _emit 0xc4
        lea ebx, [esi + 15ch]
        mov ebp, 4
        mov ecx, dword ptr [ebx - 10h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58815799
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx - 10h], edi
        mov ecx, dword ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x588157a9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx], edi
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x58815787
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [esi + 16ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588157c9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 16ch], edi
        mov ecx, dword ptr [esi + 170h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588157e1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 170h], edi
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x588157f3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60h], edi
        mov eax, dword ptr [esi + 198h]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x58815806
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 23 76 16 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 FB D3 0E 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd3
        __asm _emit 0x0e
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
