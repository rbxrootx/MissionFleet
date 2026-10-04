// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58895A70 .. +0x588 bytes.
// Source symbol alias: FUN_58895a70.
extern "C" __declspec(naked) void FUN_58895a70() {
    __asm {
        // 0x58895A70: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58895A72: push 0x589871f6
        __asm _emit 0x68
        __asm _emit 0xF6
        __asm _emit 0x71
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58895A77: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A7D: push eax
        __asm _emit 0x50
        // 0x58895A7E: push ecx
        __asm _emit 0x51
        // 0x58895A7F: push ebx
        __asm _emit 0x53
        // 0x58895A80: push ebp
        __asm _emit 0x55
        // 0x58895A81: push esi
        __asm _emit 0x56
        // 0x58895A82: push edi
        __asm _emit 0x57
        // 0x58895A83: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58895A88: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58895A8A: push eax
        __asm _emit 0x50
        // 0x58895A8B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58895A8F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A95: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58895A97: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58895A9B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895A9F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58895AA3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58895AA7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58895AAB: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58895AAF: push eax
        __asm _emit 0x50
        // 0x58895AB0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58895AB4: push ecx
        __asm _emit 0x51
        // 0x58895AB5: push edx
        __asm _emit 0x52
        // 0x58895AB6: push ebp
        __asm _emit 0x55
        // 0x58895AB7: push edi
        __asm _emit 0x57
        // 0x58895AB8: push eax
        __asm _emit 0x50
        // 0x58895AB9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58895ABB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xD6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895AC0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58895AC6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58895ACB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58895ACD: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58895AD0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58895AD3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895ADA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58895ADD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895ADF: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895AE3: mov dword ptr [esi], 0x589a007c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58895AE9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895AEE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895AF1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895AF5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58895AFA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895AFC: je 0x58895b3a
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58895AFE: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895B04: cmp dword ptr [ecx + 0x164], 0x21a
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B0E: jle 0x58895b26
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895B10: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B16: je 0x58895b26
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895B18: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B1E: mov ecx, dword ptr [ecx + 0x868]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B24: jmp 0x58895b28
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895B26: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895B28: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B2D: push ebp
        __asm _emit 0x55
        // 0x58895B2E: push edi
        __asm _emit 0x57
        // 0x58895B2F: push ecx
        __asm _emit 0x51
        // 0x58895B30: push esi
        __asm _emit 0x56
        // 0x58895B31: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895B33: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895B38: jmp 0x58895b3c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895B3A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895B3C: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895B3E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895B42: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58895B45: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x71
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895B4A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895B4D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895B51: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58895B56: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895B58: je 0x58895b96
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58895B5A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895B60: cmp dword ptr [ecx + 0x164], 0x21b
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B6A: jle 0x58895b82
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895B6C: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B72: je 0x58895b82
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895B74: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B7A: mov ecx, dword ptr [edx + 0x86c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x6C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B80: jmp 0x58895b84
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895B82: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895B84: push 0x2328
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895B89: push ebp
        __asm _emit 0x55
        // 0x58895B8A: push edi
        __asm _emit 0x57
        // 0x58895B8B: push ecx
        __asm _emit 0x51
        // 0x58895B8C: push esi
        __asm _emit 0x56
        // 0x58895B8D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895B8F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xC0
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895B94: jmp 0x58895b98
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895B96: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895B98: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58895B9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895B9F: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895BA3: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58895BA6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xD1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895BAB: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58895BAE: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BB3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895BB7: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895BB9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895BBE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895BC1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895BC5: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58895BCA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895BCC: je 0x58895c10
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58895BCE: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895BD4: cmp dword ptr [ecx + 0x164], 0x21e
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BDE: jle 0x58895bf6
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895BE0: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BE6: je 0x58895bf6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895BE8: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BEE: mov ecx, dword ptr [edx + 0x878]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BF4: jmp 0x58895bf8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895BF6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895BF8: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895BFD: lea edx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58895C00: push edx
        __asm _emit 0x52
        // 0x58895C01: lea edx, [edi + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x7E
        // 0x58895C04: push edx
        __asm _emit 0x52
        // 0x58895C05: push ecx
        __asm _emit 0x51
        // 0x58895C06: push esi
        __asm _emit 0x56
        // 0x58895C07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895C09: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xC0
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895C0E: jmp 0x58895c12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895C10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895C12: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895C14: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895C18: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58895C1B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x70
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895C20: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895C23: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895C27: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58895C2C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895C2E: je 0x58895c72
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58895C30: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895C36: cmp dword ptr [ecx + 0x164], 0x21f
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895C40: jle 0x58895c58
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895C42: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895C48: je 0x58895c58
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895C4A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895C50: mov ecx, dword ptr [ecx + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895C56: jmp 0x58895c5a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895C58: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895C5A: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895C5F: lea edx, [ebp + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x21
        // 0x58895C62: push edx
        __asm _emit 0x52
        // 0x58895C63: lea edx, [edi + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x7E
        // 0x58895C66: push edx
        __asm _emit 0x52
        // 0x58895C67: push ecx
        __asm _emit 0x51
        // 0x58895C68: push esi
        __asm _emit 0x56
        // 0x58895C69: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895C6B: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xBF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895C70: jmp 0x58895c74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895C72: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895C74: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58895C76: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895C7A: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58895C7D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x6F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895C82: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895C85: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895C89: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58895C8E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895C90: je 0x58895cd4
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58895C92: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895C98: cmp dword ptr [ecx + 0x164], 0x21d
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CA2: jle 0x58895cba
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895CA4: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CAA: je 0x58895cba
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895CAC: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CB2: mov ecx, dword ptr [ecx + 0x874]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CB8: jmp 0x58895cbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895CBA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895CBC: push 0x271a
        __asm _emit 0x68
        __asm _emit 0x1A
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CC1: lea edx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x01
        // 0x58895CC4: push edx
        __asm _emit 0x52
        // 0x58895CC5: lea edx, [edi + 0x65]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x65
        // 0x58895CC8: push edx
        __asm _emit 0x52
        // 0x58895CC9: push ecx
        __asm _emit 0x51
        // 0x58895CCA: push esi
        __asm _emit 0x56
        // 0x58895CCB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895CCD: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xBF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895CD2: jmp 0x58895cd6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895CD4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895CD6: push ebx
        __asm _emit 0x53
        // 0x58895CD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895CD9: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895CDD: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58895CE0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xD0
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895CE5: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58895CE8: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CED: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895CF1: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895CF6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x6F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895CFB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895CFE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895D02: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58895D07: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895D09: je 0x58895d4a
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58895D0B: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895D11: cmp dword ptr [ecx + 0x160], 0xaf
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D1B: jle 0x58895d33
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895D1D: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D23: je 0x58895d33
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895D25: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D2B: add ecx, 0x2bc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D31: jmp 0x58895d35
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895D33: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895D35: lea edx, [ebp + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x0B
        // 0x58895D38: push edx
        __asm _emit 0x52
        // 0x58895D39: lea edx, [edi + 0x7a]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x7A
        // 0x58895D3C: push edx
        __asm _emit 0x52
        // 0x58895D3D: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58895D3F: push ecx
        __asm _emit 0x51
        // 0x58895D40: push esi
        __asm _emit 0x56
        // 0x58895D41: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895D43: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58895D48: jmp 0x58895d4c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895D4A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895D4C: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D51: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895D55: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D5B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x6E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895D60: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895D63: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895D67: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58895D6C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895D6E: je 0x58895db2
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58895D70: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895D76: cmp dword ptr [ecx + 0x160], 0xaf
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D80: jle 0x58895d98
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895D82: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D88: je 0x58895d98
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895D8A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D90: add edx, 0x2bc0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895D96: jmp 0x58895d9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895D98: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58895D9A: lea ecx, [ebp + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0A
        // 0x58895D9D: push ecx
        __asm _emit 0x51
        // 0x58895D9E: add edi, 0xcb
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DA4: push edi
        __asm _emit 0x57
        // 0x58895DA5: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58895DA7: push edx
        __asm _emit 0x52
        // 0x58895DA8: push esi
        __asm _emit 0x56
        // 0x58895DA9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895DAB: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58895DB0: jmp 0x58895db4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895DB2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895DB4: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DBA: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DC0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58895DC3: mov edx, 0x271b
        __asm _emit 0xBA
        __asm _emit 0x1B
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DC8: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58895DCC: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58895DD0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58895DD2: je 0x58895dda
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58895DD4: push edi
        __asm _emit 0x57
        // 0x58895DD5: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xD1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895DDA: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58895DDD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58895DDF: je 0x58895de7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58895DE1: push edi
        __asm _emit 0x57
        // 0x58895DE2: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xD0
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895DE7: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DED: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DF2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xCF
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895DF7: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895DFD: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E02: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895E06: mov edi, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E0C: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58895E0F: mov edx, 0x271b
        __asm _emit 0xBA
        __asm _emit 0x1B
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E14: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58895E18: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58895E1A: je 0x58895e22
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58895E1C: push edi
        __asm _emit 0x57
        // 0x58895E1D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xD1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895E22: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58895E25: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58895E27: je 0x58895e2f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58895E29: push edi
        __asm _emit 0x57
        // 0x58895E2A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xD0
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895E2F: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E35: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E3A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xCE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895E3F: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E45: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E4A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895E4E: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x58895E50: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x6D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895E55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895E58: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58895E5C: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58895E61: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895E63: je 0x58895eb2
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58895E65: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895E6B: cmp dword ptr [ecx + 0x164], 0x21c
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E75: jle 0x58895e8d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895E77: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E7D: je 0x58895e8d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895E7F: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E85: mov ecx, dword ptr [edx + 0x870]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E8B: jmp 0x58895e8f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895E8D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895E8F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58895E93: push 0x3a98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895E98: add ebp, 0x1a
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x1A
        // 0x58895E9B: push ebp
        __asm _emit 0x55
        // 0x58895E9C: add edx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7E
        // 0x58895E9F: push edx
        __asm _emit 0x52
        // 0x58895EA0: push ecx
        __asm _emit 0x51
        // 0x58895EA1: push esi
        __asm _emit 0x56
        // 0x58895EA2: push ebx
        __asm _emit 0x53
        // 0x58895EA3: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895EA8: push ebx
        __asm _emit 0x53
        // 0x58895EA9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895EAB: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895EB0: jmp 0x58895eb4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895EB2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895EB4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895EB9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895EBB: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895EBF: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58895EC2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xCE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895EC7: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58895ECA: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895ECF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895ED3: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x58895ED5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x6D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895EDA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895EDD: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58895EE1: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58895EE6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895EE8: je 0x58895f39
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58895EEA: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895EF0: cmp dword ptr [ecx + 0x164], 0x218
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895EFA: jle 0x58895f12
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895EFC: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F02: je 0x58895f12
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895F04: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F0A: mov ecx, dword ptr [edx + 0x860]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F10: jmp 0x58895f14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895F12: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895F14: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58895F17: push 0x3a98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F1C: add edx, 0x29
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x29
        // 0x58895F1F: push edx
        __asm _emit 0x52
        // 0x58895F20: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58895F23: add edx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7E
        // 0x58895F26: push edx
        __asm _emit 0x52
        // 0x58895F27: push ecx
        __asm _emit 0x51
        // 0x58895F28: push esi
        __asm _emit 0x56
        // 0x58895F29: push ebx
        __asm _emit 0x53
        // 0x58895F2A: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F2F: push ebx
        __asm _emit 0x53
        // 0x58895F30: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895F32: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x88
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895F37: jmp 0x58895f3b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895F39: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895F3B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F40: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895F42: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58895F46: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58895F49: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xCD
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58895F4E: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58895F51: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F56: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58895F5A: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F5F: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F65: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58895F69: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x58895F6B: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F71: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F77: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x6C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58895F7C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58895F7F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58895F83: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58895F88: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58895F8A: je 0x58895fdb
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58895F8C: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895F92: cmp dword ptr [ecx + 0x164], 0x219
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895F9C: jle 0x58895fb4
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58895F9E: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FA4: je 0x58895fb4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895FA6: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FAC: mov ecx, dword ptr [ecx + 0x864]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FB2: jmp 0x58895fb6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895FB4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58895FB6: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58895FB9: push 0x3a99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FBE: add edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1F
        // 0x58895FC1: push edx
        __asm _emit 0x52
        // 0x58895FC2: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58895FC5: add edx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7E
        // 0x58895FC8: push edx
        __asm _emit 0x52
        // 0x58895FC9: push ecx
        __asm _emit 0x51
        // 0x58895FCA: push esi
        __asm _emit 0x56
        // 0x58895FCB: push ebx
        __asm _emit 0x53
        // 0x58895FCC: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FD1: push ebx
        __asm _emit 0x53
        // 0x58895FD2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58895FD4: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x88
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895FD9: jmp 0x58895fdd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895FDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895FDD: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58895FE0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58895FE2: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58895FE6: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895FED: pop ecx
        __asm _emit 0x59
        // 0x58895FEE: pop edi
        __asm _emit 0x5F
        // 0x58895FEF: pop esi
        __asm _emit 0x5E
        // 0x58895FF0: pop ebp
        __asm _emit 0x5D
        // 0x58895FF1: pop ebx
        __asm _emit 0x5B
        // 0x58895FF2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58895FF5: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
