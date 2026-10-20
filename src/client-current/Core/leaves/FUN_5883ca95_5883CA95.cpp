// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CA95 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5883ca95_5883CA95() {
    __asm {
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
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 58 84 96 58: mov edi, 0x58968458
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C 88: mov ecx, dword ptr [eax + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x88
        ; Exact mapped bytes A1 74 84 96 58: mov eax, dword ptr [0x58968474]
        __asm _emit 0xa1
        __asm _emit 0x74
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
        ; Exact mapped bytes 7E 03: jle 0x5883caba
        __asm _emit 0x7e
        __asm _emit 0x03
        ; Exact mapped bytes EB 05: jmp 0x5883cabe
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes BE 74 84 96 58: mov esi, 0x58968474
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 B3 4F FF FF: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 3D 74 84 96 58 FF: cmp dword ptr [0x58968474], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 E5: jne 0x5883cab9
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 24 42 89 58: call dword ptr [0x58894224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 81 30 89 58: push 0x58893081
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 70 84 96 58 01 00 00 00: mov dword ptr [0x58968470], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA 4E FF FF: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 37 4F FF FF: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes EB C0: jmp 0x5883cab9
        __asm _emit 0xeb
        __asm _emit 0xc0
    }
}
