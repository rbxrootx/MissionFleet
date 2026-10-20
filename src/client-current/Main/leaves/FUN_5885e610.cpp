// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885E610 .. +0x3E8 bytes.
extern "C" __declspec(naked) void FUN_5885e610() {
    __asm {
        push -1
        push 589856c8h
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
        mov dword ptr [esi], 5899eadch
        mov ecx, dword ptr [esi + 0d4h]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e65f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d4h], ebx
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e677
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], ebx
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e68f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e0h], ebx
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e6a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e8h], ebx
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e6bf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d8h], ebx
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e6d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e4h], ebx
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e6ef
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
        ; Exact mapped bytes 74 0E: je 0x5885e707
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
        ; Exact mapped bytes 74 0E: je 0x5885e71f
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
        ; Exact mapped bytes 74 0E: je 0x5885e737
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f8h], ebx
        mov ecx, dword ptr [esi + 71ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e74f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 71ch], ebx
        mov ecx, dword ptr [esi + 720h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e767
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 720h], ebx
        mov ecx, dword ptr [esi + 724h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e77f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 724h], ebx
        mov ecx, dword ptr [esi + 728h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e797
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 728h], ebx
        mov ecx, dword ptr [esi + 730h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e7af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 730h], ebx
        mov ecx, dword ptr [esi + 734h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e7c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 734h], ebx
        mov ecx, dword ptr [esi + 72ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e7df
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 72ch], ebx
        mov ecx, dword ptr [esi + 704h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e7f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 704h], ebx
        mov ecx, dword ptr [esi + 700h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e80f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 700h], ebx
        mov ecx, dword ptr [esi + 708h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e827
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 708h], ebx
        lea edi, [esi + 70ch]
        mov ebp, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5885e842
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
        ; Exact mapped bytes 75 E8: jne 0x5885e832
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 6e8h]
        mov ebp, 5
        mov ecx, dword ptr [edi - 28h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5885e867
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 28h], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5885e877
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi - 6ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5885e889
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 6ch], ebx
        mov ecx, dword ptr [edi - 3ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5885e89b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 3ch], ebx
        mov ecx, dword ptr [edi - 14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5885e8ad
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 14h], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 A0: jne 0x5885e855
        __asm _emit 0x75
        __asm _emit 0xa0
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e8cd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 84h], ebx
        mov ecx, dword ptr [esi + 73ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e8e5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 73ch], ebx
        mov ecx, dword ptr [esi + 758h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e8fd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 758h], ebx
        mov ecx, dword ptr [esi + 740h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e915
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 740h], ebx
        mov ecx, dword ptr [esi + 754h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e92d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 754h], ebx
        mov ecx, dword ptr [esi + 75ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e945
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 75ch], ebx
        mov ecx, dword ptr [esi + 760h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e95d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 760h], ebx
        mov ecx, dword ptr [esi + 764h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e975
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 764h], ebx
        mov ecx, dword ptr [esi + 74ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e98d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 74ch], ebx
        mov ecx, dword ptr [esi + 750h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e9a5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 750h], ebx
        mov ecx, dword ptr [esi + 744h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e9bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 744h], ebx
        mov ecx, dword ptr [esi + 748h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5885e9d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 748h], ebx
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 5C 94 FF FF: call 0x58857e40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x94
        __asm _emit 0xff
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
