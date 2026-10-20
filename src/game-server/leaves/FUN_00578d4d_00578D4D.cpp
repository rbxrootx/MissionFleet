// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578D4D .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_00578d4d_00578D4D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x578d76
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 5d1160h
        ; Exact mapped bytes E8 8F BC FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578d76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x578d59
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 14: jne 0x578d9e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 5d1160h
        ; Exact mapped bytes E8 67 BC FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578d9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x578d7c
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x578dbe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 5d1160h
        ; Exact mapped bytes E8 47 BC FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578dbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x578da4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x578dde
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 5d1160h
        ; Exact mapped bytes E8 27 BC FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578dde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x578dc4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 10h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 65 70 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x578e09
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fah
        push 5d1160h
        ; Exact mapped bytes E8 FC BB FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578e09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x578de4
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 27: je 0x578e3c
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 32 70 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x578e3c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 5d1160h
        ; Exact mapped bytes E8 C9 BB FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578e3c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x578e0f
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 48 28 5E 00: call dword ptr [0x5e2848]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 76: je 0x578ee1
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 0F FC FF: call 0x539da6
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x578ee1
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp + 14h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 75 5A: jne 0x578ee1
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B5 CE FB FF: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        or dh, 4
        or edx, 20h
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 48 28 5E 00: call dword ptr [0x5e2848]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 62 CF FB FF: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 FD FF FF: call 0x578cd8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
