// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 419 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b5ea0.

// Ghidra body range 0x588B5EA0..0x588B6043; 419 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5ea0_segment_00() {
    __asm {
        // 0x588B5EA0: push ebp
        __asm _emit 0x55
        // 0x588B5EA1: push esi
        __asm _emit 0x56
        // 0x588B5EA2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B5EA4: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EAA: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B5EAC: cmp dword ptr [ecx + 0x88], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EB2: jne 0x588b5f1d
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x588B5EB4: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EBA: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B5EBE: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B5EC1: je 0x588b5ed2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B5EC3: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EC9: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5ECE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B5ED2: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5ED8: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588B5EDB: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EE1: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588B5EE4: mov edx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EEA: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588B5EED: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EF3: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588B5EF6: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5EFC: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588B5EFF: mov edx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F05: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588B5F08: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F0E: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588B5F11: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F17: pop esi
        __asm _emit 0x5E
        // 0x588B5F18: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588B5F1B: pop ebp
        __asm _emit 0x5D
        // 0x588B5F1C: ret
        __asm _emit 0xC3
        // 0x588B5F1D: push ebx
        __asm _emit 0x53
        // 0x588B5F1E: push edi
        __asm _emit 0x57
        // 0x588B5F1F: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F24: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F2A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B5F2C: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F31: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B5F33: jg 0x588b5f9c
        __asm _emit 0x7F
        __asm _emit 0x67
        // 0x588B5F35: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F3B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F40: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F46: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588B5F49: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F4E: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B5F50: jle 0x588b5f9c
        __asm _emit 0x7E
        __asm _emit 0x4A
        // 0x588B5F52: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F58: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F5D: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F63: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B5F65: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5F6A: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F70: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588B5F72: imul edi, edi, 0xd
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x588B5F75: add edi, 0xe8
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F7B: push edi
        __asm _emit 0x57
        // 0x588B5F7C: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xD3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B5F81: mov edx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F87: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B5F8B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B5F8D: jne 0x588b5fba
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x588B5F8F: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5F95: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588B5F9A: jmp 0x588b5fba
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588B5F9C: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FA2: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B5FA6: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B5FA9: je 0x588b5fba
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B5FAB: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FB1: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FB6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B5FBA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B5FBC: lea edi, [esi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FC2: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FC8: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5FCD: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FD3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588B5FD5: push eax
        __asm _emit 0x50
        // 0x588B5FD6: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5FDB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588B5FDE: jne 0x588b6030
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x588B5FE0: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FE6: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FEC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5FF1: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588B5FF3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588B5FF5: jge 0x588b6023
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x588B5FF7: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5FFD: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B6002: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6008: add al, bl
        __asm _emit 0x02
        __asm _emit 0xC3
        // 0x588B600A: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588B600D: push edx
        __asm _emit 0x52
        // 0x588B600E: call 0x588bb220
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B6013: movzx eax, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x588B6017: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588B6019: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588B601C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B601F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B6021: jmp 0x588b6035
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588B6023: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588B6025: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B602C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B602E: jmp 0x588b6035
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588B6030: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588B6032: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588B6035: inc ebx
        __asm _emit 0x43
        // 0x588B6036: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B6039: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x588B603C: jl 0x588b5fc2
        __asm _emit 0x7C
        __asm _emit 0x84
        // 0x588B603E: pop edi
        __asm _emit 0x5F
        // 0x588B603F: pop ebx
        __asm _emit 0x5B
        // 0x588B6040: pop esi
        __asm _emit 0x5E
        // 0x588B6041: pop ebp
        __asm _emit 0x5D
        // 0x588B6042: ret
        __asm _emit 0xC3
    }
}
