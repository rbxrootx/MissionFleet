// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055569A .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_0055569a_0055569A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push 6c9h
        push 67c1e0h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 A7 4B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 6cah
        push 67c1e0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 94 4B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 6412d8h
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 19 52 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 17: jne 0x5556fd
        __asm _emit 0x75
        __asm _emit 0x17
        push 67c38ch
        push 67c3c4h
        ; Exact mapped bytes E8 20 AF F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x55582f
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x555717
        __asm _emit 0x75
        __asm _emit 0x14
        push 6d3h
        push 67c1e0h
        ; Exact mapped bytes E8 2E 36 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555717
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5556fd
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x555737
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 11: jne 0x555748
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x55582f
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 641458h
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 9D 51 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 14: jne 0x555776
        __asm _emit 0x75
        __asm _emit 0x14
        push 6dfh
        push 67c1e0h
        ; Exact mapped bytes E8 CF 35 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555776
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55575c
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        lea eax, [ebp - 20h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 77: jne 0x55580b
        __asm _emit 0x75
        __asm _emit 0x77
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x5557ae
        __asm _emit 0x74
        __asm _emit 0x14
        push 6e5h
        push 67c1e0h
        ; Exact mapped bytes E8 97 35 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5557ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x555794
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 38h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5557d8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x555806
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x5557f4
        __asm _emit 0x74
        __asm _emit 0x16
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x555806
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [ebp - 20h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 2E 01 00: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x55577c
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
