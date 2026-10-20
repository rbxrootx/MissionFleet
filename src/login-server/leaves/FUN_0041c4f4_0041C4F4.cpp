// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C4F4 .. +0x195 bytes.
extern "C" __declspec(naked) void FUN_0041c4f4_0041C4F4() {
    __asm {
        mov eax, 43b00ch
        ; Exact mapped bytes E8 0A 31 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 6ch
        push edi
        mov edi, ecx
        xor ecx, ecx
        cmp dword ptr [edi + 10h], ecx
        mov dword ptr [edi + 44h], 1
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 8E 5A 01 00 00: jle 0x41c676
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 8B 1D 48 C3 43 00: mov ebx, dword ptr [0x43c348]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        mov edx, dword ptr [edi + 14h]
        lea eax, [ecx + ecx*4]
        mov eax, dword ptr [edx + eax*8 + 24h]
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x41c667
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 03: jmp 0x41c547
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [eax + 8]
        push 20h
        lea eax, [ebp - 78h]
        push 0
        push eax
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 24h], 0fffffffdh
        ; Exact mapped bytes E8 7D 25 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 9B B4 FF FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        cmp dword ptr [edi + 48h], 0
        ; Exact mapped bytes 74 2C: je 0x41c5a5
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, edi
        inc eax
        push eax
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 94 F7 FF FF: call 0x41bd1d
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 38h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 5A B4 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea eax, [ebp - 38h]
        ; Exact mapped bytes EB 06: jmp 0x41c5ab
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [edi + 40h]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 48h], eax
        lea eax, [ebp - 24h]
        push 1
        mov dword ptr [ebp - 44h], eax
        pop eax
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [esi + 0a0h], eax
        mov eax, dword ptr [esi + 4ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x41c650
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 1ch]
        push edx
        push 4401f8h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 70: jl 0x41c650
        __asm _emit 0x7c
        __asm _emit 0x70
        lea edx, [ebp - 28h]
        mov eax, dword ptr [ebp - 1ch]
        push edx
        lea edx, [ebp - 78h]
        push edx
        lea edx, [ebp - 48h]
        mov ecx, dword ptr [eax]
        push 0
        push edx
        push 4
        push 0
        push 440448h
        push dword ptr [esi + 94h]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        and dword ptr [esi + 0a0h], 0
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 09: je 0x41c625
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 09: je 0x41c634
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 09: je 0x41c643
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        inc dword ptr [ebp - 10h]
        add dword ptr [ebp - 14h], 10h
        or dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 85 E0 FE FF FF: jne 0x41c544
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        inc ecx
        cmp ecx, dword ptr [edi + 10h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 8C B0 FE FF FF: jl 0x41c524
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        and dword ptr [edi + 44h], 0
        xor eax, eax
        pop edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
