// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 437 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f5ee0.

// Ghidra body range 0x587F5EE0..0x587F6083; 419 mapped bytes.
extern "C" __declspec(naked) void FUN_587f5ee0_segment_00() {
    __asm {
        // 0x587F5EE0: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587F5EE3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F5EE8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F5EEA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5EEE: push ebx
        __asm _emit 0x53
        // 0x587F5EEF: push esi
        __asm _emit 0x56
        // 0x587F5EF0: push edi
        __asm _emit 0x57
        // 0x587F5EF1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587F5EF3: mov eax, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5EF9: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5EFF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F5F01: cmp byte ptr [ecx + 2], 0x65
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x65
        // 0x587F5F05: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587F5F07: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587F5F0A: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F5F0E: lea ebx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587F5F11: lea edx, [edx*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F18: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587F5F1A: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F5F1E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587F5F20: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587F5F22: inc eax
        __asm _emit 0x40
        // 0x587F5F23: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F5F25: jne 0x587f5f20
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F5F27: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587F5F29: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587F5F2B: jbe 0x587f6087
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F31: cmp byte ptr [ecx + esi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F5F36: jne 0x587f6087
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F3C: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F5F3E: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F5F42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5F44: push eax
        __asm _emit 0x50
        // 0x587F5F45: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x6C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5F4A: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5F50: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F5F53: cmp byte ptr [ecx + 0x504], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F5A: je 0x587f5f75
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587F5F5C: cmp dword ptr [ecx + 0x5f4], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F63: je 0x587f5f75
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587F5F65: mov dword ptr [ecx + 0x5f4], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5F6F: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5F75: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5F7B: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xA1
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5F80: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5F84: mov edx, dword ptr [0x58a0b458]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5F8A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F5F8E: mov eax, dword ptr [0x58a0b45c]
        __asm _emit 0xA1
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5F93: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F5F97: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5F9D: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F5FA1: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5FA6: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F5FAA: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F5FAE: mov eax, dword ptr [ecx + 0x5f4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5FB4: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x587F5FB7: lea eax, [ecx + edx*8 + 0x504]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5FBE: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587F5FC0: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F5FC4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587F5FC7: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F5FCB: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587F5FCE: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F5FD2: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587F5FD5: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5FD9: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587F5FDC: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F5FE0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587F5FE3: mov eax, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5FE9: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F5FED: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5FF3: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F5FF6: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F5FF8: inc eax
        __asm _emit 0x40
        // 0x587F5FF9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F5FFB: jne 0x587f5ff6
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F5FFD: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F5FFF: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F6001: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F6004: push ebp
        __asm _emit 0x55
        // 0x587F6005: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F6007: push ebp
        __asm _emit 0x55
        // 0x587F6008: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xB5
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F600D: push ebp
        __asm _emit 0x55
        // 0x587F600E: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F6010: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6012: push ebx
        __asm _emit 0x53
        // 0x587F6013: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x6C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6018: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F601D: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6021: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F6023: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F6025: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6029: mov edx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F602F: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6035: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6039: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x587F603C: push ecx
        __asm _emit 0x51
        // 0x587F603D: push eax
        __asm _emit 0x50
        // 0x587F603E: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587F6041: push ecx
        __asm _emit 0x51
        // 0x587F6042: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x6D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6047: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F604D: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F6050: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F6052: push ebp
        __asm _emit 0x55
        // 0x587F6053: push ebx
        __asm _emit 0x53
        // 0x587F6054: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6056: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F6058: call 0x587b8110
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x20
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F605D: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6063: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6067: push eax
        __asm _emit 0x50
        // 0x587F6068: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F606A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F606C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F606E: mov dword ptr [edx + 0x5f4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6078: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F607D: push ebx
        __asm _emit 0x53
        // 0x587F607E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6087..0x587F6099; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_587f5ee0_segment_01() {
    __asm {
        // 0x587F6087: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F608B: pop edi
        __asm _emit 0x5F
        // 0x587F608C: pop esi
        __asm _emit 0x5E
        // 0x587F608D: pop ebx
        __asm _emit 0x5B
        // 0x587F608E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6090: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6095: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6098: ret
        __asm _emit 0xC3
    }
}
