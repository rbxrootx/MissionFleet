// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970AE0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58970ae0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 7E 30 00: cmp dword ptr [esi + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x58970b26
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 83 7E 04 FF: cmp dword ptr [esi + 4], -1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xff
        ; Exact mapped bytes 74 37: je 0x58970b26
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 54 C4 98 58: call dword ptr [0x5898c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 58 C4 98 58: call dword ptr [0x5898c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 68 09 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 04 FF FF FF FF: mov dword ptr [esi + 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 46 30 00 00 00 00: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
