// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A5070 .. +0x2EB bytes.
extern "C" __declspec(naked) void FUN_588a5070() {
    __asm {
        push -1
        push 58987ae8h
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
        mov dword ptr [esi], 589a06a0h
        mov ecx, dword ptr [esi + 0b0h]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a50bf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 120h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a50d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 120h], ebx
        mov ecx, dword ptr [esi + 124h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a50ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 124h], ebx
        mov ecx, dword ptr [esi + 128h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5107
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 128h], ebx
        mov ecx, dword ptr [esi + 12ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a511f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12ch], ebx
        mov ecx, dword ptr [esi + 130h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5137
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 130h], ebx
        mov ecx, dword ptr [esi + 158h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a514f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 158h], ebx
        mov ecx, dword ptr [esi + 17ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5167
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 17ch], ebx
        mov ecx, dword ptr [esi + 184h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a517f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 184h], ebx
        mov ecx, dword ptr [esi + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5197
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 194h], ebx
        mov ecx, dword ptr [esi + 198h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a51af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 198h], ebx
        mov ecx, dword ptr [esi + 19ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a51c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 19ch], ebx
        lea edi, [esi + 1a0h]
        mov ebp, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588a51e2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x588a51d2
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5202
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 124h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a521a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 124h], ebx
        lea edi, [esi + 0d4h]
        mov ebp, 8
        mov ecx, dword ptr [edi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588a5237
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588a5247
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a525f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 88h], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 BE: jne 0x588a5225
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [esi + 154h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a527f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 154h], ebx
        mov ecx, dword ptr [esi + 1b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a5297
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1b0h], ebx
        mov ecx, dword ptr [esi + 1b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a52af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1b4h], ebx
        mov ecx, dword ptr [esi + 1b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a52c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1b8h], ebx
        mov ecx, dword ptr [esi + 1a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a52df
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1a8h], ebx
        mov ecx, dword ptr [esi + 1ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a52f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1ach], ebx
        mov ecx, dword ptr [esi + 204h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588a530f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 204h], ebx
        lea edi, [esi + 1bch]
        mov ebp, 8
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588a5330
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x588a5320
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 09 0C F1 FF: call 0x587b5f50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0xff
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
