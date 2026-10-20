// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FC70 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_0040fc70_0040FC70() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 29 AC 58 00: push 0x58ac29
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0xac
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
        ; Exact mapped bytes 81 EC B8 00 00 00: sub esp, 0xb8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D BD 3C FF FF FF: lea edi, [ebp - 0xc4]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 2E 00 00 00: mov ecx, 0x2e
        __asm _emit 0xb9
        __asm _emit 0x2e
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
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 66 BC 11 00: call 0x52b916
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x40fd79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D 9C: lea ecx, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 AF 8C 0D 00: call 0x4e8973
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D 9C: lea ecx, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 58 40 12 00: call 0x533d2d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 27: push 0x27
        __asm _emit 0x6a
        __asm _emit 0x27
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 59 B9 11 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 FF 50 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 EB 50 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 94: mov dword ptr [ebp - 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 B7 24 12 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 3F BE 11 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 8C 25 12 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 2B 45 98: sub eax, dword ptr [ebp - 0x68]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 80: mov dword ptr [ebp - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 8C 25 12 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 2B 45 94: sub eax, dword ptr [ebp - 0x6c]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 85 7C FF FF FF: mov dword ptr [ebp - 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 82 DC 01 00 00: mov eax, dword ptr [edx + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 7C FF FF FF: mov ecx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 80: mov edx, dword ptr [ebp - 0x80]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x80
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4D 9C: lea ecx, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 A1 50 12 00: call 0x534e09
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D 9C: lea ecx, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 C0 8C 0D 00: call 0x4e8a37
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x40fd81
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 24 D5 11 00: call 0x52d2a5
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 81 C4 C4 00 00 00: add esp, 0xc4
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 55 50 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
