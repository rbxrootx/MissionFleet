// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 300 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774a90.

// Ghidra body range 0x58774A90..0x58774BBC; 300 mapped bytes.
extern "C" __declspec(naked) void FUN_58774a90_segment_00() {
    __asm {
        // 0x58774A90: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774A93: push ebx
        __asm _emit 0x53
        // 0x58774A94: push ebp
        __asm _emit 0x55
        // 0x58774A95: push esi
        __asm _emit 0x56
        // 0x58774A96: push edi
        __asm _emit 0x57
        // 0x58774A97: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58774A99: call 0x58772720
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774A9E: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58774AA0: je 0x58774bb2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774AA6: cmp dword ptr [0x589cfc90], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58774AAD: jne 0x58774ad6
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58774AAF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774AB1: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774AB6: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58774AB8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774ABA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774ABC: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58774AC1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58774AC3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774AC5: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774ACA: push eax
        __asm _emit 0x50
        // 0x58774ACB: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774AD1: mov dword ptr [0x589cfc90], eax
        __asm _emit 0xA3
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774AD6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774AD8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774ADA: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774ADF: push eax
        __asm _emit 0x50
        // 0x58774AE0: call 0x5897ceb6
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774AE5: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58774AE8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774AEB: test eax, 0x10000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58774AF0: je 0x58774af9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58774AF2: push 0x589963b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774AF7: jmp 0x58774b3d
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x58774AF9: test eax, 0x20000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58774AFE: je 0x58774b07
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58774B00: push 0x58996444
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774B05: jmp 0x58774b3d
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58774B07: test eax, 0x80000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58774B0C: je 0x58774b15
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58774B0E: push 0x5899643c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774B13: jmp 0x58774b3d
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58774B15: test eax, 0x100000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58774B1A: je 0x58774b23
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58774B1C: push 0x58996434
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774B21: jmp 0x58774b3d
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58774B23: test eax, 0x200000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774B28: je 0x58774b31
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58774B2A: push 0x5899642c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774B2F: jmp 0x58774b3d
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58774B31: test eax, 0x40000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58774B36: je 0x58774b8f
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x58774B38: push 0x58996424
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774B3D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774B3F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774B41: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774B46: push eax
        __asm _emit 0x50
        // 0x58774B47: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774B49: call 0x58773ab0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774B4E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58774B50: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58774B53: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774B55: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774B58: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774B5A: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774B5F: lea esi, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58774B63: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774B6B: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774B6D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774B6F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774B71: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774B73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774B75: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774B77: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774B7C: push eax
        __asm _emit 0x50
        // 0x58774B7D: call 0x5897ceb6
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774B82: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774B85: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58774B87: pop edi
        __asm _emit 0x5F
        // 0x58774B88: pop esi
        __asm _emit 0x5E
        // 0x58774B89: pop ebp
        __asm _emit 0x5D
        // 0x58774B8A: pop ebx
        __asm _emit 0x5B
        // 0x58774B8B: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58774B8E: ret
        __asm _emit 0xC3
        // 0x58774B8F: mov ebx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x04
        // 0x58774B92: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58774B94: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774B96: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774B99: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774B9B: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774BA0: lea esi, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58774BA4: mov dword ptr [esp + 0x30], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774BAC: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774BAE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774BB0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774BB2: pop edi
        __asm _emit 0x5F
        // 0x58774BB3: pop esi
        __asm _emit 0x5E
        // 0x58774BB4: pop ebp
        __asm _emit 0x5D
        // 0x58774BB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58774BB7: pop ebx
        __asm _emit 0x5B
        // 0x58774BB8: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58774BBB: ret
        __asm _emit 0xC3
    }
}
