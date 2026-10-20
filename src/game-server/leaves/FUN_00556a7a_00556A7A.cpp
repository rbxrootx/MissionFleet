// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556A7A .. +0x1C6 bytes.
extern "C" __declspec(naked) void FUN_00556a7a_00556A7A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 6a0h
        push 5cfa08h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C7 46 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B0 93 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x556abe
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a1h
        push 5cfa08h
        ; Exact mapped bytes E8 47 DF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556abe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x556a99
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 10h]
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
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 09: je 0x556ae4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 A6 69 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x556afe
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a7h
        push 5cfa08h
        ; Exact mapped bytes E8 07 DF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556afe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x556ae4
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 90 2A 5E 00: call dword ptr [0x5e2a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 33: je 0x556b55
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x556b46
        __asm _emit 0x74
        __asm _emit 0x14
        push 6aeh
        push 5cfa08h
        ; Exact mapped bytes E8 BF DE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556b46
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x556b22
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 35 69 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x556b6f
        __asm _emit 0x75
        __asm _emit 0x14
        push 6b1h
        push 5cfa08h
        ; Exact mapped bytes E8 96 DE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556b6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556b55
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        push 58e4b0h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 F4 52 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x556baf
        __asm _emit 0x75
        __asm _emit 0x14
        push 6b7h
        push 5cfa08h
        ; Exact mapped bytes E8 56 DE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556baf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556b95
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 33: je 0x556c1b
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x556c0c
        __asm _emit 0x74
        __asm _emit 0x14
        push 6bdh
        push 5cfa08h
        ; Exact mapped bytes E8 F9 DD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556c0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x556be8
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 6F 68 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], 0
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
