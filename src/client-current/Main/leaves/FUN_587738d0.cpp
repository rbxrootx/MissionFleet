// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587738D0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_587738d0() {
    __asm {
        push -1
        push 58981aabh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 8]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 FC 9C 58: mov eax, dword ptr [0x589cfc98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 3D: jne 0x58773937
        __asm _emit 0x75
        __asm _emit 0x3d
        push 78h
        ; Exact mapped bytes E8 4D 93 20 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58773930
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, eax
        ; Exact mapped bytes E8 F5 FE FF FF: call 0x58773810
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 98 FC 9C 58: mov dword ptr [0x589cfc98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 8]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        add esp, 10h
        ret
        xor eax, eax
        ; Exact mapped bytes A3 98 FC 9C 58: mov dword ptr [0x589cfc98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 8]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        add esp, 10h
        ret
    }
}
