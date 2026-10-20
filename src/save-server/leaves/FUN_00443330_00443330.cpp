// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443330 .. +0x1AA bytes.
extern "C" __declspec(naked) void FUN_00443330_00443330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
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
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 72 20: jb 0x443379
        __asm _emit 0x72
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D B4 50 68 00: mov ecx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 B4 50 68 00: mov dword ptr [0x6850b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x4434d6
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 39: jb 0x4433ba
        __asm _emit 0x72
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D B4 50 68 00: mov ecx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 B4 50 68 00: mov dword ptr [0x6850b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x4434d6
        __asm _emit 0xe9
        __asm _emit 0x1c
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
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*2]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 76 2A: jbe 0x443400
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 6850b8h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 B4 50 68 00: mov edx, dword ptr [0x6850b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes A1 B4 50 68 00: mov eax, dword ptr [0x6850b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 57 90 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x90
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
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x4434a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 09: jmp 0x44342f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 77 55: ja 0x44348d
        __asm _emit 0x77
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 6850b8h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x44348b
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 1ch]
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
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 B0 50 68 00: mov dword ptr [0x6850b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AA FE FF FF: call 0x443330
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 4B: jmp 0x4434d6
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes EB 99: jmp 0x443426
        __asm _emit 0xeb
        __asm _emit 0x99
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
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C0 8F 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8f
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
        add ecx, dword ptr [ebp - 10h]
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
        add edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 B0 50 68 00: mov dword ptr [0x6850b0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5D FE FF FF: call 0x443330
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
