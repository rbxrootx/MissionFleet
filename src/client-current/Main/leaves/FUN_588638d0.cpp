// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588638D0 .. +0x2AA bytes.
extern "C" __declspec(naked) void FUN_588638d0() {
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
        mov ebx, ecx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [ebx], 5899ec54h
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        lea esi, [ebx + 0d8h]
        lea ebp, [edi + 0bh]
        mov ecx, dword ptr [esi - 2ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58863922
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 2ch], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x58863932
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x58863910
        __asm _emit 0x75
        __asm _emit 0xd6
        lea esi, [ebx + 1d8h]
        mov ebp, 1fh
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58863957
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 7ch], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x58863967
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58863979
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 7ch], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x58863989
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588639a1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588639b9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 174h], edi
        mov ecx, dword ptr [esi + 1f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588639d1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1f0h], edi
        mov ecx, dword ptr [esi + 26ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588639e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 26ch], edi
        mov ecx, dword ptr [esi + 2e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a01
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 2e8h], edi
        mov ecx, dword ptr [esi + 364h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a19
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 364h], edi
        mov ecx, dword ptr [esi - 7ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58863a2b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 7ch], edi
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 0F 85 0E FF FF FF: jne 0x58863945
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 9ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a4f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 9ch], edi
        mov ecx, dword ptr [ebx + 0a0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a67
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0a0h], edi
        mov ecx, dword ptr [ebx + 0a4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a7f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0a4h], edi
        mov ecx, dword ptr [ebx + 5b8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863a97
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 5b8h], edi
        mov ecx, dword ptr [ebx + 5bch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863aaf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 5bch], edi
        mov ecx, dword ptr [ebx + 84h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863ac7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 84h], edi
        mov ecx, dword ptr [ebx + 88h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863adf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 88h], edi
        mov ecx, dword ptr [ebx + 94h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863af7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 94h], edi
        mov ecx, dword ptr [ebx + 90h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863b0f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 90h], edi
        mov ecx, dword ptr [ebx + 8ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863b27
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 8ch], edi
        mov ecx, dword ptr [ebx + 0a8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863b3f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0a8h], edi
        mov ecx, dword ptr [ebx + 98h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x58863b57
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 98h], edi
        mov ecx, ebx
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 EA 23 F5 FF: call 0x587b5f50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0xf5
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
