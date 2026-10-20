// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578894 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_00578894_00578894() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x5788ba
        __asm _emit 0x75
        __asm _emit 0x11
        push 70h
        push 5d1160h
        ; Exact mapped bytes E8 4B C1 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5788ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5788a0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 11: jne 0x5788df
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 5d1160h
        ; Exact mapped bytes E8 26 C1 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5788df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x5788c0
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 11: jne 0x5788fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 72h
        push 5d1160h
        ; Exact mapped bytes E8 09 C1 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5788fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5788e5
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 27: je 0x57892f
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        ; Exact mapped bytes E8 3C 75 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x57892f
        __asm _emit 0x75
        __asm _emit 0x11
        push 74h
        push 5d1160h
        ; Exact mapped bytes E8 D6 C0 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57892f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x578902
        __asm _emit 0x75
        __asm _emit 0xcd
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 12 75 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x578959
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 5d1160h
        ; Exact mapped bytes E8 AC C0 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578959
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x578935
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 1F 5E 00: call dword ptr [0x5e1f78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5B: je 0x5789ec
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 52: je 0x5789ec
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 14 FC FF: call 0x539da6
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5789ec
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5789c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 73 16: jae 0x5789e0
        __asm _emit 0x73
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 20h]
        add eax, 4
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB D9: jmp 0x5789b9
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 02 00 00: call 0x578cd8
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
