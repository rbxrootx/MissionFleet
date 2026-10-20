// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586852 .. +0x19B bytes.
extern "C" __declspec(naked) void FUN_00586852_00586852() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 FC FF FF: call 0x586478
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x5869bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x5869bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 D7 EF FF: call 0x483fd6
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 1009h
        ; Exact mapped bytes 74 1B: je 0x5868dd
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 0ch], 100ah
        ; Exact mapped bytes 0F 86 D3 00 00 00: jbe 0x5869a2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 100ch
        ; Exact mapped bytes 76 05: jbe 0x5868dd
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5869a2
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 54: je 0x58693d
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 9ch]
        cmp eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 74 11: je 0x58690e
        __asm _emit 0x74
        __asm _emit 0x11
        push 79h
        push 67d92ch
        ; Exact mapped bytes E8 37 24 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58690e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5868e9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 71 56 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 57: je 0x5869a0
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 74 14: je 0x586971
        __asm _emit 0x74
        __asm _emit 0x14
        push 81h
        push 67d92ch
        ; Exact mapped bytes E8 D4 23 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586971
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x586949
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 0E 56 F6 FF: call 0x4ebf94
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 98h], 0
        ; Exact mapped bytes EB 05: jmp 0x5869a7
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 3D: jmp 0x5869e4
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x58689d
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 9ch], ecx
        mov eax, dword ptr [ebp - 4]
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
