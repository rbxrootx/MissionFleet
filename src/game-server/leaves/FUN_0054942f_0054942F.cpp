// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054942F .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_0054942f_0054942F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 324h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 324h], ecx
        ; Exact mapped bytes E8 FD BF FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 324h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 11: je 0x549462
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 5cb734h
        ; Exact mapped bytes E8 A3 B5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549462
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x549441
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes E8 D6 BF FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 11: je 0x549484
        __asm _emit 0x74
        __asm _emit 0x11
        push 3fh
        push 5cb734h
        ; Exact mapped bytes E8 81 B5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549484
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x549468
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 B4 BF FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 0ch], eax
        push 104h
        lea ecx, [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5494e1
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 5cb734h
        ; Exact mapped bytes E8 24 B5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5494e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x5494b0
        __asm _emit 0x75
        __asm _emit 0xc9
        push 2eh
        lea edx, [ebp - 208h]
        push edx
        ; Exact mapped bytes E8 9B 01 EF FF: call 0x439690
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 310h], eax
        cmp dword ptr [ebp - 310h], 0
        ; Exact mapped bytes 75 11: jne 0x549518
        __asm _emit 0x75
        __asm _emit 0x11
        push 52h
        push 5cb734h
        ; Exact mapped bytes E8 ED B4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549518
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5494fe
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 74 11: je 0x54953d
        __asm _emit 0x74
        __asm _emit 0x11
        push 53h
        push 5cb734h
        ; Exact mapped bytes E8 C8 B4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54953d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x54951e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 310h]
        mov byte ptr [ecx], 0
        push 104h
        lea edx, [ebp - 30ch]
        push edx
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 C0 01 00 00: call 0x549724
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x549579
        __asm _emit 0x74
        __asm _emit 0x11
        push 59h
        push 5cb734h
        ; Exact mapped bytes E8 8C B4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549579
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x54954c
        __asm _emit 0x75
        __asm _emit 0xcd
        mov edx, dword ptr [ebp - 324h]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 75 34: jne 0x5495c2
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        ; Exact mapped bytes E8 0A 3C FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes E8 79 6E F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 314h]
        push edx
        ; Exact mapped bytes E8 DD 3B FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 324h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 6B: jne 0x549639
        __asm _emit 0x75
        __asm _emit 0x6b
        push 0
        ; Exact mapped bytes E8 CA 3B FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        push 100h
        lea ecx, [ebp - 104h]
        push ecx
        push 0e000h
        ; Exact mapped bytes E8 4F 16 FB FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x54960f
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 1F 6E F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 7ch], eax
        ; Exact mapped bytes EB 1E: jmp 0x54962d
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 8ch]
        push eax
        ; Exact mapped bytes E8 FF 6D F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 318h]
        push edx
        ; Exact mapped bytes E8 66 3B FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 324h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes E8 F6 BD FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x549664
        __asm _emit 0x75
        __asm _emit 0x11
        push 6dh
        push 5cb734h
        ; Exact mapped bytes E8 A1 B3 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549664
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x549648
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 324h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 4F: jne 0x5496c8
        __asm _emit 0x75
        __asm _emit 0x4f
        push 5cb740h
        mov edx, dword ptr [ebp - 310h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 0D 3B FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 7C 6D F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 31ch]
        push edx
        ; Exact mapped bytes E8 E0 3A FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 310h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 324h]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 46: jne 0x54971d
        __asm _emit 0x75
        __asm _emit 0x46
        push 5cb748h
        lea edx, [ebp - 30ch]
        push edx
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 AF 3A FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes E8 1E 6D F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 94h], eax
        mov edx, dword ptr [ebp - 320h]
        push edx
        ; Exact mapped bytes E8 82 3A FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
