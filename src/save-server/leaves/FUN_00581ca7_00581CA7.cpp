// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00581CA7 .. +0x430 bytes.
extern "C" __declspec(naked) void FUN_00581ca7_00581CA7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 140h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 110h], 0
        push 1
        push 20h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 84 17 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x581cfa
        __asm _emit 0x75
        __asm _emit 0x14
        push 5deh
        push 67849ch
        ; Exact mapped bytes E8 4B 70 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x581cfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x581cd5
        __asm _emit 0x75
        __asm _emit 0xd5
        push 5dfh
        push 67849ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 4D 85 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xff
        push 20h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 3B EE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 10ch]
        mov dword ptr [ebp - 0ch], ecx
        push 63a3b8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 57 84 F5 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x581ecb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 118h], edx
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 10h
        ; Exact mapped bytes E8 52 30 FA FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 18h
        ; Exact mapped bytes E8 F5 2F FA FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x581e29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 18h
        ; Exact mapped bytes E8 FD 2F FA FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x581dc8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x581e16
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B0 41 EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 E0 B7 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1ch
        ; Exact mapped bytes E8 55 2F FA FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x581ec9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1ch
        ; Exact mapped bytes E8 5D 2F FA FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x581e68
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 4E: jmp 0x581eb6
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 10 41 EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        ; Exact mapped bytes E8 40 B7 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 4F: jmp 0x581f1a
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 636e08h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B8 82 F5 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x581efc
        __asm _emit 0x74
        __asm _emit 0x20
        push 100h
        lea eax, [ebp - 10ch]
        push eax
        push 0f10ah
        ; Exact mapped bytes E8 4E 7E F5 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 01 0A F1: mov word ptr [ecx], 0xf10a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0xf1
        ; Exact mapped bytes EB 1E: jmp 0x581f1a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 100h
        lea edx, [ebp - 10ch]
        push edx
        push 0f108h
        ; Exact mapped bytes E8 2E 7E F5 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 08 F1: mov word ptr [eax], 0xf108
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0xf1
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 110h], ecx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x581f38
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x581f86
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 40 40 EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], esp
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes E8 70 B6 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x582027
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 FB FA FF: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x581fc6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 4E: jmp 0x582014
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B2 3F EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes E8 E2 B5 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5820c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5820c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A FA FA FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x582067
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x5820b5
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 11 3F EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        ; Exact mapped bytes E8 41 B5 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        lea esp, [ebp - 14ch]
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
