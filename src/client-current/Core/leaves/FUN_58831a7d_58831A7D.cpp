// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831A7D .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58831a7d_58831A7D() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 0C 67 96 58: mov edi, 0x5896670c
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 C0 43 89 58: call dword ptr [0x588943c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 83 3E 00: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x58831aa5
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes C7 06 FF FF FF FF: mov dword ptr [esi], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 26: jmp 0x58831ac4
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes E8 2C 00 00 00: call 0x58831acf
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB EC: jmp 0x58831a91
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes 83 3E FF: cmp dword ptr [esi], -1
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0xff
        ; Exact mapped bytes 74 F4: je 0x58831a9e
        __asm _emit 0x74
        __asm _emit 0xf4
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
        ; Exact mapped bytes A1 A4 60 90 58: mov eax, dword ptr [0x589060a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 81 04 00 00 00: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 BC 43 89 58: call dword ptr [0x588943bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
