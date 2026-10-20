// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004717DB .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_004717db_004717DB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 FD FA F8 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        ; Exact mapped bytes E8 AA 8C F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x471833
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 FA F8 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 28: je 0x471861
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BD FE FF FF: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        ; Exact mapped bytes E8 67 F7 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB C7: jmp 0x471828
        __asm _emit 0xeb
        __asm _emit 0xc7
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x471887
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        ; Exact mapped bytes E8 1E 8C F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 9C 77 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x47189f
        __asm _emit 0x74
        __asm _emit 0x12
        push 4
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 84 77 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        ; Exact mapped bytes E8 C6 8B F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 2C 6F 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
