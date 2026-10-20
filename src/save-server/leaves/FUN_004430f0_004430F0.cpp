// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004430F0 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_004430f0_004430F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 10h], 14h
        mov eax, dword ptr [ebp + 8]
        add eax, 7
        and al, 0f8h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 15 B0 50 68 00: mov edx, dword ptr [0x6850b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 2B 15 B4 50 68 00: sub edx, dword ptr [0x6850b4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 72 23: jb 0x44314c
        __asm _emit 0x72
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D B4 50 68 00: mov ecx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 89 15 B4 50 68 00: mov dword ptr [0x6850b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x4432ad
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 37: jb 0x44318b
        __asm _emit 0x72
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 20h]
        xor edx, edx
        div dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 B4 50 68 00: mov eax, dword ptr [0x6850b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D B4 50 68 00: mov ecx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 89 0D B4 50 68 00: mov dword ptr [0x6850b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x4432ad
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 AC 50 68 00: mov eax, dword ptr [0x6850ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        shr eax, 4
        add eax, 7
        and al, 0f8h
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [eax + ecx*2]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 76 2A: jbe 0x4431d1
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 6850b8h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes A1 B4 50 68 00: mov eax, dword ptr [0x6850b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 86 92 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 B4 50 68 00: mov dword ptr [0x6850b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 50 68 00 00: cmp dword ptr [0x6850b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x44327c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 09: jmp 0x443200
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 8
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 80h
        ; Exact mapped bytes 77 58: ja 0x443261
        __asm _emit 0x77
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 6850b8h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 35: je 0x44325f
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 89 15 B4 50 68 00: mov dword ptr [0x6850b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 50 68 00: mov eax, dword ptr [0x6850b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes A3 B0 50 68 00: mov dword ptr [0x6850b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D9 00 00 00: call 0x443330
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 4E: jmp 0x4432ad
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes EB 96: jmp 0x4431f7
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes C7 05 B0 50 68 00 00 00 00 00: mov dword ptr [0x6850b0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 EC 91 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 B4 50 68 00: mov dword ptr [0x6850b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D AC 50 68 00: mov ecx, dword ptr [0x6850ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 89 0D AC 50 68 00: mov dword ptr [0x6850ac], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 89 15 B0 50 68 00: mov dword ptr [0x6850b0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 89 00 00 00: call 0x443330
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 05: jne 0x4432b8
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 6E: jmp 0x443326
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        shr edx, 3
        lea eax, [edx*4 + 6850b8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 09: jmp 0x4432f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x443319
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 0A: jmp 0x443323
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB C8: jmp 0x4432eb
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ret
    }
}
