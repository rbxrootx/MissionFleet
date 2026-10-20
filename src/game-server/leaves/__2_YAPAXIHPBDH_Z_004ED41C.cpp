// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED41C .. +0x4F bytes.
extern "C" __declspec(naked) void __2_YAPAXIHPBDH_Z_004ED41C() {
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
        ; Exact mapped bytes E8 FB CD FB FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x4ed446
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 21: jmp 0x4ed467
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 3D 40 4A 5C 00 00: cmp dword ptr [0x5c4a40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4ed460
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 40 4A 5C 00: call dword ptr [0x5c4a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4ed462
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ed464
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BC: jmp 0x4ed420
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
