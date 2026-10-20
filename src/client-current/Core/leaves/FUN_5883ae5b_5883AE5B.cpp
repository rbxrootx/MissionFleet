// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AE5B .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_5883ae5b_5883AE5B() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B8 06 2A 89 58: mov eax, 0x58892a06
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 76 FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 64 A1 2C 00 00 00: mov eax, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 34 84 96 58: mov edi, 0x58968434
        __asm _emit 0xbf
        __asm _emit 0x34
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
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
        ; Exact mapped bytes A1 44 84 96 58: mov eax, dword ptr [0x58968444]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 81 04 00 00 00: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 32: jle 0x5883aeba
        __asm _emit 0x7e
        __asm _emit 0x32
        ; Exact mapped bytes BE 44 84 96 58: mov esi, 0x58968444
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 EA 6B FF FF: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 44 84 96 58 FF: cmp dword ptr [0x58968444], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 75 1D: jne 0x5883aeba
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 83 65 FC 00: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 00 FD FF FF: call 0x5883aba8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 6C 30 89 58: push 0x5889306c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 6B FF FF: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 74 6B FF FF: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes E8 54 76 FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
