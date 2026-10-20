// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411010 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_00411010_00411010() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 88 A3 43 00: push 0x43a388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xa3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 20: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x20
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 87 E0 00 00 00: mov eax, dword ptr [edi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x411147
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8D 44 24 20: lea eax, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 4C 24 24: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 4C 24 34: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 44 24 44 00 00 00 00: mov dword ptr [esp + 0x44], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 24 10 00 00 00: mov dword ptr [esp + 0x24], 0x10
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 AC C5 43 00: call dword ptr [0x43c5ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 95 C2: setne dl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2F: je 0x4110b8
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 44 24 22: mov eax, dword ptr [esp + 0x22]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 CC C5 43 00: call dword ptr [0x43c5cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B E8: mov bp, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 81 E5 FF FF 00 00: and ebp, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes FF 15 C8 C5 43 00: call dword ptr [0x43c5c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 7E CC 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x4110bc
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 73 F8: mov esi, dword ptr [ebx - 8]
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0xf8
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 7E 1B: jle 0x4110e8
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 0F BE 04 1A: movsx eax, byte ptr [edx + ebx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x1a
        ; Exact mapped bytes 8D 2C C5 00 00 00 00: lea ebp, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes 8D 0C A9: lea ecx, [ecx + ebp*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xa9
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 7C E9: jl 0x4110cd
        __asm _emit 0x7c
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 87 D4 00 00 00: mov eax, dword ptr [edi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes C1 E2 05: shl edx, 5
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x05
        ; Exact mapped bytes 2B D5: sub edx, ebp
        __asm _emit 0x2b
        __asm _emit 0xd5
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 35 D0 1C A9 F3: xor eax, 0xf3a91cd0
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0xa9
        __asm _emit 0xf3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 06 A1 8B 7C: xor ecx, 0x7c8ba106
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0x7c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 0D 03 02 80: push 0x8002030d
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x80
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EA EE FF FF: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes E8 1F FD FF FF: call 0x410e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 10: lea ecx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C7 44 24 38 FF FF FF FF: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 79 CA 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 2C: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x2c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 2C: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x2c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
