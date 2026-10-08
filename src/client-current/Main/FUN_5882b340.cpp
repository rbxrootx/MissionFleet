// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 443 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882b340.

// Ghidra body range 0x5882B340..0x5882B4FB; 443 mapped bytes.
extern "C" __declspec(naked) void FUN_5882b340_segment_00() {
    __asm {
        // 0x5882B340: sub esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B346: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882B34B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882B34D: mov dword ptr [esp + 0x83c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B354: mov eax, dword ptr [esp + 0x848]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B35B: push ebx
        __asm _emit 0x53
        // 0x5882B35C: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882B35E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5882B361: jne 0x5882b3c3
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x5882B363: mov ecx, dword ptr [ebx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B369: mov eax, dword ptr [esp + 0x848]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B370: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5882B372: je 0x5882b3a7
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5882B374: cmp eax, dword ptr [ebx + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B37A: je 0x5882b3a7
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5882B37C: cmp eax, dword ptr [ebx + 0x90]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B382: je 0x5882b390
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5882B384: cmp eax, dword ptr [ebx + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B38A: jne 0x5882b4e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B390: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5882B393: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882B395: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5882B398: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B39A: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B39F: push ebx
        __asm _emit 0x53
        // 0x5882B3A0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882B3A2: jmp 0x5882b4e1
        __asm _emit 0xE9
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3A7: cmp byte ptr [ebx + 0x60], 0
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5882B3AB: jne 0x5882b3b7
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5882B3AD: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5882B3AF: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5882B3B2: add al, 2
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x5882B3B4: mov byte ptr [ebx + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x5882B3B7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882B3B9: call 0x5882b040
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882B3BE: jmp 0x5882b4e1
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3C3: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3C8: jne 0x5882b4e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3CE: mov ecx, dword ptr [esp + 0x848]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3D5: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882B3DB: cmp ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x8A
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3E1: jne 0x5882b4e1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3E7: mov al, byte ptr [ebx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x5882B3EA: push esi
        __asm _emit 0x56
        // 0x5882B3EB: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5882B3ED: jne 0x5882b45c
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x5882B3EF: mov eax, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x5882B3F2: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B3F8: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882B3FE: push edi
        __asm _emit 0x57
        // 0x5882B3FF: push ecx
        __asm _emit 0x51
        // 0x5882B400: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882B404: push edx
        __asm _emit 0x52
        // 0x5882B405: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B407: mov eax, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x7C
        // 0x5882B40A: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B410: push ecx
        __asm _emit 0x51
        // 0x5882B411: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5882B415: push edx
        __asm _emit 0x52
        // 0x5882B416: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B418: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B41E: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B424: push ecx
        __asm _emit 0x51
        // 0x5882B425: lea edx, [esp + 0x31]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x5882B429: push edx
        __asm _emit 0x52
        // 0x5882B42A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B42C: mov eax, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B432: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B438: push ecx
        __asm _emit 0x51
        // 0x5882B439: lea edx, [esp + 0x49]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x49
        // 0x5882B43D: push edx
        __asm _emit 0x52
        // 0x5882B43E: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B440: mov eax, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B446: mov esi, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B44C: mov edi, dword ptr [ebx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B452: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B457: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882B459: pop edi
        __asm _emit 0x5F
        // 0x5882B45A: jmp 0x5882b4a2
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5882B45C: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882B45E: jne 0x5882b4a2
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5882B460: mov ecx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B466: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B46C: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882B472: push edx
        __asm _emit 0x52
        // 0x5882B473: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882B477: push eax
        __asm _emit 0x50
        // 0x5882B478: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B47A: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B480: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B486: push edx
        __asm _emit 0x52
        // 0x5882B487: lea eax, [esp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x5882B48B: push eax
        __asm _emit 0x50
        // 0x5882B48C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B48E: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B494: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B49A: push edx
        __asm _emit 0x52
        // 0x5882B49B: lea eax, [esp + 0x45]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x5882B49F: push eax
        __asm _emit 0x50
        // 0x5882B4A0: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5882B4A2: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882B4A8: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4AE: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4B4: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x5882B4B7: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4BD: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882B4C3: push edx
        __asm _emit 0x52
        // 0x5882B4C4: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882B4C8: push eax
        __asm _emit 0x50
        // 0x5882B4C9: call 0x587b9380
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xDE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882B4CE: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5882B4D1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5882B4D3: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5882B4D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B4D8: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4DD: push ebx
        __asm _emit 0x53
        // 0x5882B4DE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882B4E0: pop esi
        __asm _emit 0x5E
        // 0x5882B4E1: mov ecx, dword ptr [esp + 0x840]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4E8: pop ebx
        __asm _emit 0x5B
        // 0x5882B4E9: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882B4EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882B4ED: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882B4F2: add esp, 0x840
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B4F8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
