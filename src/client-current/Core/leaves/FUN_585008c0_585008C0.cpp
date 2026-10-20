// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585008C0 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_585008c0_585008C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 F1 FF 87 58: push 0x5887fff1
        __asm _emit 0x68
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 67 96 58: mov eax, dword ptr [0x58966710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 64 8B 0D 2C 00 00 00: mov ecx, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 81: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x81
        ; Exact mapped bytes A1 30 72 94 58: mov eax, dword ptr [0x58947230]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 82 04 00 00 00: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 48: jle 0x58500946
        __asm _emit 0x7e
        __asm _emit 0x48
        ; Exact mapped bytes 68 30 72 94 58: push 0x58947230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 11 33 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x33
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D 30 72 94 58 FF: cmp dword ptr [0x58947230], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 32: jne 0x58500946
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 D8 70 94 58: mov ecx, 0x589470d8
        __asm _emit 0xb9
        __asm _emit 0xd8
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B F8 FF FF: call 0x58500140
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 50 2E 89 58: push 0x58892e50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 10 33 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 30 72 94 58: push 0x58947230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 10 33 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes B8 D8 70 94 58: mov eax, 0x589470d8
        __asm _emit 0xb8
        __asm _emit 0xd8
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
