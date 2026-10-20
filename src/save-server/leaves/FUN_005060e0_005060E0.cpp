// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005060E0 .. +0x2A4 bytes.
extern "C" __declspec(naked) void FUN_005060e0_005060E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 12 C0 02 00: call 0x53211e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 74 BD 02 00: call 0x531e9b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 18h], 2
        mov edx, dword ptr [ebp - 78h]
        cmp dword ptr [edx + 8ch], 0ah
        ; Exact mapped bytes 74 0C: je 0x50614d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 8ch], 0bh
        ; Exact mapped bytes 75 3C: jne 0x506189
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 78h]
        cmp dword ptr [ecx + 8ch], 0ah
        ; Exact mapped bytes 75 11: jne 0x50616a
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 28h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes EB 0F: jmp 0x506179
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 30h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 30h], eax
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 28h
        ; Exact mapped bytes E8 2C C1 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 43: jmp 0x5061cc
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 18h]
        or edx, 20h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 8ch], 0ch
        ; Exact mapped bytes 75 11: jne 0x5061af
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 2ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x5061be
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 34h]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 34h], edx
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 28h
        ; Exact mapped bytes E8 FD C0 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        xor ecx, ecx
        cmp dword ptr [ebp - 0ch], 0
        setl cl
        dec ecx
        and ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 78h]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 C3 BF 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        add eax, 48h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 8ch], 0ah
        ; Exact mapped bytes 74 10: je 0x506254
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 78h]
        cmp dword ptr [ecx + 8ch], 0ch
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5062df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 58h
        ; Exact mapped bytes E8 51 C0 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov eax, dword ptr [ebp - 34h]
        sub eax, edx
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 58h
        ; Exact mapped bytes E8 4F C0 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov edx, dword ptr [ebp - 30h]
        sub edx, ecx
        mov dword ptr [ebp - 38h], edx
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 3B BF 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 2E C1 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 25 C1 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 29 C3 02 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5062da
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40h]
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 44h]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [edx + 3ch], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 4ch], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x506365
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 58h
        ; Exact mapped bytes E8 C6 BF 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov edx, dword ptr [ebp - 3ch]
        add edx, ecx
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 58h
        ; Exact mapped bytes E8 C4 BF 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov edx, dword ptr [ebp - 38h]
        add edx, ecx
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 B0 BE 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 A3 C0 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 9A C0 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 9E C2 02 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x506365
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 38h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 3ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [edx + 44h], ecx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AD 03 00 00: call 0x50672b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
