// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578778 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_00578778_00578778() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x57879e
        __asm _emit 0x75
        __asm _emit 0x11
        push 5dh
        push 5d1160h
        ; Exact mapped bytes E8 67 C2 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57879e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x578784
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 11: jne 0x5787c3
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 5d1160h
        ; Exact mapped bytes E8 42 C2 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5787c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x5787a4
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5787e0
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 5d1160h
        ; Exact mapped bytes E8 25 C2 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5787e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5787c9
        __asm _emit 0x75
        __asm _emit 0xe3
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 61 76 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x57880a
        __asm _emit 0x75
        __asm _emit 0x11
        push 60h
        push 5d1160h
        ; Exact mapped bytes E8 FB C1 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57880a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x5787e6
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 74 1F 5E 00: call dword ptr [0x5e1f74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 52: je 0x578888
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 49: je 0x578888
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 5F 15 FC FF: call 0x539da6
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x578888
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 30 11 FC FF: call 0x539992
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 21 16 FC FF: call 0x539e9a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 50 04 00 00: call 0x578cd8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
