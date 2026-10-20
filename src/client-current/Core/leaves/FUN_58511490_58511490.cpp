// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58511490 .. +0x251 bytes.
extern "C" __declspec(naked) void FUN_58511490_58511490() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880ddah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BE 34 2A 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3eb0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 74h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58511504
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x585115d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 EF FA 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1D: je 0x58511542
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D3 52 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58511549
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 30h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + eax*4 + 90h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D3 E6 FE FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 7F FA 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1D: je 0x585115b2
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 63 52 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x585115b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx*4 + 98h], eax
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x585114fb
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 3ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B6 3F 2A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 40h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 94 3F 2A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 44h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 72 3F 2A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 48h], edx
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 50 3F 2A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 60h], 0
        push 20h
        ; Exact mapped bytes E8 8D F9 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0F: je 0x58511696
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8F C3 05 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5851169d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 22 00 00: call 0x585139c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
