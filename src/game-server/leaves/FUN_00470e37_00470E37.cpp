// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470E37 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_00470e37_00470E37() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 9F FD FF: call 0x44ae36
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 76: jne 0x470ee1
        __asm _emit 0x75
        __asm _emit 0x76
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 53 F3 FF FF: call 0x4701ca
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x470ee1
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 79 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 D8 5B FB FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 19: je 0x470eca
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 18h
        lea ecx, [ebp - 18h]
        push ecx
        push 0
        push 0
        push 8001e003h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 68 63 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 68 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 67 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x470ee3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 F2 78 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
