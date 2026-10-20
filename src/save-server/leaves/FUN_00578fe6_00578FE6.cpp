// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578FE6 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_00578fe6_00578FE6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fc5ch
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63d66ch
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x579043
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 34h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57901e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x57906e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 38h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x579049
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F1 1D FD FF: call 0x54ae6d
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 FA FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x5790d9
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 16: je 0x5790ac
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 37 FF FF: call 0x56c882
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0D: jne 0x5790c7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 45 1A FA FF: call 0x51ab23
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 3ch
        ; Exact mapped bytes E8 B3 28 00 00: call 0x57b9a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 30h
        ; Exact mapped bytes E8 F0 37 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C6 7F FD FF: call 0x5510d1
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
