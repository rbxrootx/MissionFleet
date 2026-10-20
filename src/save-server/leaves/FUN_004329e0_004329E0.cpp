// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004329E0 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_004329e0_004329E0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 98 BA 58 00: push 0x58ba98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xba
        __asm _emit 0x58
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
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 81 FF FE FF FF 7F: cmp edi, 0x7ffffffe
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 89 65 F0: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xf0
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 76 0D: jbe 0x432a1b
        __asm _emit 0x76
        __asm _emit 0x0d
        ; Exact mapped bytes 68 18 0A 67 00: push 0x670a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 E8 35 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 1E: mov ebx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x1e
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 72 03: jb 0x432a31
        __asm _emit 0x72
        __asm _emit 0x03
        ; Exact mapped bytes 8D 45 08: lea eax, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 74 68: je 0x432aa1
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8D 3C 00: lea edi, [eax + eax]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 81 FF 80 00 00 00: cmp edi, 0x80
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 0D: jbe 0x432a51
        __asm _emit 0x76
        __asm _emit 0x0d
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 16 9A 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes EB 52: jmp 0x432aa3
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8D 47 FF: lea eax, [edi - 1]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0xff
        ; Exact mapped bytes 68 94 50 68 00: push 0x685094
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 03: shr eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 8D 1C 85 54 50 68 00: lea ebx, [eax*4 + 0x685054]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 FB FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x432a8a
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 0B: mov dword ptr [ebx], ecx
        __asm _emit 0x89
        __asm _emit 0x0b
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes EB 19: jmp 0x432aa3
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F0 1E 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes EB 02: jmp 0x432aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 8A 55 0B: mov dl, byte ptr [ebp + 0xb]
        __asm _emit 0x8a
        __asm _emit 0x55
        __asm _emit 0x0b
        ; Exact mapped bytes 8D 4D 0B: lea ecx, [ebp + 0xb]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 5D EC: mov dword ptr [ebp - 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xec
        ; Exact mapped bytes C7 45 FC 01 00 00 00: mov dword ptr [ebp - 4], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 55 0B: mov byte ptr [ebp + 0xb], dl
        __asm _emit 0x88
        __asm _emit 0x55
        __asm _emit 0x0b
        ; Exact mapped bytes E8 DA 2F 00 00: call 0x435aa0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 49: je 0x432b20
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 3D 80 00 00 00: cmp eax, 0x80
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x432af2
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BC 99 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes EB 2E: jmp 0x432b20
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 68 94 50 68 00: push 0x685094
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 03: shr eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 8D 14 85 54 50 68 00: lea edx, [eax*4 + 0x685054]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 08: mov dword ptr [ebp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes E8 F6 FA FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 0F: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 89 1E: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1e
        ; Exact mapped bytes 89 56 04: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8D 0C 43: lea ecx, [ebx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x43
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 4E 08: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
