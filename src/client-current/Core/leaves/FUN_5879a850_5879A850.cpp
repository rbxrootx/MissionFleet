// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A850 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_5879a850_5879A850() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 4B 1B 89 58: push 0x58891b4b
        __asm _emit 0x68
        __asm _emit 0x4b
        __asm _emit 0x1b
        __asm _emit 0x89
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
        ; Exact mapped bytes 64 A1 2C 00 00 00: mov eax, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 67 96 58: mov ecx, dword ptr [0x58966710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C 88: mov ecx, dword ptr [eax + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x88
        ; Exact mapped bytes A1 C0 5E 96 58: mov eax, dword ptr [0x58965ec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 81 04 00 00 00: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 14: jg 0x5879a8a2
        __asm _emit 0x7f
        __asm _emit 0x14
        ; Exact mapped bytes B8 A8 5E 96 58: mov eax, 0x58965ea8
        __asm _emit 0xb8
        __asm _emit 0xa8
        __asm _emit 0x5e
        __asm _emit 0x96
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
        ; Exact mapped bytes 68 C0 5E 96 58: push 0x58965ec0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 71 09 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D C0 5E 96 58 FF: cmp dword ptr [0x58965ec0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 D6: jne 0x5879a88e
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 81 25 B0 5E 96 58 FF FE FF FF: and dword ptr [0x58965eb0], 0xfffffeff
        __asm _emit 0x81
        __asm _emit 0x25
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E0 2E 89 58: push 0x58892ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 71 09 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 5E 96 58: push 0x58965ec0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 71 09 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes EB B3: jmp 0x5879a88e
        __asm _emit 0xeb
        __asm _emit 0xb3
    }
}
