// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004113E0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_004113e0_004113E0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x41147d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 48 4C: cmp dword ptr [eax + 0x4c], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x4c
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x41147d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 54: mov edx, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 74 20: je 0x411420
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 78 58: mov edi, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x58
        ; Exact mapped bytes 89 7A 58: mov dword ptr [edx + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 50 58: mov edx, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x58
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 74 08: je 0x411415
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 78 54: mov edi, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x54
        ; Exact mapped bytes 89 7A 54: mov dword ptr [edx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0x54
        ; Exact mapped bytes EB 26: jmp 0x41143b
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 8B 50 54: mov edx, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 89 91 18 01 00 00: mov dword ptr [ecx + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x41143b
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 50 58: mov edx, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x58
        ; Exact mapped bytes 89 91 14 01 00 00: mov dword ptr [ecx + 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 58: mov edx, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x58
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 74 05: je 0x411435
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 89 72 54: mov dword ptr [edx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x54
        ; Exact mapped bytes EB 06: jmp 0x41143b
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 B1 18 01 00 00: mov dword ptr [ecx + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B9 10 01 00 00: mov edi, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 89 B9 10 01 00 00: mov dword ptr [ecx + 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 70 4C: mov dword ptr [eax + 0x4c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x4c
        ; Exact mapped bytes 89 70 54: mov dword ptr [eax + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x54
        ; Exact mapped bytes 89 70 58: mov dword ptr [eax + 0x58], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 98 0C 00 00: mov eax, dword ptr [ecx + 0xc98]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 17: je 0x411474
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 81 90 0C 00 00: mov eax, dword ptr [ecx + 0xc90]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 6B 04 00 00: push 0x46b
        __asm _emit 0x68
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 1C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
