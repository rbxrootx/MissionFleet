// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578E70 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_00578e70_00578E70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fc31h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0F 82 FD FF: call 0x5510a8
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 F7 8C FB FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 30h
        ; Exact mapped bytes E8 51 BE FA FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 BB 2A 00 00: call 0x57b980
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 6ch
        ; Exact mapped bytes E8 EC 2A 00 00: call 0x57b9c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 70h
        ; Exact mapped bytes E8 01 2B 00 00: call 0x57b9e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 63d66ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x578efe
        __asm _emit 0x74
        __asm _emit 0x10
        push 1eh
        push 67d108h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 62 13 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 64h], 1
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes 66 C7 45 E0 03 00: mov word ptr [ebp - 0x20], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 20h
        lea edx, [ebp - 20h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 DB F8 FE FF: call 0x56885b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 1ch], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x578fa2
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x578fbe
        __asm _emit 0x74
        __asm _emit 0x11
        push 3ch
        push 67d108h
        ; Exact mapped bytes E8 87 FD FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578fbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x578fa2
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 3D 1B FA FF: call 0x51ab06
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
