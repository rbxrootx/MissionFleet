// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571556 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_00571556_00571556() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5801c1h
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
        push ecx
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 28h], ecx
        push 221h
        push 5d0930h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 D2 9B F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BB E8 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5715b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 5d0930h
        ; Exact mapped bytes E8 52 34 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5715b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x57158e
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 20h]
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 8C 2A 5E 00: call dword ptr [0x5e2a8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x5715d9
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 B1 BE FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5715f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 228h
        push 5d0930h
        ; Exact mapped bytes E8 12 34 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5715f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5715d9
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 1ch]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 90 2A 5E 00: call dword ptr [0x5e2a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 33: je 0x57164a
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x57163b
        __asm _emit 0x74
        __asm _emit 0x14
        push 22fh
        push 5d0930h
        ; Exact mapped bytes E8 CA 33 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57163b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x571617
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 40 BE FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x571664
        __asm _emit 0x75
        __asm _emit 0x14
        push 232h
        push 5d0930h
        ; Exact mapped bytes E8 A1 33 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571664
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x57164a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A9 EA FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 80h], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C FB FD FF: call 0x55120b
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x571753
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 584850h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CF 99 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5716d9
        __asm _emit 0x75
        __asm _emit 0x14
        push 23eh
        push 5d0930h
        ; Exact mapped bytes E8 2C 33 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5716d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5716b4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x571703
        __asm _emit 0x74
        __asm _emit 0x14
        push 241h
        push 5d0930h
        ; Exact mapped bytes E8 02 33 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571703
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x5716df
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 20h]
        push eax
    }
}
