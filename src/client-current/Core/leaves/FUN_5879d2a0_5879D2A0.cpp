// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879D2A0 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_5879d2a0_5879D2A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891ecdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        cmp dword ptr [esi + 48h], 0
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 5ch], edi
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x5879d430
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 BB D4 FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5879d3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [ebp - 40h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 16 D1 FF FF: call 0x5879a410
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 588ade80h
        push 0
        mov ecx, eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 DF 60 D6 FF: call 0x585033f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x60
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 7E 40 10: movq xmm0, qword ptr [eax + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F D6 45 E8: movq qword ptr [ebp - 0x18], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xe8
        mov dword ptr [eax + 10h], 0
        mov dword ptr [eax + 14h], 0fh
        mov byte ptr [eax], 0
        cmp dword ptr [ebp - 14h], 0fh
        lea eax, [ebp - 28h]
        push dword ptr [ebp - 18h]
        cmova eax, dword ptr [ebp - 28h]
        push eax
        push dword ptr [esi + 4]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 ED DC FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add esp, 0ch
        mov byte ptr [ebp - 4], 0
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879d39e
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879d394
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 B9 00 00 00: ja 0x5879d44d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 99 3C 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 40h]
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0fh
        mov byte ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 71 C9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc9
        __asm _emit 0xd0
        __asm _emit 0xff
        push 2
        mov ecx, edi
        ; Exact mapped bytes E8 D8 D3 FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 64: je 0x5879d430
        __asm _emit 0x74
        __asm _emit 0x64
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 29: je 0x5879d3fb
        __asm _emit 0x74
        __asm _emit 0x29
        push 0ah
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 D4 D9 FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esi + 14h]
        cmp dword ptr [esi + 28h], 0fh
        ; Exact mapped bytes 76 03: jbe 0x5879d3eb
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [esi + 24h]
        push ecx
        push eax
        ; Exact mapped bytes E8 5B DC FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 5ch]
        add esp, 0ch
        push 2
        lea eax, [ebp - 58h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 08 D0 FF FF: call 0x5879a410
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 14h], 0fh
        mov ecx, eax
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes 76 02: jbe 0x5879d419
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, dword ptr [eax]
        push dword ptr [eax + 10h]
        push ecx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 2B DC FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 00 C9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc9
        __asm _emit 0xd0
        __asm _emit 0xff
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
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 09 3C 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 7D 3B 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3b
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
