// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881A8B0 .. +0x27A bytes.
// Source symbol alias: FUN_5881a8b0.
extern "C" __declspec(naked) void FUN_5881a8b0() {
    __asm {
        // 0x5881A8B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881A8B2: push 0x5898349f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881A8B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A8BD: push eax
        __asm _emit 0x50
        // 0x5881A8BE: push ecx
        __asm _emit 0x51
        // 0x5881A8BF: push ebx
        __asm _emit 0x53
        // 0x5881A8C0: push ebp
        __asm _emit 0x55
        // 0x5881A8C1: push esi
        __asm _emit 0x56
        // 0x5881A8C2: push edi
        __asm _emit 0x57
        // 0x5881A8C3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881A8C8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881A8CA: push eax
        __asm _emit 0x50
        // 0x5881A8CB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881A8CF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A8D5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881A8D7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881A8DB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881A8DF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A8E3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881A8E7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881A8EB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881A8EF: push eax
        __asm _emit 0x50
        // 0x5881A8F0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881A8F4: push ecx
        __asm _emit 0x51
        // 0x5881A8F5: push edx
        __asm _emit 0x52
        // 0x5881A8F6: push edi
        __asm _emit 0x57
        // 0x5881A8F7: push ebx
        __asm _emit 0x53
        // 0x5881A8F8: push eax
        __asm _emit 0x50
        // 0x5881A8F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881A8FB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x88
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A900: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881A906: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881A90B: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5881A90E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881A910: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5881A913: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A91A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5881A91D: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A922: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881A926: mov dword ptr [esi], 0x5899d850
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881A92C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x23
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A931: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A934: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A938: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5881A93D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881A93F: je 0x5881a952
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5881A941: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881A943: push ebx
        __asm _emit 0x53
        // 0x5881A944: push 0x5899d86c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881A949: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881A94B: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x94
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5881A950: jmp 0x5881a954
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A952: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881A954: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881A958: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881A95B: lea ebp, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x64
        // 0x5881A95E: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A966: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881A968: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x22
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A96D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881A96F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A972: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881A976: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5881A97B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881A97D: je 0x5881a9a2
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5881A97F: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881A983: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881A987: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881A989: push ebx
        __asm _emit 0x53
        // 0x5881A98A: push ebx
        __asm _emit 0x53
        // 0x5881A98B: push ecx
        __asm _emit 0x51
        // 0x5881A98C: push edx
        __asm _emit 0x52
        // 0x5881A98D: push esi
        __asm _emit 0x56
        // 0x5881A98E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881A990: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x88
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A995: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881A99B: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5881A99E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881A9A0: jmp 0x5881a9a4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881A9A2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881A9A4: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A9A9: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881A9AD: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5881A9B0: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x83
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A9B5: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5881A9B8: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881A9BD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881A9C1: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5881A9C4: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x5881A9C9: jne 0x5881a966
        __asm _emit 0x75
        __asm _emit 0x9B
        // 0x5881A9CB: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5881A9CE: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881A9D3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x83
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A9D8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881A9DA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x22
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881A9DF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881A9E1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881A9E4: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881A9E8: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5881A9ED: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881A9EF: je 0x5881aa0a
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5881A9F1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881A9F3: push ebx
        __asm _emit 0x53
        // 0x5881A9F4: push ebx
        __asm _emit 0x53
        // 0x5881A9F5: push ebx
        __asm _emit 0x53
        // 0x5881A9F6: push ebx
        __asm _emit 0x53
        // 0x5881A9F7: push esi
        __asm _emit 0x56
        // 0x5881A9F8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881A9FA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x87
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881A9FF: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881AA05: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5881AA08: jmp 0x5881aa0c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881AA0A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881AA0C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA11: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881AA15: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5881AA18: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x22
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881AA1D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881AA20: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881AA24: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5881AA29: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881AA2B: je 0x5881aa4a
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5881AA2D: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881AA33: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881AA39: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881AA3B: push ebx
        __asm _emit 0x53
        // 0x5881AA3C: push ebx
        __asm _emit 0x53
        // 0x5881AA3D: push ebx
        __asm _emit 0x53
        // 0x5881AA3E: push esi
        __asm _emit 0x56
        // 0x5881AA3F: push edx
        __asm _emit 0x52
        // 0x5881AA40: push ecx
        __asm _emit 0x51
        // 0x5881AA41: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881AA43: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881AA48: jmp 0x5881aa4c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881AA4A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881AA4C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5881AA4F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881AA54: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881AA58: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5881AA5B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x82
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881AA60: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5881AA63: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA68: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x82
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881AA6D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA72: mov dword ptr [esi + 0x74], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA79: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881AA7E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881AA81: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881AA85: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA8A: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881AA8E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881AA90: je 0x5881aae0
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5881AA92: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881AA98: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AA9E: jle 0x5881aab6
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881AAA0: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAA6: je 0x5881aab6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881AAA8: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAAE: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAB4: jmp 0x5881aab8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881AAB6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881AAB8: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881AABC: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x5881AABF: push edx
        __asm _emit 0x52
        // 0x5881AAC0: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881AAC4: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x5881AAC7: push edx
        __asm _emit 0x52
        // 0x5881AAC8: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881AACC: add edx, 0x1a4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAD2: push edx
        __asm _emit 0x52
        // 0x5881AAD3: push ecx
        __asm _emit 0x51
        // 0x5881AAD4: push esi
        __asm _emit 0x56
        // 0x5881AAD5: push ebx
        __asm _emit 0x53
        // 0x5881AAD6: push ebx
        __asm _emit 0x53
        // 0x5881AAD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881AAD9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x32
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881AADE: jmp 0x5881aae2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881AAE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881AAE2: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5881AAE5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAEA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881AAEE: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AAF3: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5881AAF7: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881AAFB: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AB00: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5881AB03: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AB08: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5881AB0B: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x5881AB0E: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881AB12: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881AB14: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881AB18: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881AB1F: pop ecx
        __asm _emit 0x59
        // 0x5881AB20: pop edi
        __asm _emit 0x5F
        // 0x5881AB21: pop esi
        __asm _emit 0x5E
        // 0x5881AB22: pop ebp
        __asm _emit 0x5D
        // 0x5881AB23: pop ebx
        __asm _emit 0x5B
        // 0x5881AB24: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881AB27: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
