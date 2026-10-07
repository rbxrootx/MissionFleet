// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1389 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cef50.

// Ghidra body range 0x588CEF50..0x588CF4BD; 1389 mapped bytes.
extern "C" __declspec(naked) void FUN_588cef50_segment_00() {
    __asm {
        // 0x588CEF50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CEF52: push 0x58989037
        __asm _emit 0x68
        __asm _emit 0x37
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEF57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEF5D: push eax
        __asm _emit 0x50
        // 0x588CEF5E: push ecx
        __asm _emit 0x51
        // 0x588CEF5F: push ebx
        __asm _emit 0x53
        // 0x588CEF60: push ebp
        __asm _emit 0x55
        // 0x588CEF61: push esi
        __asm _emit 0x56
        // 0x588CEF62: push edi
        __asm _emit 0x57
        // 0x588CEF63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CEF68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CEF6A: push eax
        __asm _emit 0x50
        // 0x588CEF6B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CEF6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEF75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CEF77: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CEF7B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CEF7F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CEF83: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CEF87: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CEF8B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588CEF8F: push eax
        __asm _emit 0x50
        // 0x588CEF90: push ecx
        __asm _emit 0x51
        // 0x588CEF91: push ebx
        __asm _emit 0x53
        // 0x588CEF92: push ebp
        __asm _emit 0x55
        // 0x588CEF93: push edx
        __asm _emit 0x52
        // 0x588CEF94: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CEF96: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEF9B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588CEF9D: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEFA2: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CEFA6: mov dword ptr [esi], 0x589a0dd0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CEFAC: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEFB2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CEFB7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CEFBA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CEFBE: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588CEFC3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CEFC5: je 0x588cefd8
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588CEFC7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588CEFC9: push edi
        __asm _emit 0x57
        // 0x588CEFCA: push 0x589a0710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CEFCF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CEFD1: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588CEFD6: jmp 0x588cefda
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CEFD8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CEFDA: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x588CEFDC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CEFE1: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588CEFE4: add ebp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x2C
        // 0x588CEFE7: add ebx, 0xbd
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEFED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CEFF2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CEFF5: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CEFF9: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588CEFFE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF000: je 0x588cf012
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588CF002: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF004: push edi
        __asm _emit 0x57
        // 0x588CF005: push edi
        __asm _emit 0x57
        // 0x588CF006: push edi
        __asm _emit 0x57
        // 0x588CF007: push edi
        __asm _emit 0x57
        // 0x588CF008: push esi
        __asm _emit 0x56
        // 0x588CF009: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF00B: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xAF
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588CF010: jmp 0x588cf014
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF012: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF014: push esi
        __asm _emit 0x56
        // 0x588CF015: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF017: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF01C: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588CF01F: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588CF024: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588CF026: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF02B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF02E: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF032: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588CF037: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF039: je 0x588cf068
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588CF03B: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588CF03E: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF044: jle 0x588cf054
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x588CF046: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF04C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588CF04E: je 0x588cf054
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588CF050: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588CF052: jmp 0x588cf056
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF054: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588CF056: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF058: push ebx
        __asm _emit 0x53
        // 0x588CF059: push ebp
        __asm _emit 0x55
        // 0x588CF05A: push ecx
        __asm _emit 0x51
        // 0x588CF05B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588CF05E: push ecx
        __asm _emit 0x51
        // 0x588CF05F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF061: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x2B
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588CF066: jmp 0x588cf06a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF068: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF06A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CF06F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF071: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF076: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF07C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF081: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588CF083: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xDB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF088: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF08B: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF08F: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588CF094: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF096: je 0x588cf0c7
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588CF098: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588CF09B: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588CF0A2: jle 0x588cf0b3
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588CF0A4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF0AA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588CF0AC: je 0x588cf0b3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588CF0AE: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588CF0B1: jmp 0x588cf0b5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF0B3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588CF0B5: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF0B8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF0BA: push ebx
        __asm _emit 0x53
        // 0x588CF0BB: push ebp
        __asm _emit 0x55
        // 0x588CF0BC: push ecx
        __asm _emit 0x51
        // 0x588CF0BD: push edx
        __asm _emit 0x52
        // 0x588CF0BE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF0C0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x2B
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588CF0C5: jmp 0x588cf0c9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF0C7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF0C9: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF0CE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF0D3: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF0D9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xDB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF0DE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF0E1: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF0E5: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588CF0EA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF0EC: je 0x588cf11c
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588CF0EE: push edi
        __asm _emit 0x57
        // 0x588CF0EF: push edi
        __asm _emit 0x57
        // 0x588CF0F0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588CF0F5: lea ecx, [ebx + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF0FB: push ecx
        __asm _emit 0x51
        // 0x588CF0FC: lea edx, [ebp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x30
        // 0x588CF0FF: push edx
        __asm _emit 0x52
        // 0x588CF100: lea ecx, [ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x48
        // 0x588CF103: push ecx
        __asm _emit 0x51
        // 0x588CF104: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF10A: lea edx, [ebp + 0x16]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x16
        // 0x588CF10D: push edx
        __asm _emit 0x52
        // 0x588CF10E: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF111: push ecx
        __asm _emit 0x51
        // 0x588CF112: push edx
        __asm _emit 0x52
        // 0x588CF113: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF115: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF11A: jmp 0x588cf11e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF11C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF11E: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF123: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF128: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588CF12B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xDB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF130: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF133: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF137: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588CF13C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF13E: je 0x588cf171
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588CF140: push edi
        __asm _emit 0x57
        // 0x588CF141: push edi
        __asm _emit 0x57
        // 0x588CF142: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588CF147: lea ecx, [ebx + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF14D: push ecx
        __asm _emit 0x51
        // 0x588CF14E: lea edx, [ebp + 0xcf]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF154: push edx
        __asm _emit 0x52
        // 0x588CF155: lea ecx, [ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x48
        // 0x588CF158: push ecx
        __asm _emit 0x51
        // 0x588CF159: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF15F: lea edx, [ebp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x34
        // 0x588CF162: push edx
        __asm _emit 0x52
        // 0x588CF163: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF166: push ecx
        __asm _emit 0x51
        // 0x588CF167: push edx
        __asm _emit 0x52
        // 0x588CF168: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF16A: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x8E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF16F: jmp 0x588cf173
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF171: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF173: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF178: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF17D: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588CF180: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xDA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF185: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF188: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF18C: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588CF191: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF193: je 0x588cf1c9
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588CF195: push edi
        __asm _emit 0x57
        // 0x588CF196: push edi
        __asm _emit 0x57
        // 0x588CF197: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588CF19C: lea ecx, [ebx + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF1A2: push ecx
        __asm _emit 0x51
        // 0x588CF1A3: lea edx, [ebp + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF1A9: push edx
        __asm _emit 0x52
        // 0x588CF1AA: lea ecx, [ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x48
        // 0x588CF1AD: push ecx
        __asm _emit 0x51
        // 0x588CF1AE: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF1B4: lea edx, [ebp + 0xf3]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF1BA: push edx
        __asm _emit 0x52
        // 0x588CF1BB: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF1BE: push ecx
        __asm _emit 0x51
        // 0x588CF1BF: push edx
        __asm _emit 0x52
        // 0x588CF1C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF1C2: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x8E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF1C7: jmp 0x588cf1cb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF1C9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF1CB: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588CF1CE: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588CF1D1: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF1D6: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x588CF1D9: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588CF1DC: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x588CF1DF: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588CF1E2: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF1E7: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF1EC: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x588CF1EF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xDA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF1F4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF1F7: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF1FB: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588CF200: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF202: je 0x588cf254
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588CF204: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF20A: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x588CF211: jle 0x588cf229
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588CF213: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF219: je 0x588cf229
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CF21B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF221: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF227: jmp 0x588cf22b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF229: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588CF22B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF22D: lea edx, [ebx + 0x3d]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3D
        // 0x588CF230: push edx
        __asm _emit 0x52
        // 0x588CF231: lea edx, [ebp + 0x117]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF237: push edx
        __asm _emit 0x52
        // 0x588CF238: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF23E: push ecx
        __asm _emit 0x51
        // 0x588CF23F: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588CF242: push ecx
        __asm _emit 0x51
        // 0x588CF243: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF249: push edx
        __asm _emit 0x52
        // 0x588CF24A: push ecx
        __asm _emit 0x51
        // 0x588CF24B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF24D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xEB
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588CF252: jmp 0x588cf256
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF254: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF256: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF25B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF25D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF262: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF268: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x3A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF26D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF272: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xD9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF277: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF27A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF27E: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588CF283: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588CF285: je 0x588cf2da
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588CF287: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF28D: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588CF294: jle 0x588cf2ac
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588CF296: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF29C: je 0x588cf2ac
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CF29E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2A4: add ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2AA: jmp 0x588cf2ae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF2AC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588CF2AE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF2B0: lea edx, [ebx + 0xda]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2B6: push edx
        __asm _emit 0x52
        // 0x588CF2B7: lea edx, [ebp + 0x117]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2BD: push edx
        __asm _emit 0x52
        // 0x588CF2BE: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF2C4: push ecx
        __asm _emit 0x51
        // 0x588CF2C5: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588CF2C8: push ecx
        __asm _emit 0x51
        // 0x588CF2C9: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF2CF: push edx
        __asm _emit 0x52
        // 0x588CF2D0: push ecx
        __asm _emit 0x51
        // 0x588CF2D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF2D3: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xEA
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588CF2D8: jmp 0x588cf2dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF2DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF2DC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF2E3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF2E8: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF2EE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x3A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF2F3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588CF2F5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xD9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF2FA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588CF2FC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF2FF: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF303: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588CF308: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588CF30A: je 0x588cf32e
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588CF30C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588CF30F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF311: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF313: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF315: push ebx
        __asm _emit 0x53
        // 0x588CF316: push ebp
        __asm _emit 0x55
        // 0x588CF317: push eax
        __asm _emit 0x50
        // 0x588CF318: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588CF31A: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x3E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF31F: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CF325: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF32C: jmp 0x588cf330
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF32E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588CF330: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF336: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF33B: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588CF33F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF345: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CF34A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF34F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF354: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588CF356: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xD8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF35B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588CF35D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF360: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF364: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588CF369: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588CF36B: je 0x588cf38f
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588CF36D: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588CF370: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF372: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF374: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF376: push ebx
        __asm _emit 0x53
        // 0x588CF377: push ebp
        __asm _emit 0x55
        // 0x588CF378: push eax
        __asm _emit 0x50
        // 0x588CF379: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588CF37B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x3E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF380: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CF386: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF38D: jmp 0x588cf391
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF38F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588CF391: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF396: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF39C: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588CF3A0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3A5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF3AA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xD8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF3AF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF3B2: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CF3B6: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588CF3BB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CF3BD: je 0x588cf40d
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588CF3BF: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF3C5: cmp dword ptr [ecx + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        // 0x588CF3CC: jle 0x588cf3e5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CF3CE: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3D5: je 0x588cf3e5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CF3D7: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3DD: add edx, 0x440
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3E3: jmp 0x588cf3e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF3E5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588CF3E7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CF3EB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CF3EF: lea ecx, [edi + 0x1bb]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3F5: push ecx
        __asm _emit 0x51
        // 0x588CF3F6: lea ecx, [ebx + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF3FC: push ecx
        __asm _emit 0x51
        // 0x588CF3FD: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588CF3FF: push edx
        __asm _emit 0x52
        // 0x588CF400: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF403: push edx
        __asm _emit 0x52
        // 0x588CF404: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF406: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF40B: jmp 0x588cf417
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588CF40D: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CF411: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CF415: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF417: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF41C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF41E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF423: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF429: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CF42E: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF433: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xD8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF438: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF43B: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CF43F: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588CF444: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CF446: je 0x588cf486
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588CF448: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x588CF44D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF44F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588CF454: lea ecx, [edi + 0x1c9]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF45A: push ecx
        __asm _emit 0x51
        // 0x588CF45B: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CF461: lea edx, [ebx + 0x1c2]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF467: push edx
        __asm _emit 0x52
        // 0x588CF468: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588CF46B: add edi, 0x1bb
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF471: push edi
        __asm _emit 0x57
        // 0x588CF472: add ebx, 0x190
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF478: push ebx
        __asm _emit 0x53
        // 0x588CF479: push ecx
        __asm _emit 0x51
        // 0x588CF47A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF47C: push edx
        __asm _emit 0x52
        // 0x588CF47D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF47F: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x1C
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588CF484: jmp 0x588cf488
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF486: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF488: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588CF48A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF48C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CF491: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF497: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588CF49C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588CF49E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CF4A0: call 0x588cec10
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CF4A5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CF4A7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CF4AB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF4B2: pop ecx
        __asm _emit 0x59
        // 0x588CF4B3: pop edi
        __asm _emit 0x5F
        // 0x588CF4B4: pop esi
        __asm _emit 0x5E
        // 0x588CF4B5: pop ebp
        __asm _emit 0x5D
        // 0x588CF4B6: pop ebx
        __asm _emit 0x5B
        // 0x588CF4B7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588CF4BA: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
