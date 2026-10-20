// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050218E .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_0050218e_0050218E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d797h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 28h], 0ffffffffh
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 20: je 0x5021e2
        __asm _emit 0x74
        __asm _emit 0x20
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 39 6C FC FF: call 0x4c8e11
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x5021e2
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x502307
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 75 50: jne 0x502248
        __asm _emit 0x75
        __asm _emit 0x50
        push 460h
        push 675764h
        push 1ch
        ; Exact mapped bytes E8 F6 9E FC FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0F: je 0x502228
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1D 67 FC FF: call 0x4c8940
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x50222f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 BF E4 F9 FF: call 0x4a0721
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 39 2B 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 0
        push 41ch
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 1E: jne 0x5022ae
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 46 A6 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x502332
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 E5 53 02 00: call 0x5276a9
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 37 6B FC FF: call 0x4c8e11
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5022f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 46ah
        push 675764h
        ; Exact mapped bytes E8 53 6A 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5022f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x5022c4
        __asm _emit 0x75
        __asm _emit 0xcc
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E5 A5 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D8 E5 FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 25 E6 FF FF: call 0x500952
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
