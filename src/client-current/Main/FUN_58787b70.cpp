// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1198 bytes in 1 exact ranges.
// Source symbol alias: FUN_58787b70.

// Ghidra body range 0x58787B70..0x5878801E; 1198 mapped bytes.
extern "C" __declspec(naked) void FUN_58787b70_segment_00() {
    __asm {
        // 0x58787B70: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58787B72: push 0x5897fa4c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xFA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58787B77: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B7D: push eax
        __asm _emit 0x50
        // 0x58787B7E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58787B81: push ebx
        __asm _emit 0x53
        // 0x58787B82: push ebp
        __asm _emit 0x55
        // 0x58787B83: push esi
        __asm _emit 0x56
        // 0x58787B84: push edi
        __asm _emit 0x57
        // 0x58787B85: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58787B8A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58787B8C: push eax
        __asm _emit 0x50
        // 0x58787B8D: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58787B91: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787B97: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58787B99: cmp dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x58787B9E: je 0x58788008
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BA4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58787BA6: cmp byte ptr [esi + 0x88c], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BAD: jbe 0x58788008
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BB3: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58787BB7: lea ecx, [esi + 0x894]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BBD: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787BC1: mov eax, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BC7: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58787BCB: movzx ebx, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x9B
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BD2: lea edx, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xB8
        // 0x58787BD5: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58787BD7: mov eax, dword ptr [eax + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BDD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58787BDF: je 0x58787ff1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787BE5: mov eax, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0xFC
        // 0x58787BE8: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58787BEA: sub ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58787BEE: sub eax, dword ptr [esp + 0x38]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787BF2: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58787BF4: imul ebx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD9
        // 0x58787BF7: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58787BFA: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787BFE: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787C02: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58787C06: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787C0A: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x58787C0C: mov ecx, dword ptr [edx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C12: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58787C14: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787C18: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58787C1A: je 0x58787ddc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C20: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x58787C23: je 0x58787ddc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C29: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C2E: jge 0x58787d0b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C34: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787C37: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787C3B: push eax
        __asm _emit 0x50
        // 0x58787C3C: push ecx
        __asm _emit 0x51
        // 0x58787C3D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787C43: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58787C45: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x4E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58787C4A: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58787C4D: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C53: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x58787C56: push eax
        __asm _emit 0x50
        // 0x58787C57: push eax
        __asm _emit 0x50
        // 0x58787C58: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787C5D: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C62: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x4F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787C67: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787C6A: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58787C6E: mov dword ptr [esp + 0x28], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787C78: je 0x58787cea
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x58787C7A: mov eax, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C80: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58787C83: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58787C86: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58787C89: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787C8E: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787C98: jle 0x58787cb4
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58787C9A: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CA1: je 0x58787cb4
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58787CA3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CA9: add eax, 0x3380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CAE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787CB2: jmp 0x58787cbc
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58787CB4: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CBC: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58787CBE: push ecx
        __asm _emit 0x51
        // 0x58787CBF: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x4F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787CC4: cdq
        __asm _emit 0x99
        // 0x58787CC5: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CCA: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58787CCC: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787CD0: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787CD3: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x58787CD5: mov edx, dword ptr [esi + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CDB: push ebx
        __asm _emit 0x53
        // 0x58787CDC: push edx
        __asm _emit 0x52
        // 0x58787CDD: push eax
        __asm _emit 0x50
        // 0x58787CDE: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58787CE0: push ecx
        __asm _emit 0x51
        // 0x58787CE1: mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58787CE5: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x30
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58787CEA: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CF0: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58787CF3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58787CF7: movzx edx, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787CFE: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787D06: jmp 0x58787fae
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D0B: cmp eax, 0x2710
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D10: jge 0x58787fd3
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D16: fild dword ptr [esp + 0x30]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787D1A: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x4F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787D1F: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x4F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787D24: push eax
        __asm _emit 0x50
        // 0x58787D25: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58787D28: cdq
        __asm _emit 0x99
        // 0x58787D29: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58787D2B: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58787D2D: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58787D2F: push eax
        __asm _emit 0x50
        // 0x58787D30: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x42
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58787D35: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787D3B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58787D3E: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58787D40: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787D44: push eax
        __asm _emit 0x50
        // 0x58787D45: push ebx
        __asm _emit 0x53
        // 0x58787D46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58787D48: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x4D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58787D4D: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787D50: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D56: push ecx
        __asm _emit 0x51
        // 0x58787D57: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x58787D5A: push ebx
        __asm _emit 0x53
        // 0x58787D5B: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787D60: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D65: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x4E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787D6A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787D6D: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58787D71: mov dword ptr [esp + 0x28], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787D7B: je 0x58787cea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787D81: mov eax, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D87: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58787D8A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58787D8D: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58787D90: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787D95: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787D9F: jle 0x58787dbb
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58787DA1: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DA8: je 0x58787dbb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58787DAA: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DB0: add eax, 0x3380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DB5: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787DB9: jmp 0x58787dc3
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58787DBB: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DC3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58787DC5: push ecx
        __asm _emit 0x51
        // 0x58787DC6: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x4E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787DCB: cdq
        __asm _emit 0x99
        // 0x58787DCC: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DD1: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58787DD3: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787DD7: jmp 0x58787cd0
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787DDC: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DE1: jge 0x58787e8c
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787DE7: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787DEA: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787DEE: push eax
        __asm _emit 0x50
        // 0x58787DEF: push ecx
        __asm _emit 0x51
        // 0x58787DF0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787DF6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58787DF8: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58787DFD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58787E00: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E06: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x58787E09: push eax
        __asm _emit 0x50
        // 0x58787E0A: push eax
        __asm _emit 0x50
        // 0x58787E0B: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787E10: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E15: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x4E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787E1A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787E1D: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58787E21: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E29: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787E2B: je 0x58787f71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E31: mov eax, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E37: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58787E3A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58787E3D: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58787E40: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787E45: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E4F: jle 0x58787e6b
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58787E51: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E58: je 0x58787e6b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58787E5A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E60: add eax, 0x3380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E65: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787E69: jmp 0x58787e73
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58787E6B: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E73: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58787E75: push ecx
        __asm _emit 0x51
        // 0x58787E76: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x4D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787E7B: cdq
        __asm _emit 0x99
        // 0x58787E7C: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E81: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58787E83: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787E87: jmp 0x58787f57
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E8C: cmp eax, 0xb9a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E91: jge 0x58787fd3
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787E97: fild dword ptr [esp + 0x30]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787E9B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x4D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787EA0: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x4D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787EA5: push eax
        __asm _emit 0x50
        // 0x58787EA6: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58787EA9: cdq
        __asm _emit 0x99
        // 0x58787EAA: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58787EAC: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58787EAE: push 0xda
        __asm _emit 0x68
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787EB3: push eax
        __asm _emit 0x50
        // 0x58787EB4: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58787EB9: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787EBF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58787EC2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58787EC4: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787EC8: push eax
        __asm _emit 0x50
        // 0x58787EC9: push ebx
        __asm _emit 0x53
        // 0x58787ECA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58787ECC: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x4B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58787ED1: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787ED4: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787EDA: push ecx
        __asm _emit 0x51
        // 0x58787EDB: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x58787EDE: push ebx
        __asm _emit 0x53
        // 0x58787EDF: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787EE4: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787EE9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x4D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787EEE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58787EF1: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58787EF5: mov dword ptr [esp + 0x28], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787EFD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58787EFF: je 0x58787f71
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x58787F01: mov eax, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F07: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58787F0A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58787F0D: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58787F10: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787F15: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F1F: jle 0x58787f3b
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58787F21: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F28: je 0x58787f3b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58787F2A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F30: add eax, 0x3380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F35: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58787F39: jmp 0x58787f43
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58787F3B: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F43: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58787F45: push ecx
        __asm _emit 0x51
        // 0x58787F46: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x4C
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787F4B: cdq
        __asm _emit 0x99
        // 0x58787F4C: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F51: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58787F53: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58787F57: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58787F5A: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x58787F5C: mov edx, dword ptr [esi + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F62: push ebx
        __asm _emit 0x53
        // 0x58787F63: push edx
        __asm _emit 0x52
        // 0x58787F64: push eax
        __asm _emit 0x50
        // 0x58787F65: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58787F67: push ecx
        __asm _emit 0x51
        // 0x58787F68: mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58787F6C: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x2E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58787F71: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58787F75: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F7B: movzx ecx, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F82: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58787F85: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787F8D: cmp dword ptr [eax + 0xb8], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787F93: je 0x58787f9e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58787F95: push ebp
        __asm _emit 0x55
        // 0x58787F96: push ebx
        __asm _emit 0x53
        // 0x58787F97: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58787F99: call 0x587870b0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787F9E: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FA4: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58787FA7: movzx edx, byte ptr [ebx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FAE: mov ecx, dword ptr [eax + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FB4: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58787FB6: je 0x58787fd3
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58787FB8: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787FBE: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58787FC1: movzx edx, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FC8: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58787FCA: jne 0x58787fd3
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58787FCC: mov byte ptr [eax + 0xce], 1
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58787FD3: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58787FD7: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FDE: mov edx, dword ptr [esi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FE4: push ecx
        __asm _emit 0x51
        // 0x58787FE5: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x58787FE8: call 0x58780640
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58787FED: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787FF1: movzx eax, byte ptr [esi + 0x88c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787FF8: inc edi
        __asm _emit 0x47
        // 0x58787FF9: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58787FFC: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58787FFE: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788002: jl 0x58787bc1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788008: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878800C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788013: pop ecx
        __asm _emit 0x59
        // 0x58788014: pop edi
        __asm _emit 0x5F
        // 0x58788015: pop esi
        __asm _emit 0x5E
        // 0x58788016: pop ebp
        __asm _emit 0x5D
        // 0x58788017: pop ebx
        __asm _emit 0x5B
        // 0x58788018: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5878801B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
