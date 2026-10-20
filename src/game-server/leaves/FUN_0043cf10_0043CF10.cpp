// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CF10 .. +0x435 bytes.
extern "C" __declspec(naked) void FUN_0043cf10_0043CF10() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 03 A6 57 00: push 0x57a603
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xa6
        __asm _emit 0x57
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 81 EC 64 01 00 00: sub esp, 0x164
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D BD 90 FE FF FF: lea edi, [ebp - 0x170]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 59 00 00 00: mov ecx, 0x59
        __asm _emit 0xb9
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 8D 90 FE FF FF: mov dword ptr [ebp - 0x170], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 85 A4 FE FF FF 00 00 00 00: mov dword ptr [ebp - 0x15c], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D AC FE FF FF: lea ecx, [ebp - 0x154]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C1 07 00 00: call 0x43d720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3C 01 00 00: push 0x13c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 AC FE FF FF: lea eax, [ebp - 0x154]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FE C3 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 8A 3F 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 7B 3F 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8D 8D A8 FE FF FF: lea ecx, [ebp - 0x158]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 34 B0 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E8 24 B0 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D 95 98 FE FF FF: lea edx, [ebp - 0x168]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D8 23 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D AC FE FF FF: lea ecx, [ebp - 0x154]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 E3 46 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 05 50 01 00 00: add eax, 0x150
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D C8 FE FF FF: lea ecx, [ebp - 0x138]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 F6 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 B8 3F 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 95 F8 FE FF FF: lea edx, [ebp - 0x108]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 D7 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 05 50 01 00 00: add eax, 0x150
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D E0 FE FF FF: lea ecx, [ebp - 0x120]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 B8 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 7A 3F 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 95 08 FF FF FF: lea edx, [ebp - 0xf8]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 99 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 24 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0xdc], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D 28 FF FF FF: lea ecx, [ebp - 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 72 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 81 C2 28 03 00 00: add edx, 0x328
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 85 40 FF FF FF: lea eax, [ebp - 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 52 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 2A: mov dx, word ptr [ecx + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2a
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 44 6A FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 60 FF FF FF: lea eax, [ebp - 0xa0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 22 B7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 32: mov dx, word ptr [ecx + 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 55 80: mov word ptr [ebp - 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x80
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 2C: mov cx, word ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x2c
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 09 6A FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 55 82: lea edx, [ebp - 0x7e]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x82
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 EA B6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 34: mov cx, word ptr [eax + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x34
        ; Exact mapped bytes 66 89 4D A2: mov word ptr [ebp - 0x5e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa2
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 30: mov ax, word ptr [edx + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x30
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 D2 69 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 B3 B6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 38: mov ax, word ptr [edx + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 2E: mov dx, word ptr [ecx + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2e
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 9A 69 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 C6: lea eax, [ebp - 0x3a]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xc6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 7B B6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 36: mov dx, word ptr [ecx + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x36
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 78 0C 04 00: mov ecx, dword ptr [eax + 0x40c78]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 18 FF FF FF: mov dword ptr [ebp - 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 94 41 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 83 B8 D0 0F 00 00 00: cmp dword ptr [eax + 0xfd0], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x43d242
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 7C 41 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 90 D0 0F 00 00: mov edx, dword ptr [eax + 0xfd0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 A4 01 00 00: mov eax, dword ptr [edx + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 9C FE FF FF: mov dword ptr [ebp - 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 9C FE FF FF: mov ecx, dword ptr [ebp - 0x164]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D 20 FF FF FF: mov dword ptr [ebp - 0xe0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 41 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 90 D0 0F 00 00: mov edx, dword ptr [eax + 0xfd0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 AC 01 00 00: mov eax, dword ptr [edx + 0x1ac]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 85 A0 FE FF FF: mov dword ptr [ebp - 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D A0 FE FF FF: mov ecx, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D 1C FF FF FF: mov dword ptr [ebp - 0xe4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 41 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 90 D0 0F 00 00: mov edx, dword ptr [eax + 0xfd0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A0 FE FF FF: mov eax, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 82 AC 01 00 00: mov dword ptr [edx + 0x1ac], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 3C 01 00 00: push 0x13c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D AC FE FF FF: lea ecx, [ebp - 0x154]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 68 05 80 01 80: push 0x80018005
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 F3 40 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 D0 0F 00 00: mov ecx, dword ptr [eax + 0xfd0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA 9F 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 A4 FE FF FF 01 00 00 00: mov dword ptr [ebp - 0x15c], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 36: mov ax, word ptr [edx + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x36
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 2E: mov dx, word ptr [ecx + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2e
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 88 68 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 38: mov cx, word ptr [eax + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x38
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 30: mov ax, word ptr [edx + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x30
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 67 68 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 34: mov dx, word ptr [ecx + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x34
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 2C: mov cx, word ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x2c
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 45 68 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 32: mov ax, word ptr [edx + 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x32
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 51 2A: mov dx, word ptr [ecx + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x2a
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes E8 23 68 FF FF: call 0x433aeb
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 05 28 03 00 00: add eax, 0x328
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 0C: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 81 C2 50 01 00 00: add edx, 0x150
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes B9 78 32 5D 00: mov ecx, 0x5d3278
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 33 01 00: call 0x450629
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 A4 FE FF FF 01 00 00 00: mov dword ptr [ebp - 0x15c], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 A4 FE FF FF: mov eax, dword ptr [ebp - 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 94 FE FF FF: mov dword ptr [ebp - 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 3B 05 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 2C 05 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 94 FE FF FF: mov eax, dword ptr [ebp - 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 81 C4 70 01 00 00: add esp, 0x170
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 A1 B4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
