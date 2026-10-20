// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC4BC .. +0x4F bytes.
extern "C" __declspec(naked) void __2_YAPAXIHPBDH_Z_004CC4BC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EB A2 F9 FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa2
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x4cc4e6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 21: jmp 0x4cc507
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 3D CC 11 67 00 00: cmp dword ptr [0x6711cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4cc500
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 CC 11 67 00: call dword ptr [0x6711cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4cc502
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4cc504
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BC: jmp 0x4cc4c0
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
