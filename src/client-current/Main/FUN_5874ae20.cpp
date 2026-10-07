// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 615 bytes in 2 exact ranges.
// Source symbol alias: FUN_5874ae20.

// Ghidra body range 0x5874AE20..0x5874AEFD; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_5874ae20_segment_00() {
    __asm {
        // 0x5874AE20: push ecx
        __asm _emit 0x51
        // 0x5874AE21: mov eax, dword ptr [0x58a24588]
        __asm _emit 0xA1
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AE26: cmp dword ptr [eax + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE2D: push edi
        __asm _emit 0x57
        // 0x5874AE2E: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874AE30: jne 0x5874ae55
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5874AE32: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AE38: cmp dword ptr [ecx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5874AE3C: jne 0x5874ae5a
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5874AE3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE44: push 0x1dd
        __asm _emit 0x68
        __asm _emit 0xDD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE49: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AE4E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AE50: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AE55: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AE57: pop edi
        __asm _emit 0x5F
        // 0x5874AE58: pop ecx
        __asm _emit 0x59
        // 0x5874AE59: ret
        __asm _emit 0xC3
        // 0x5874AE5A: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5874AE5F: cmp dword ptr [edi + 0x98], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE65: jne 0x5874ae55
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5874AE67: cmp dword ptr [edi + 0x94], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE6D: jne 0x5874ae55
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5874AE6F: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AE75: lea edx, [edi + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE7B: push edx
        __asm _emit 0x52
        // 0x5874AE7C: call 0x58796c80
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5874AE81: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874AE83: jne 0x5874ae9e
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5874AE85: push eax
        __asm _emit 0x50
        // 0x5874AE86: push eax
        __asm _emit 0x50
        // 0x5874AE87: push eax
        __asm _emit 0x50
        // 0x5874AE88: push 0x3c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE8D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AE92: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AE94: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AE99: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AE9B: pop edi
        __asm _emit 0x5F
        // 0x5874AE9C: pop ecx
        __asm _emit 0x59
        // 0x5874AE9D: ret
        __asm _emit 0xC3
        // 0x5874AE9E: cmp dword ptr [edi + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AEA4: je 0x5874aec2
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5874AEA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AEA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AEAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AEAC: push 0x3c1
        __asm _emit 0x68
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AEB1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AEB6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AEB8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AEBD: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AEBF: pop edi
        __asm _emit 0x5F
        // 0x5874AEC0: pop ecx
        __asm _emit 0x59
        // 0x5874AEC1: ret
        __asm _emit 0xC3
        // 0x5874AEC2: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AEC8: push esi
        __asm _emit 0x56
        // 0x5874AEC9: call 0x587d02b0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5874AECE: mov esi, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874AED4: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5874AED6: jne 0x5874af84
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AEDC: mov eax, dword ptr [edi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AEE2: cmp eax, 0x15
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x15
        // 0x5874AEE5: je 0x5874aef1
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5874AEE7: cmp eax, 0x16
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x16
        // 0x5874AEEA: je 0x5874aef1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5874AEEC: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5874AEEF: jne 0x5874af1f
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5874AEF1: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5874AEF4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874AEF6: add eax, 0x9a4
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AEFB: jmp 0x5874af00
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5874AF00..0x5874B08A; 394 mapped bytes.
extern "C" __declspec(naked) void FUN_5874ae20_segment_01() {
    __asm {
        // 0x5874AF00: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5874AF02: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874AF04: je 0x5874af16
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5874AF06: mov cx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x5874AF0A: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5874AF0E: xor cl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF1
        __asm _emit 0xAA
        // 0x5874AF11: cmp cl, 0xe
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x5874AF14: ja 0x5874af67
        __asm _emit 0x77
        __asm _emit 0x51
        // 0x5874AF16: inc edx
        __asm _emit 0x42
        // 0x5874AF17: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5874AF1A: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5874AF1D: jl 0x5874af00
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x5874AF1F: mov edx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x30
        // 0x5874AF22: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF28: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5874AF2C: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5874AF2E: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5874AF31: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x5874AF34: jne 0x5874afeb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF3A: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF3F: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF44: jne 0x5874afeb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF4A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF4C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF50: push 0x516
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF55: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AF5A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AF5C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AF61: pop esi
        __asm _emit 0x5E
        // 0x5874AF62: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AF64: pop edi
        __asm _emit 0x5F
        // 0x5874AF65: pop ecx
        __asm _emit 0x59
        // 0x5874AF66: ret
        __asm _emit 0xC3
        // 0x5874AF67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF6B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF6D: push 0x199
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF72: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AF77: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AF79: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AF7E: pop esi
        __asm _emit 0x5E
        // 0x5874AF7F: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AF81: pop edi
        __asm _emit 0x5F
        // 0x5874AF82: pop ecx
        __asm _emit 0x59
        // 0x5874AF83: ret
        __asm _emit 0xC3
        // 0x5874AF84: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5874AF86: jne 0x5874af1f
        __asm _emit 0x75
        __asm _emit 0x97
        // 0x5874AF88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF8A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AF8E: push 0x454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AF93: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AF98: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AF9A: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AF9F: push 0x5898d0cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874AFA4: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874AFA8: push 0x5898d0b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874AFAD: push edx
        __asm _emit 0x52
        // 0x5874AFAE: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x1E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874AFB3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874AFB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874AFB8: je 0x5874af61
        __asm _emit 0x74
        __asm _emit 0xA7
        // 0x5874AFBA: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874AFBE: push 0x5898d048
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874AFC3: push eax
        __asm _emit 0x50
        // 0x5874AFC4: call 0x5897ce44
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x1E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874AFC9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874AFCD: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874AFD2: push ecx
        __asm _emit 0x51
        // 0x5874AFD3: call 0x5897ce44
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x1E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874AFD8: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874AFDC: push edx
        __asm _emit 0x52
        // 0x5874AFDD: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x1E
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874AFE2: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5874AFE5: pop esi
        __asm _emit 0x5E
        // 0x5874AFE6: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874AFE8: pop edi
        __asm _emit 0x5F
        // 0x5874AFE9: pop ecx
        __asm _emit 0x59
        // 0x5874AFEA: ret
        __asm _emit 0xC3
        // 0x5874AFEB: test byte ptr [edi + 0x170], 2
        __asm _emit 0xF6
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5874AFF2: je 0x5874b01b
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5874AFF4: mov ecx, 0xb40
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AFF9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B000: mov eax, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x5874B003: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874B005: je 0x5874b010
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874B007: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x5874B00A: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5874B00E: je 0x5874b06d
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5874B010: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874B013: cmp ecx, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B019: jl 0x5874b000
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x5874B01B: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5874B01D: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x5874B020: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874B022: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5874B024: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5874B026: je 0x5874af61
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B02C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874B02E: call 0x5874aae0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B033: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5874B035: je 0x5874af61
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B03B: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5874B03D: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5874B040: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874B042: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5874B044: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5874B046: je 0x5874af61
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B04C: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5874B04E: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x5874B051: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874B053: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5874B055: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5874B057: je 0x5874af61
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B05D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874B05F: call 0x5874add0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B064: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874B066: pop esi
        __asm _emit 0x5E
        // 0x5874B067: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5874B06A: pop edi
        __asm _emit 0x5F
        // 0x5874B06B: pop ecx
        __asm _emit 0x59
        // 0x5874B06C: ret
        __asm _emit 0xC3
        // 0x5874B06D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874B06F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874B071: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874B073: push 0x3b7
        __asm _emit 0x68
        __asm _emit 0xB7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B078: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874B07D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874B07F: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874B084: pop esi
        __asm _emit 0x5E
        // 0x5874B085: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874B087: pop edi
        __asm _emit 0x5F
        // 0x5874B088: pop ecx
        __asm _emit 0x59
        // 0x5874B089: ret
        __asm _emit 0xC3
    }
}
