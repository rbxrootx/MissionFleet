// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FBEF0 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_588fbef0() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 00 1F 00 00: mov ecx, 0x1f00
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x588fc043
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x588fc043
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes E8 53 1C 00 00: call 0x588fdb80
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes E8 4B 1C 00 00: call 0x588fdb80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 43 04: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5B 1C 00 00: call 0x588fdba0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4B 08: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes E8 4F 1C 00 00: call 0x588fdba0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F B7 6C 24 14: movzx ebp, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B6 43 03: movzx eax, byte ptr [ebx + 3]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x43
        __asm _emit 0x03
        ; Exact mapped bytes 0F B6 4B 02: movzx ecx, byte ptr [ebx + 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4b
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes E8 02 31 00 00: call 0x588ff070
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 44 24 18: movzx eax, word ptr [esp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 38: jle 0x588fbfaf
        __asm _emit 0x7e
        __asm _emit 0x38
        ; Exact mapped bytes 8B 7C 24 24: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 31 00 00: call 0x588ff0f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588fbf9d
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D5 C0 FF FF: call 0x588f8070
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x588fbfa5
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes E8 3B 40 00 00: call 0x588fffe0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 38: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x38
        ; Exact mapped bytes 83 6C 24 14 01: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 75 D1: jne 0x588fbf80
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes 0F B7 3B: movzx edi, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 BE 90 00 00 00: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6F 35 00 00: call 0x588ff530
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F6 29 00 00: call 0x588fe9c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 90 00 00 00: mov edi, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7C 07: jl 0x588fbfe4
        __asm _emit 0x7c
        __asm _emit 0x07
        ; Exact mapped bytes B9 02 00 00 00: mov ecx, 2
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x588fbff5
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 8D 45 01: lea eax, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x01
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 05: jne 0x588fbff5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 68: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x68
        ; Exact mapped bytes E8 22 34 00 00: call 0x588ff420
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 7C 00 FF: lea edi, [eax + eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes E8 5F 2B 00 00: call 0x588feb70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E7 04: shl edi, 4
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0x04
        ; Exact mapped bytes 03 7C 24 20: add edi, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 8B C4: mov eax, esp
        __asm _emit 0x8b
        __asm _emit 0xc4
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 08: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 89 48 08: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 0C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 29 00 00: call 0x588fe9d0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
