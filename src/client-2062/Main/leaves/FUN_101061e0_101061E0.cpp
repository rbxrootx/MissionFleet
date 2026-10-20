// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101061E0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_101061e0_101061E0() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 51 78: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x78
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 89 81 80 00 00 00: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 7C: mov dword ptr [ecx + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x7c
        ; Exact mapped bytes 89 54 24 00: mov dword ptr [esp], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x1010621e
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes DB 44 24 08: fild dword ptr [esp + 8]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes DB 44 24 00: fild dword ptr [esp]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes 68 E4 CD 1A 10: push 0x101acde4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 39 6B 06 00: call 0x1016cd50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 DC CD 1A 10: push 0x101acddc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
