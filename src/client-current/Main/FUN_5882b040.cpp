// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 753 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882b040.

// Ghidra body range 0x5882B040..0x5882B331; 753 mapped bytes.
extern "C" __declspec(naked) void FUN_5882b040_segment_00() {
    __asm {
        // 0x5882B040: push ebx
        __asm _emit 0x53
        // 0x5882B041: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882B047: push esi
        __asm _emit 0x56
        // 0x5882B048: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882B04A: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5882B04D: push edi
        __asm _emit 0x57
        // 0x5882B04E: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882B054: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5882B056: je 0x5882b060
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882B058: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5882B05A: jne 0x5882b19e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B060: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882B063: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B069: push eax
        __asm _emit 0x50
        // 0x5882B06A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B06C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B06F: jge 0x5882b094
        __asm _emit 0x7D
        __asm _emit 0x23
        // 0x5882B071: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882B074: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x48
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B079: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B07B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B07D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B07F: push 0x1f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B084: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x0A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B089: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B08B: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x9C
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B090: pop edi
        __asm _emit 0x5F
        // 0x5882B091: pop esi
        __asm _emit 0x5E
        // 0x5882B092: pop ebx
        __asm _emit 0x5B
        // 0x5882B093: ret
        __asm _emit 0xC3
        // 0x5882B094: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882B097: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B09D: push eax
        __asm _emit 0x50
        // 0x5882B09E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B0A0: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B0A3: jge 0x5882b0c8
        __asm _emit 0x7D
        __asm _emit 0x23
        // 0x5882B0A5: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882B0A8: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B0AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B0AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B0B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B0B3: push 0x1f5
        __asm _emit 0x68
        __asm _emit 0xF5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0B8: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x0A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B0BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B0BF: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x9C
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B0C4: pop edi
        __asm _emit 0x5F
        // 0x5882B0C5: pop esi
        __asm _emit 0x5E
        // 0x5882B0C6: pop ebx
        __asm _emit 0x5B
        // 0x5882B0C7: ret
        __asm _emit 0xC3
        // 0x5882B0C8: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0CE: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0D4: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0DA: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0E0: push eax
        __asm _emit 0x50
        // 0x5882B0E1: push ecx
        __asm _emit 0x51
        // 0x5882B0E2: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882B0E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882B0E6: je 0x5882b119
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5882B0E8: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0EE: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xF7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B0F3: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B0F9: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xF7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B0FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B100: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B102: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B104: push 0x1f6
        __asm _emit 0x68
        __asm _emit 0xF6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B109: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x09
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B10E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B110: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x9C
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B115: pop edi
        __asm _emit 0x5F
        // 0x5882B116: pop esi
        __asm _emit 0x5E
        // 0x5882B117: pop ebx
        __asm _emit 0x5B
        // 0x5882B118: ret
        __asm _emit 0xC3
        // 0x5882B119: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B11F: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B125: push eax
        __asm _emit 0x50
        // 0x5882B126: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B128: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B12B: jl 0x5882b300
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B131: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B137: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B13D: push eax
        __asm _emit 0x50
        // 0x5882B13E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B140: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B143: jl 0x5882b300
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B149: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B14F: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B155: push eax
        __asm _emit 0x50
        // 0x5882B156: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B158: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5882B15B: jge 0x5882b178
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x5882B15D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B15F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B161: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B163: push 0x1f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B168: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B16D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B16F: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x9B
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B174: pop edi
        __asm _emit 0x5F
        // 0x5882B175: pop esi
        __asm _emit 0x5E
        // 0x5882B176: pop ebx
        __asm _emit 0x5B
        // 0x5882B177: ret
        __asm _emit 0xC3
        // 0x5882B178: cmp byte ptr [esi + 0x60], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x5882B17C: jne 0x5882b197
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5882B17E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B180: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B182: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B184: push 0x131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B189: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B18E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B190: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xF3
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B195: jmp 0x5882b19e
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5882B197: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882B199: call 0x5882a420
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882B19E: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5882B1A1: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5882B1A3: je 0x5882b1ad
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5882B1A5: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882B1A7: jne 0x5882b32d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1AD: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1B3: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1B9: push eax
        __asm _emit 0x50
        // 0x5882B1BA: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B1BC: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B1BF: jge 0x5882b1e7
        __asm _emit 0x7D
        __asm _emit 0x26
        // 0x5882B1C1: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1C7: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B1CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B1CE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B1D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B1D2: push 0x226
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1D7: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B1DC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B1DE: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x9B
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B1E3: pop edi
        __asm _emit 0x5F
        // 0x5882B1E4: pop esi
        __asm _emit 0x5E
        // 0x5882B1E5: pop ebx
        __asm _emit 0x5B
        // 0x5882B1E6: ret
        __asm _emit 0xC3
        // 0x5882B1E7: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1ED: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1F3: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1F9: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B1FF: push eax
        __asm _emit 0x50
        // 0x5882B200: push ecx
        __asm _emit 0x51
        // 0x5882B201: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882B203: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882B205: je 0x5882b21d
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5882B207: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B20D: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF6
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B212: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B218: jmp 0x5882b0f9
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882B21D: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B223: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B229: push eax
        __asm _emit 0x50
        // 0x5882B22A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B22C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B22F: jl 0x5882b2ed
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B235: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B23B: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B241: push eax
        __asm _emit 0x50
        // 0x5882B242: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B244: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5882B247: jl 0x5882b2ed
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B24D: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B253: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B259: push eax
        __asm _emit 0x50
        // 0x5882B25A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882B25C: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5882B25F: jl 0x5882b15d
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882B265: cmp byte ptr [esi + 0x60], 3
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x03
        // 0x5882B269: jne 0x5882b2e3
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x5882B26B: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882B271: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x5882B274: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x5882B278: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5882B27B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5882B27D: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5882B280: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5882B282: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B288: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5882B28A: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x5882B28D: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B293: mov dx, word ptr [ecx + 0x589cfce8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882B29A: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x5882B29E: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5882B2A1: cmp ax, 0x4e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4E
        // 0x5882B2A5: je 0x5882b2c8
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5882B2A7: cmp ax, 0x4f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4F
        // 0x5882B2AB: je 0x5882b2c8
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5882B2AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2B3: push 0x22b
        __asm _emit 0x68
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B2B8: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B2BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B2BF: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x9A
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B2C4: pop edi
        __asm _emit 0x5F
        // 0x5882B2C5: pop esi
        __asm _emit 0x5E
        // 0x5882B2C6: pop ebx
        __asm _emit 0x5B
        // 0x5882B2C7: ret
        __asm _emit 0xC3
        // 0x5882B2C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B2CE: push 0x132
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B2D3: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B2D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B2DA: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xF2
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B2DF: pop edi
        __asm _emit 0x5F
        // 0x5882B2E0: pop esi
        __asm _emit 0x5E
        // 0x5882B2E1: pop ebx
        __asm _emit 0x5B
        // 0x5882B2E2: ret
        __asm _emit 0xC3
        // 0x5882B2E3: pop edi
        __asm _emit 0x5F
        // 0x5882B2E4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882B2E6: pop esi
        __asm _emit 0x5E
        // 0x5882B2E7: pop ebx
        __asm _emit 0x5B
        // 0x5882B2E8: jmp 0x5882a420
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882B2ED: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B2F3: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B2F8: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B2FE: jmp 0x5882b311
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5882B300: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B306: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B30B: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B311: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882B316: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B318: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B31A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882B31C: push 0x1f7
        __asm _emit 0x68
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882B321: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x07
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882B326: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882B328: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882B32D: pop edi
        __asm _emit 0x5F
        // 0x5882B32E: pop esi
        __asm _emit 0x5E
        // 0x5882B32F: pop ebx
        __asm _emit 0x5B
        // 0x5882B330: ret
        __asm _emit 0xC3
    }
}
