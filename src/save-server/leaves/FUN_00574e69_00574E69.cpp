// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574E69 .. +0x1E1 bytes.
extern "C" __declspec(naked) void FUN_00574e69_00574E69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 582h
        push 67cd14h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DB 53 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x53
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E8 E6 CB FB FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x574f78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 A6 AB F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xab
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 DA AA F5 FF: call 0x4cf99a
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 1D: je 0x574ee9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 7D AB F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xab
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 B1 AA F5 FF: call 0x4cf99a
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 D2 F9 FF: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 66 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x575044
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0A: jne 0x574f8d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 D2 F9 FF: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD EA F9 FF: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 18: je 0x574ff6
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 66 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 45 AA F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 1A: je 0x575044
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 1F AA F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0e0h]
        mov dword ptr [ecx + 1ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
