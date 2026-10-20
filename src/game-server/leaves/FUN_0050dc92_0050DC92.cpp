// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DC92 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0050dc92_0050DC92() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1D: je 0x50dcc1
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 17: je 0x50dcc1
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 11: je 0x50dcc1
        __asm _emit 0x74
        __asm _emit 0x11
        push 34h
        push 5c60a8h
        ; Exact mapped bytes E8 44 6D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50dcc1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x50dc9e
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes 83 3D D4 E8 5D 00 00: cmp dword ptr [0x5de8d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x50dce1
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 5c60a8h
        ; Exact mapped bytes E8 24 6D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50dce1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50dcc7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 2
        ; Exact mapped bytes E8 EC 9F 03 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a4h]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 7E 2F: jle 0x50dd3e
        __asm _emit 0x7e
        __asm _emit 0x2f
        ; Exact mapped bytes A1 D4 E8 5D 00: mov eax, dword ptr [0x5de8d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 18: jle 0x50dd3c
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a4h], 1
        ; Exact mapped bytes 75 0C: jne 0x50dd3c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], eax
        ; Exact mapped bytes EB 1D: jmp 0x50dd5b
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E8 AA A0 03 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
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
