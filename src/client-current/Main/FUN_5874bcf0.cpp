// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2505 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5874bcf0.

// Ghidra body range 0x5874BCF0..0x5874C28D; 1437 mapped bytes.
extern "C" __declspec(naked) void FUN_5874bcf0_segment_00() {
    __asm {
        // 0x5874BCF0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874BCF2: push 0x5897e49d
        __asm _emit 0x68
        __asm _emit 0x9D
        __asm _emit 0xE4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874BCF7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BCFD: push eax
        __asm _emit 0x50
        // 0x5874BCFE: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5874BD01: push ebx
        __asm _emit 0x53
        // 0x5874BD02: push ebp
        __asm _emit 0x55
        // 0x5874BD03: push esi
        __asm _emit 0x56
        // 0x5874BD04: push edi
        __asm _emit 0x57
        // 0x5874BD05: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874BD0A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874BD0C: push eax
        __asm _emit 0x50
        // 0x5874BD0D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874BD11: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD17: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874BD19: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874BD1D: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874BD21: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BD25: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874BD29: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874BD2D: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874BD31: push eax
        __asm _emit 0x50
        // 0x5874BD32: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874BD36: push ecx
        __asm _emit 0x51
        // 0x5874BD37: push edx
        __asm _emit 0x52
        // 0x5874BD38: push edi
        __asm _emit 0x57
        // 0x5874BD39: push ebp
        __asm _emit 0x55
        // 0x5874BD3A: push eax
        __asm _emit 0x50
        // 0x5874BD3B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874BD3D: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xA5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5874BD42: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874BD46: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x5874BD49: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5874BD4B: mov dword ptr [esi + 0x1c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD51: mov eax, 0x4b0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD56: mov ecx, 0x514
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD5B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874BD5D: mov dword ptr [esp + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874BD61: mov dword ptr [esi], 0x5898d008
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874BD67: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD6D: mov dword ptr [esi + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD73: mov word ptr [esi + 0x88], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD7A: mov word ptr [esi + 0x8a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD81: mov dword ptr [esi + 0xac], 8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD8B: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD91: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD97: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BD9D: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BDA3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x0E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874BDA8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874BDAB: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BDAF: mov byte ptr [esp + 0x2c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5874BDB4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874BDB6: je 0x5874bdf7
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5874BDB8: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874BDBE: cmp dword ptr [ecx + 0x164], 0x5f3
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BDC8: jle 0x5874bde0
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874BDCA: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BDD0: je 0x5874bde0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874BDD2: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BDD8: mov ecx, dword ptr [edx + 0x17cc]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xCC
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BDDE: jmp 0x5874bde2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BDE0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874BDE2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5874BDE5: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874BDE7: push edx
        __asm _emit 0x52
        // 0x5874BDE8: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5874BDEB: push edx
        __asm _emit 0x52
        // 0x5874BDEC: push ecx
        __asm _emit 0x51
        // 0x5874BDED: push esi
        __asm _emit 0x56
        // 0x5874BDEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BDF0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x5E
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874BDF5: jmp 0x5874bdf9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BDF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874BDF9: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874BDFE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BE00: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874BE04: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE0A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BE0F: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE15: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE1A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874BE1E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5874BE20: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x0E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874BE25: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874BE28: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BE2C: mov byte ptr [esp + 0x2c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x5874BE31: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874BE33: je 0x5874be71
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5874BE35: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874BE3B: cmp dword ptr [ecx + 0x160], 0xc7
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE45: jle 0x5874be5d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874BE47: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE4D: je 0x5874be5d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874BE4F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE55: add ecx, 0x31c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE5B: jmp 0x5874be5f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BE5D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874BE5F: movzx edx, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5874BE63: push edx
        __asm _emit 0x52
        // 0x5874BE64: push edi
        __asm _emit 0x57
        // 0x5874BE65: push ebp
        __asm _emit 0x55
        // 0x5874BE66: push ecx
        __asm _emit 0x51
        // 0x5874BE67: push esi
        __asm _emit 0x56
        // 0x5874BE68: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BE6A: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x8B
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874BE6F: jmp 0x5874be73
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BE71: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874BE73: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE79: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE7E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874BE82: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE88: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BE8D: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874BE91: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BE96: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874BE98: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x0D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874BE9D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874BEA0: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BEA4: mov byte ptr [esp + 0x2c], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x5874BEA9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874BEAB: je 0x5874bee9
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5874BEAD: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874BEB3: cmp dword ptr [ecx + 0x164], 0x5f4
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BEBD: jle 0x5874bed5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874BEBF: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BEC5: je 0x5874bed5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874BEC7: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BECD: mov ecx, dword ptr [edx + 0x17d0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD0
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BED3: jmp 0x5874bed7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BED5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874BED7: movzx edx, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5874BEDB: push edx
        __asm _emit 0x52
        // 0x5874BEDC: push edi
        __asm _emit 0x57
        // 0x5874BEDD: push ebp
        __asm _emit 0x55
        // 0x5874BEDE: push ecx
        __asm _emit 0x51
        // 0x5874BEDF: push esi
        __asm _emit 0x56
        // 0x5874BEE0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BEE2: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x5D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874BEE7: jmp 0x5874beeb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BEE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874BEEB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BEF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BEF2: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874BEF6: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BEFC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BF01: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF07: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF0C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874BF10: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF16: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF1B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874BF1F: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5874BF21: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x0D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874BF26: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874BF29: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BF2D: mov byte ptr [esp + 0x2c], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        // 0x5874BF32: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874BF34: je 0x5874bf66
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5874BF36: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874BF39: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5874BF3C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874BF3E: push ebx
        __asm _emit 0x53
        // 0x5874BF3F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5874BF44: lea edi, [ecx - 5]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0xFB
        // 0x5874BF47: push edi
        __asm _emit 0x57
        // 0x5874BF48: lea edi, [edx + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x7A
        __asm _emit 0x28
        // 0x5874BF4B: push edi
        __asm _emit 0x57
        // 0x5874BF4C: add ecx, -0x24
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xDC
        // 0x5874BF4F: push ecx
        __asm _emit 0x51
        // 0x5874BF50: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874BF56: add edx, -0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xD8
        // 0x5874BF59: push edx
        __asm _emit 0x52
        // 0x5874BF5A: push ecx
        __asm _emit 0x51
        // 0x5874BF5B: push ebx
        __asm _emit 0x53
        // 0x5874BF5C: push esi
        __asm _emit 0x56
        // 0x5874BF5D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BF5F: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x73
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874BF64: jmp 0x5874bf68
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BF66: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874BF68: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF6D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BF6F: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874BF73: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF79: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BF7E: mov edi, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BF84: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874BF88: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5874BF8B: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x5874BF8E: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874BF92: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5874BF96: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874BF98: je 0x5874bfa0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874BF9A: push edi
        __asm _emit 0x57
        // 0x5874BF9B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BFA0: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5874BFA3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874BFA5: je 0x5874bfad
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874BFA7: push edi
        __asm _emit 0x57
        // 0x5874BFA8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x6F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874BFAD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874BFAF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x0C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874BFB4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874BFB7: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874BFBB: mov byte ptr [esp + 0x2c], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x05
        // 0x5874BFC0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874BFC2: je 0x5874c006
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5874BFC4: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874BFCA: cmp dword ptr [ecx + 0x164], 0x164
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BFD4: jle 0x5874bfec
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874BFD6: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BFDC: je 0x5874bfec
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874BFDE: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BFE4: mov edx, dword ptr [edx + 0x590]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BFEA: jmp 0x5874bfee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874BFEC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874BFEE: movzx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5874BFF2: push ecx
        __asm _emit 0x51
        // 0x5874BFF3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874BFF6: push ecx
        __asm _emit 0x51
        // 0x5874BFF7: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874BFFA: push ecx
        __asm _emit 0x51
        // 0x5874BFFB: push edx
        __asm _emit 0x52
        // 0x5874BFFC: push esi
        __asm _emit 0x56
        // 0x5874BFFD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874BFFF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x5C
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874C004: jmp 0x5874c008
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C006: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C008: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C00D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C00F: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C013: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C019: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C01E: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C023: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x0C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C028: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C02B: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C02F: mov byte ptr [esp + 0x2c], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x06
        // 0x5874C034: mov edi, 0x2e
        __asm _emit 0xBF
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C039: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C03B: je 0x5874c07e
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5874C03D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C043: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C049: jle 0x5874c061
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874C04B: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C051: je 0x5874c061
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874C053: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C059: add ecx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C05F: jmp 0x5874c063
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C061: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874C063: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5874C066: sub edx, 0x17
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x17
        // 0x5874C069: push edx
        __asm _emit 0x52
        // 0x5874C06A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5874C06D: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5874C070: push edx
        __asm _emit 0x52
        // 0x5874C071: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5874C073: push ecx
        __asm _emit 0x51
        // 0x5874C074: push esi
        __asm _emit 0x56
        // 0x5874C075: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C077: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C07C: jmp 0x5874c080
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C07E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C080: lea ebp, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C086: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C08B: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C08F: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5874C092: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C097: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C09A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C09E: mov byte ptr [esp + 0x2c], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x5874C0A3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C0A5: je 0x5874c0e8
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5874C0A7: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C0AD: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0B3: jle 0x5874c0cb
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874C0B5: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0BB: je 0x5874c0cb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874C0BD: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0C3: add edx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0C9: jmp 0x5874c0cd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C0CB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874C0CD: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874C0D0: sub ecx, 0x17
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x17
        // 0x5874C0D3: push ecx
        __asm _emit 0x51
        // 0x5874C0D4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C0D7: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0C
        // 0x5874C0DA: push ecx
        __asm _emit 0x51
        // 0x5874C0DB: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5874C0DD: push edx
        __asm _emit 0x52
        // 0x5874C0DE: push esi
        __asm _emit 0x56
        // 0x5874C0DF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C0E1: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xB0
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C0E6: jmp 0x5874c0ea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C0E8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C0EA: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0EF: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C0F3: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C0F9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x0B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C0FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C101: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C105: mov byte ptr [esp + 0x2c], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x5874C10A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C10C: je 0x5874c14f
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5874C10E: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C114: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C11A: jle 0x5874c132
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874C11C: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C122: je 0x5874c132
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874C124: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C12A: add edx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C130: jmp 0x5874c134
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C132: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874C134: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874C137: sub ecx, 0x17
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x17
        // 0x5874C13A: push ecx
        __asm _emit 0x51
        // 0x5874C13B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C13E: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1E
        // 0x5874C141: push ecx
        __asm _emit 0x51
        // 0x5874C142: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5874C144: push edx
        __asm _emit 0x52
        // 0x5874C145: push esi
        __asm _emit 0x56
        // 0x5874C146: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C148: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xAF
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C14D: jmp 0x5874c151
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C14F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C151: mov edi, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C157: mov dx, word ptr [esp + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C15C: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C162: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5874C165: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874C169: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5874C16D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C16F: je 0x5874c177
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C171: push edi
        __asm _emit 0x57
        // 0x5874C172: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C177: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5874C17A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C17C: je 0x5874c184
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C17E: push edi
        __asm _emit 0x57
        // 0x5874C17F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C184: mov dword ptr [esp + 0x4c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C18C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5874C190: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5874C193: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C198: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C19D: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5874C1A0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5874C1A3: mov ax, word ptr [esp + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C1A8: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5874C1AC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C1AE: je 0x5874c1b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C1B0: push edi
        __asm _emit 0x57
        // 0x5874C1B1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C1B6: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5874C1B9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C1BB: je 0x5874c1c3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C1BD: push edi
        __asm _emit 0x57
        // 0x5874C1BE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C1C3: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5874C1C6: sub dword ptr [esp + 0x4c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        // 0x5874C1CB: jne 0x5874c190
        __asm _emit 0x75
        __asm _emit 0xC3
        // 0x5874C1CD: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C1D2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x0A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C1D7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C1DA: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C1DE: mov byte ptr [esp + 0x2c], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x09
        // 0x5874C1E3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C1E5: je 0x5874c229
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5874C1E7: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C1ED: cmp dword ptr [ecx + 0x160], 0x2e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2E
        // 0x5874C1F4: jle 0x5874c20c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874C1F6: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C1FC: je 0x5874c20c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874C1FE: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C204: add edx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C20A: jmp 0x5874c20e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C20C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874C20E: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874C211: sub ecx, 0x17
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x17
        // 0x5874C214: push ecx
        __asm _emit 0x51
        // 0x5874C215: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C218: sub ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x20
        // 0x5874C21B: push ecx
        __asm _emit 0x51
        // 0x5874C21C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874C21E: push edx
        __asm _emit 0x52
        // 0x5874C21F: push esi
        __asm _emit 0x56
        // 0x5874C220: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C222: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xAE
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C227: jmp 0x5874c22b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C229: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C22B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C230: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C232: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C236: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C23C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C241: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C247: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C24C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874C250: lea eax, [esi + 0x1d0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C256: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C25A: mov eax, 0xb0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C25F: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5874C261: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874C265: mov eax, 0xb8
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C26A: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5874C26C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874C270: mov eax, 0x10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C275: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5874C277: mov dword ptr [esp + 0x44], 0xa2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C27F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874C283: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C28B: jmp 0x5874c290
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5874C290..0x5874C6BC; 1068 mapped bytes.
extern "C" __declspec(naked) void FUN_5874bcf0_segment_01() {
    __asm {
        // 0x5874C290: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874C292: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x09
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C297: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874C299: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C29C: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874C2A0: mov byte ptr [esp + 0x2c], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0A
        // 0x5874C2A5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5874C2A7: je 0x5874c335
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C2AD: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874C2B1: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C2B7: add eax, -0x2a
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xD6
        // 0x5874C2BA: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C2C0: jle 0x5874c2e1
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5874C2C2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C2C4: jl 0x5874c2e1
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x5874C2C6: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C2CC: je 0x5874c2e1
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5874C2CE: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C2D4: add eax, dword ptr [esp + 0x38]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874C2D8: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C2DC: mov ebp, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x5874C2DF: jmp 0x5874c2e3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C2E1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5874C2E3: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C2E7: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874C2EA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C2ED: push edx
        __asm _emit 0x52
        // 0x5874C2EE: push ebx
        __asm _emit 0x53
        // 0x5874C2EF: push ebx
        __asm _emit 0x53
        // 0x5874C2F0: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874C2F3: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5874C2F6: push eax
        __asm _emit 0x50
        // 0x5874C2F7: push ecx
        __asm _emit 0x51
        // 0x5874C2F8: push esi
        __asm _emit 0x56
        // 0x5874C2F9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874C2FB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C300: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874C306: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5874C309: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5874C30B: je 0x5874c337
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5874C30D: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5874C310: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5874C313: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5874C316: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5874C319: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5874C31C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874C31E: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5874C321: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5874C324: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5874C327: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874C32A: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5874C32D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874C330: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5874C333: jmp 0x5874c337
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C335: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874C337: mov ebp, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C33B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C340: mov dword ptr [ebp - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF8
        // 0x5874C343: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5874C347: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874C349: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C34D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C352: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874C354: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C357: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874C35B: mov byte ptr [esp + 0x2c], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0B
        // 0x5874C360: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5874C362: je 0x5874c3f2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C368: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874C36C: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C372: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x5874C375: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C37B: jle 0x5874c39a
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x5874C37D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C37F: jl 0x5874c39a
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x5874C381: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C387: je 0x5874c39a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5874C389: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C38F: add edx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874C393: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5874C395: mov ebp, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x5874C398: jmp 0x5874c39c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C39A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5874C39C: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C3A0: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874C3A3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C3A6: push edx
        __asm _emit 0x52
        // 0x5874C3A7: push ebx
        __asm _emit 0x53
        // 0x5874C3A8: push ebx
        __asm _emit 0x53
        // 0x5874C3A9: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874C3AC: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5874C3AF: push eax
        __asm _emit 0x50
        // 0x5874C3B0: push ecx
        __asm _emit 0x51
        // 0x5874C3B1: push esi
        __asm _emit 0x56
        // 0x5874C3B2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874C3B4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C3B9: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874C3BF: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5874C3C2: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5874C3C4: je 0x5874c3ec
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5874C3C6: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5874C3C9: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5874C3CC: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5874C3CF: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5874C3D2: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5874C3D5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874C3D7: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5874C3DA: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5874C3DD: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5874C3E0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874C3E3: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5874C3E6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874C3E9: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5874C3EC: mov ebp, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C3F0: jmp 0x5874c3f4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C3F2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874C3F4: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C3F9: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5874C3FC: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5874C400: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874C402: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C406: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C40B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874C40D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C410: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874C414: mov byte ptr [esp + 0x2c], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0C
        // 0x5874C419: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5874C41B: je 0x5874c445
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874C41D: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C421: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874C424: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C427: push edx
        __asm _emit 0x52
        // 0x5874C428: push ebx
        __asm _emit 0x53
        // 0x5874C429: push ebx
        __asm _emit 0x53
        // 0x5874C42A: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874C42D: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5874C430: push eax
        __asm _emit 0x50
        // 0x5874C431: push ecx
        __asm _emit 0x51
        // 0x5874C432: push esi
        __asm _emit 0x56
        // 0x5874C433: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874C435: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x6D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C43A: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874C440: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5874C443: jmp 0x5874c447
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C445: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874C447: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C44C: mov dword ptr [ebp + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5874C44F: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5874C453: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874C455: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C459: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x07
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C45E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874C460: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C463: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874C467: mov byte ptr [esp + 0x2c], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0D
        // 0x5874C46C: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5874C46E: je 0x5874c4f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C474: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C479: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874C47D: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C483: jle 0x5874c4a4
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5874C485: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C487: jl 0x5874c4a4
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x5874C489: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C48F: je 0x5874c4a4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5874C491: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C497: add ecx, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874C49B: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C49F: mov ebp, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x11
        // 0x5874C4A2: jmp 0x5874c4a6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C4A4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5874C4A6: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5874C4AA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874C4AD: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874C4B0: push edx
        __asm _emit 0x52
        // 0x5874C4B1: push ebx
        __asm _emit 0x53
        // 0x5874C4B2: push ebx
        __asm _emit 0x53
        // 0x5874C4B3: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874C4B6: sub ecx, 0x37
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x37
        // 0x5874C4B9: push eax
        __asm _emit 0x50
        // 0x5874C4BA: push ecx
        __asm _emit 0x51
        // 0x5874C4BB: push esi
        __asm _emit 0x56
        // 0x5874C4BC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874C4BE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C4C3: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874C4C9: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5874C4CC: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5874C4CE: je 0x5874c4fa
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5874C4D0: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5874C4D3: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5874C4D6: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5874C4D9: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5874C4DC: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5874C4DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874C4E1: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5874C4E4: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5874C4E7: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5874C4EA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874C4ED: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5874C4F0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874C4F3: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5874C4F6: jmp 0x5874c4fa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C4F8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874C4FA: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C4FE: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5874C501: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5874C504: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C508: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C50D: add dword ptr [esp + 0x44], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874C511: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874C515: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874C519: jne 0x5874c290
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874C51F: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C525: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874C52A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C52F: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C535: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874C53A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C53F: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C545: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874C54A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C54F: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C555: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874C55A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C55F: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5874C561: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C566: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C569: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874C56D: mov byte ptr [esp + 0x2c], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0E
        // 0x5874C572: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C574: je 0x5874c58f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5874C576: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874C57A: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874C57E: add ecx, -0x2b
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xD5
        // 0x5874C581: push ecx
        __asm _emit 0x51
        // 0x5874C582: push edx
        __asm _emit 0x52
        // 0x5874C583: push esi
        __asm _emit 0x56
        // 0x5874C584: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C586: call 0x58750fc0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C58B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874C58D: jmp 0x5874c591
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C58F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5874C591: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5874C595: add ax, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x5874C599: mov dword ptr [esi + 0x1bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C59F: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5874C5A2: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5874C5A5: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874C5A9: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5874C5AD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C5AF: je 0x5874c5b7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C5B1: push edi
        __asm _emit 0x57
        // 0x5874C5B2: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x69
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C5B7: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5874C5BA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C5BC: je 0x5874c5c4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C5BE: push edi
        __asm _emit 0x57
        // 0x5874C5BF: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x69
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C5C4: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874C5C8: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874C5CC: add ecx, -0x26
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xDA
        // 0x5874C5CF: push ecx
        __asm _emit 0x51
        // 0x5874C5D0: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C5D6: push edx
        __asm _emit 0x52
        // 0x5874C5D7: call 0x58750390
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C5DC: mov eax, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C5E2: mov dword ptr [eax + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x60
        // 0x5874C5E5: mov eax, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C5EB: cmp dword ptr [eax + 0x60], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x60
        // 0x5874C5EE: je 0x5874c5fb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5874C5F0: mov ecx, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5874C5F3: push ebx
        __asm _emit 0x53
        // 0x5874C5F4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xAD
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C5F9: jmp 0x5874c607
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5874C5FB: mov eax, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5C
        // 0x5874C5FE: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C603: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874C607: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C60C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874C611: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874C614: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874C618: mov byte ptr [esp + 0x2c], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0F
        // 0x5874C61D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874C61F: je 0x5874c636
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5874C621: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5874C623: push ebx
        __asm _emit 0x53
        // 0x5874C624: push ebx
        __asm _emit 0x53
        // 0x5874C625: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5874C627: push 0x406
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C62C: push esi
        __asm _emit 0x56
        // 0x5874C62D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874C62F: call 0x58878230
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xBB
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5874C634: jmp 0x5874c638
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874C636: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874C638: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C63E: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874C644: push eax
        __asm _emit 0x50
        // 0x5874C645: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874C649: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x69
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C64E: mov edi, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C654: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5874C657: mov edx, 0xfa0
        __asm _emit 0xBA
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C65C: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5874C660: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C662: je 0x5874c66a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C664: push edi
        __asm _emit 0x57
        // 0x5874C665: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x68
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C66A: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5874C66D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874C66F: je 0x5874c677
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874C671: push edi
        __asm _emit 0x57
        // 0x5874C672: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x68
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874C677: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C67D: push ebx
        __asm _emit 0x53
        // 0x5874C67E: call 0x587b6010
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5874C683: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C689: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5874C68B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5874C68D: call 0x587b5fd0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5874C692: mov dword ptr [esi + 0x1c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C698: mov dword ptr [esi + 0x1b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C69E: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C6A4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874C6A6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874C6AA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874C6B1: pop ecx
        __asm _emit 0x59
        // 0x5874C6B2: pop edi
        __asm _emit 0x5F
        // 0x5874C6B3: pop esi
        __asm _emit 0x5E
        // 0x5874C6B4: pop ebp
        __asm _emit 0x5D
        // 0x5874C6B5: pop ebx
        __asm _emit 0x5B
        // 0x5874C6B6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5874C6B9: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
