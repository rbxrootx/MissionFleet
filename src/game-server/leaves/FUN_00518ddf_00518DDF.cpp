// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518DDF .. +0x1C4 bytes.
extern "C" __declspec(naked) void FUN_00518ddf_00518DDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 44h], ecx
        push 42ch
        push 5c8c2ch
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 62 23 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518e23
        __asm _emit 0x75
        __asm _emit 0x14
        push 42dh
        push 5c8c2ch
        ; Exact mapped bytes E8 E2 BB 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518e23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x518dfe
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F4 A1 FD FF: call 0x4f3031
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 08: je 0x518e4e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x518f9a
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 418h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x518e80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x518f97
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BD CE 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 41dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x518f92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F9 D0 01 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x518f92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 417h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x518f92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2bh]
        and eax, 0ffh
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 73: jne 0x518f92
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 10 EA FF FF: call 0x51793b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 44: je 0x518f78
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 28h
        ; Exact mapped bytes 72 3C: jb 0x518f78
        __asm _emit 0x72
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 24h], 0ffffffffh
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 08: je 0x518f86
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x518f8d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes EB 08: jmp 0x518f9a
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x518e77
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
