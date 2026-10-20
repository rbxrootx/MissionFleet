// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B470 .. +0x430 bytes.
extern "C" __declspec(naked) void FUN_5886b470() {
    __asm {
        push -1
        push 58985e48h
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
        mov dword ptr [esi], 5899edd8h
        mov ecx, dword ptr [esi + 0ach]
        xor edi, edi
        mov dword ptr [esp + 24h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b4c1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ach], edi
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b4d9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8ch], edi
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b4f1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 90h], edi
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b509
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 98h], edi
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b521
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 9ch], edi
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b539
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a8h], edi
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b551
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b569
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d4h], edi
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b581
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a0h], edi
        mov ecx, dword ptr [esi + 0a4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b599
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a4h], edi
        mov ecx, dword ptr [esi + 198h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b5b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 198h], edi
        mov ecx, dword ptr [esi + 19ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b5c9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 19ch], edi
        mov ecx, dword ptr [esi + 1a0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b5e1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1a0h], edi
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b5f9
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
        ; Exact mapped bytes 74 0E: je 0x5886b611
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10ch], edi
        mov ecx, dword ptr [esi + 110h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b629
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 110h], edi
        mov ecx, dword ptr [esi + 1b4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b641
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1b4h], edi
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b659
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
        ; Exact mapped bytes 74 0E: je 0x5886b671
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0fch], edi
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b689
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
        ; Exact mapped bytes 74 0E: je 0x5886b6a1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 104h], edi
        mov ecx, dword ptr [esi + 1a8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b6b9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1a8h], edi
        mov ecx, dword ptr [esi + 1ach]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b6d1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1ach], edi
        mov ecx, dword ptr [esi + 1b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b6e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1b0h], edi
        lea ebx, [esi + 1b8h]
        lea ebp, [esi + 118h]
        mov dword ptr [esp + 14h], 0bh
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [ebx - 4ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5886b712
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx - 4ch], edi
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5886b724
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 4], edi
        mov ecx, dword ptr [ebp]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5886b736
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x5886b746
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [ebx + 2ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5886b758
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 2ch], edi
        add ebx, 4
        add ebp, 8
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 9B: jne 0x5886b700
        __asm _emit 0x75
        __asm _emit 0x9b
        lea ebx, [esi + 0d8h]
        mov ebp, 8
        mov ecx, dword ptr [ebx - 24h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5886b782
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx - 24h], edi
        mov ecx, dword ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x5886b792
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
        ; Exact mapped bytes 75 D6: jne 0x5886b770
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [esi + 21ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b7b2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 21ch], edi
        mov ecx, dword ptr [esi + 220h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b7ca
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 220h], edi
        lea ebx, [esi + 224h]
        mov ebp, 20h
        mov ecx, dword ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x5886b7e5
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
        ; Exact mapped bytes 75 E8: jne 0x5886b7d5
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 218h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b805
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 218h], edi
        mov ecx, dword ptr [esi + 338h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b81d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 338h], edi
        mov ecx, dword ptr [esi + 328h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b835
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 328h], edi
        mov ecx, dword ptr [esi + 32ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b84d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 32ch], edi
        mov ecx, dword ptr [esi + 330h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b865
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 330h], edi
        mov ecx, dword ptr [esi + 334h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5886b87d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 334h], edi
        mov ecx, esi
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes E8 C4 A6 F4 FF: call 0x587b5f50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
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
        add esp, 14h
        ret
    }
}
