// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F873 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0054f873_0054F873() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 38 00: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x54f88e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x54f91a
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7A: push 0x7a
        __asm _emit 0x6a
        __asm _emit 0x7a
        ; Exact mapped bytes 68 90 BF 67 00: push 0x67bf90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C2 A9 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C1 50: add ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x50
        ; Exact mapped bytes E8 AD 75 FD FF: call 0x526e5a
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 7D FC 00: cmp dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x54f8c7
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 7C: push 0x7c
        __asm _emit 0x6a
        __asm _emit 0x7c
        ; Exact mapped bytes 68 90 BF 67 00: push 0x67bf90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 7E 94 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x54f8c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E3: jne 0x54f8b0
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 68 A8 BF 67 00: push 0x67bfa8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 B6 A8 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x54f8ef
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 7D: push 0x7d
        __asm _emit 0x6a
        __asm _emit 0x7d
        ; Exact mapped bytes 68 90 BF 67 00: push 0x67bf90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 94 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x54f8ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 D8: jne 0x54f8cd
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 1C: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 45 F8: cmp eax, dword ptr [ebp - 8]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 74 11: je 0x54f911
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 6A 7E: push 0x7e
        __asm _emit 0x6a
        __asm _emit 0x7e
        ; Exact mapped bytes 68 90 BF 67 00: push 0x67bf90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 94 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x54f911
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 DE: jne 0x54f8f5
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
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
