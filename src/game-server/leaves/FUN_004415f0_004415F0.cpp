// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004415F0 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_004415f0_004415F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57abe9h
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
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 14 7A 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 C3 FC FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 95 FC FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 A5 FC FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 3B 05 04 78 5D 00: cmp eax, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x441694
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 8F FC FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 74 FC FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 63 FC FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 55 FC FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D6 FA FF FF: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0F: jne 0x4416d0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C7 FA FF FF: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x441728
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 27 FC FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 2C FC FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1E: jne 0x44170c
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 FC FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 0E FC FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x441728
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EB FB FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 D0 FB FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 DF FB FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BE FB FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C7 79 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 70 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
