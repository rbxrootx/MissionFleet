// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C69A .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_0056c69a_0056C69A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 5beh
        push 5d053ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A7 EA F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0dch]
        ; Exact mapped bytes 74 28: je 0x56c6f5
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 74 14: je 0x56c6f5
        __asm _emit 0x74
        __asm _emit 0x14
        push 5c0h
        push 5d053ch
        ; Exact mapped bytes E8 10 83 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c6f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x56c6b9
        __asm _emit 0x75
        __asm _emit 0xbe
        push 5c1h
        push 5d053ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 52 EA F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 75 65 FC FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x56c7c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 7B 65 FC FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        push 5cah
        push 5d053ch
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 13 EA F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2F: je 0x56c782
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x56c780
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        and al, 0fbh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB FD FB FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 3F: jmp 0x56c7c1
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x56c7c1
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 19 FC FF: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x56c7c1
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 60h], ecx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A FD FB FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x56c71c
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
