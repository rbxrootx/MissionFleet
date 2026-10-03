// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3049 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A0450 .. +0xBE9 bytes.
extern "C" __declspec(naked) void FUN_588a0450_segment_00() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        lea eax, [ebx + 150h]
        push edi
        xor ebp, ebp
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [eax]
        cmp eax, 41h
        ; Exact mapped bytes 72 05: jb 0x588a0471
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 5ah
        ; Exact mapped bytes 76 39: jbe 0x588a04aa
        __asm _emit 0x76
        __asm _emit 0x39
        cmp eax, 10h
        ; Exact mapped bytes 74 34: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x34
        cmp eax, 11h
        ; Exact mapped bytes 74 2F: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp eax, 20h
        ; Exact mapped bytes 74 2A: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 0dch
        ; Exact mapped bytes 74 23: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x23
        cmp eax, 0bah
        ; Exact mapped bytes 74 1C: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 0deh
        ; Exact mapped bytes 74 15: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 0bch
        ; Exact mapped bytes 74 0E: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 0beh
        ; Exact mapped bytes 74 07: je 0x588a04aa
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 0bfh
        ; Exact mapped bytes 75 28: jne 0x588a04d2
        __asm _emit 0x75
        __asm _emit 0x28
        xor esi, esi
        lea edi, [ebx + 150h]
        cmp ebp, esi
        ; Exact mapped bytes 74 11: je 0x588a04c7
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [edi]
        ; Exact mapped bytes 75 07: jne 0x588a04c7
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 A9 E4 FF FF: call 0x5889e970
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        inc esi
        add edi, 4
        cmp esi, 1fh
        ; Exact mapped bytes 7C E2: jl 0x588a04b2
        __asm _emit 0x7c
        __asm _emit 0xe2
        ; Exact mapped bytes EB 07: jmp 0x588a04d9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 97 E4 FF FF: call 0x5889e970
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        inc ebp
        add eax, 4
        cmp ebp, 1fh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 77 FF FF FF: jl 0x588a0465
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 10h]
        push edx
        push 0f003fh
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 10 C0 98 58: mov edi, dword ptr [0x5898c010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588a053a
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [esp + 18h]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 5898c922h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 35 0C C0 98 58: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 4
        lea ebp, [ebx + 150h]
        push ebp
        push 4
        push 0
        push 589a05d4h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a059a
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a05d4h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a05d4h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 154h]
        push ebp
        push 4
        push 0
        push 589a05c0h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a05f4
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a05c0h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a05c0h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 158h]
        push ebp
        push 4
        push 0
        push 589a05b0h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a064e
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a05b0h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a05b0h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 15ch]
        push ebp
        push 4
        push 0
        push 589a059ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a06a8
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a059ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a059ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 160h]
        push ebp
        push 4
        push 0
        push 589a058ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0702
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a058ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a058ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 164h]
        push ebp
        push 4
        push 0
        push 589a0578h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a075c
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0578h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0578h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 168h]
        push ebp
        push 4
        push 0
        push 589a0560h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a07b6
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0560h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0560h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 16ch]
        push ebp
        push 4
        push 0
        push 589a0554h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0810
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0554h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0554h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 170h]
        push ebp
        push 4
        push 0
        push 589a054ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a086a
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a054ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a054ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 174h]
        push ebp
        push 4
        push 0
        push 589a0538h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a08c4
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0538h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0538h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 178h]
        push ebp
        push 4
        push 0
        push 589a0524h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a091e
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0524h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0524h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 17ch]
        push ebp
        push 4
        push 0
        push 589a0510h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0978
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0510h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0510h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 180h]
        push ebp
        push 4
        push 0
        push 589a0500h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a09d2
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0500h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0500h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 184h]
        push ebp
        push 4
        push 0
        push 589a04f0h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0a2c
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a04f0h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a04f0h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 188h]
        push ebp
        push 4
        push 0
        push 589a04e4h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0a86
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a04e4h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a04e4h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 18ch]
        push ebp
        push 4
        push 0
        push 589a04d4h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0ae0
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a04d4h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a04d4h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 190h]
        push ebp
        push 4
        push 0
        push 589a04c4h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0b3a
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a04c4h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a04c4h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 194h]
        push ebp
        push 4
        push 0
        push 589a04b0h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0b94
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a04b0h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a04b0h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 198h]
        push ebp
        push 4
        push 0
        push 589a049ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0bee
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a049ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a049ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 19ch]
        push ebp
        push 4
        push 0
        push 589a048ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0c48
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a048ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a048ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1a0h]
        push ebp
        push 4
        push 0
        push 589a047ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0ca2
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a047ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a047ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1a4h]
        push ebp
        push 4
        push 0
        push 589a046ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0cfc
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a046ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a046ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1a8h]
        push ebp
        push 4
        push 0
        push 589a045ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0d56
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a045ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a045ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1ach]
        push ebp
        push 4
        push 0
        push 589a0454h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0db0
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0454h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0454h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1b0h]
        push ebp
        push 4
        push 0
        push 589a044ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0e0a
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a044ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a044ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1b4h]
        push ebp
        push 4
        push 0
        push 589a043ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0e64
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a043ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a043ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1b8h]
        push ebp
        push 4
        push 0
        push 589a0428h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0ebe
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0428h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0428h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1bch]
        push ebp
        push 4
        push 0
        push 589a041ch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0f18
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a041ch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a041ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1c4h]
        push ebp
        push 4
        push 0
        push 589a0410h
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0f72
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a0410h
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a0410h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        lea ebp, [ebx + 1c8h]
        push ebp
        push 4
        push 0
        push 589a03fch
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a0fcc
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a03fch
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push 0
        push 589a03fch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        push 4
        add ebx, 1c0h
        push ebx
        push 4
        push 0
        push 589a03ech
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588a1026
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 18h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 589a03ech
        push 0
        push 589a05e4h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebx
        push 4
        push 0
        push 589a03ech
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 10h]
        push edx
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
