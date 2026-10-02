// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885ADCB .. +0x290 bytes.
extern "C" __declspec(naked) void FUN_5885adcb() {
    __asm {
        // 0x5885ADCB: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885ADCD: push ebp
        __asm _emit 0x55
        // 0x5885ADCE: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885ADD0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5885ADD3: push esi
        __asm _emit 0x56
        // 0x5885ADD4: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885ADD7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885ADD9: jne 0x5885adee
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5885ADDB: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ADE0: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885ADE2: pop esi
        __asm _emit 0x5E
        // 0x5885ADE3: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5885ADE5: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885ADEA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885ADEC: jmp 0x5885ae41
        __asm _emit 0xEB
        __asm _emit 0x53
        // 0x5885ADEE: push edi
        __asm _emit 0x57
        // 0x5885ADEF: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885ADF1: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885ADF4: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5885ADF6: pop ecx
        __asm _emit 0x59
        // 0x5885ADF7: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x5885ADF9: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885ADFC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885ADFE: jne 0x5885ae13
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5885AE00: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE05: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885AE07: pop esi
        __asm _emit 0x5E
        // 0x5885AE08: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5885AE0A: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AE0F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885AE11: jmp 0x5885ae40
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x5885AE13: push ebx
        __asm _emit 0x53
        // 0x5885AE14: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885AE16: cmp dword ptr [edi + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x5885AE19: jg 0x5885ae21
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x5885AE1B: jl 0x5885ae33
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x5885AE1D: cmp dword ptr [edi], ebx
        __asm _emit 0x39
        __asm _emit 0x1F
        // 0x5885AE1F: jb 0x5885ae33
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x5885AE21: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885AE23: pop eax
        __asm _emit 0x58
        // 0x5885AE24: cmp dword ptr [edi + 4], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885AE27: jl 0x5885ae44
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x5885AE29: jg 0x5885ae33
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885AE2B: cmp dword ptr [edi], 0x93582aff
        __asm _emit 0x81
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0x2A
        __asm _emit 0x58
        __asm _emit 0x93
        // 0x5885AE31: jbe 0x5885ae44
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x5885AE33: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE38: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885AE3A: pop esi
        __asm _emit 0x5E
        // 0x5885AE3B: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5885AE3D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885AE3F: pop ebx
        __asm _emit 0x5B
        // 0x5885AE40: pop edi
        __asm _emit 0x5F
        // 0x5885AE41: pop esi
        __asm _emit 0x5E
        // 0x5885AE42: leave
        __asm _emit 0xC9
        // 0x5885AE43: ret
        __asm _emit 0xC3
        // 0x5885AE44: call 0x5886867d
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE49: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885AE4C: mov dword ptr [ebp - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF8
        // 0x5885AE4F: push eax
        __asm _emit 0x50
        // 0x5885AE50: mov dword ptr [ebp - 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF4
        // 0x5885AE53: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885AE56: call 0x5887141b
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AE5B: pop ecx
        __asm _emit 0x59
        // 0x5885AE5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AE5E: jne 0x5885b051
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE64: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885AE67: push eax
        __asm _emit 0x50
        // 0x5885AE68: call 0x58871447
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AE6D: pop ecx
        __asm _emit 0x59
        // 0x5885AE6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AE70: jne 0x5885b051
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE76: lea eax, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885AE79: push eax
        __asm _emit 0x50
        // 0x5885AE7A: call 0x58871473
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AE7F: pop ecx
        __asm _emit 0x59
        // 0x5885AE80: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AE82: jne 0x5885b051
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AE88: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5885AE8A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885AE8C: mov ebx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x5885AE8F: add edx, 0xfffc0b7f
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x7F
        __asm _emit 0x0B
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5885AE95: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885AE97: adc eax, -1
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0xFF
        // 0x5885AE9A: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5885AE9D: ja 0x5885af0d
        __asm _emit 0x77
        __asm _emit 0x6E
        // 0x5885AE9F: jb 0x5885aea9
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5885AEA1: cmp edx, 0x935041fd
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFD
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x93
        // 0x5885AEA7: ja 0x5885af0d
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x5885AEA9: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885AEAC: cdq
        __asm _emit 0x99
        // 0x5885AEAD: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5885AEAF: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885AEB2: push eax
        __asm _emit 0x50
        // 0x5885AEB3: sbb ebx, edx
        __asm _emit 0x1B
        __asm _emit 0xDA
        // 0x5885AEB5: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885AEB8: push esi
        __asm _emit 0x56
        // 0x5885AEB9: mov dword ptr [ebp - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x5885AEBC: call 0x58862705
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AEC1: pop ecx
        __asm _emit 0x59
        // 0x5885AEC2: pop ecx
        __asm _emit 0x59
        // 0x5885AEC3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AEC5: jne 0x5885ae3f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AECB: cmp dword ptr [ebp - 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885AECE: je 0x5885b04a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AED4: push esi
        __asm _emit 0x56
        // 0x5885AED5: call 0x588686da
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AEDA: pop ecx
        __asm _emit 0x59
        // 0x5885AEDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AEDD: je 0x5885b04a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AEE3: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885AEE6: cdq
        __asm _emit 0x99
        // 0x5885AEE7: sub dword ptr [ebp - 0x14], eax
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885AEEA: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885AEED: push eax
        __asm _emit 0x50
        // 0x5885AEEE: sbb dword ptr [ebp - 0x10], edx
        __asm _emit 0x19
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885AEF1: push esi
        __asm _emit 0x56
        // 0x5885AEF2: call 0x58862705
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AEF7: pop ecx
        __asm _emit 0x59
        // 0x5885AEF8: pop ecx
        __asm _emit 0x59
        // 0x5885AEF9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AEFB: jne 0x5885ae3f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AF01: mov dword ptr [esi + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AF08: jmp 0x5885b04a
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AF0D: push edi
        __asm _emit 0x57
        // 0x5885AF0E: push esi
        __asm _emit 0x56
        // 0x5885AF0F: call 0x58862705
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AF14: pop ecx
        __asm _emit 0x59
        // 0x5885AF15: pop ecx
        __asm _emit 0x59
        // 0x5885AF16: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AF18: jne 0x5885ae3f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AF1E: cmp dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5885AF22: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885AF24: cdq
        __asm _emit 0x99
        // 0x5885AF25: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885AF27: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885AF29: je 0x5885af45
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5885AF2B: push esi
        __asm _emit 0x56
        // 0x5885AF2C: call 0x588686da
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AF31: pop ecx
        __asm _emit 0x59
        // 0x5885AF32: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AF34: je 0x5885af45
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885AF36: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885AF39: add eax, dword ptr [ebp - 0xc]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885AF3C: mov dword ptr [esi + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AF43: jmp 0x5885af48
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885AF45: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885AF48: cdq
        __asm _emit 0x99
        // 0x5885AF49: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5885AF4B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AF4D: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885AF4F: sbb ebx, edx
        __asm _emit 0x1B
        __asm _emit 0xDA
        // 0x5885AF51: push ebx
        __asm _emit 0x53
        // 0x5885AF52: push edi
        __asm _emit 0x57
        // 0x5885AF53: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AF58: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5885AF5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AF5C: jns 0x5885af69
        __asm _emit 0x79
        __asm _emit 0x0B
        // 0x5885AF5E: add eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x3C
        // 0x5885AF61: add edi, -0x3c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xC4
        // 0x5885AF64: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5885AF66: adc ebx, -1
        __asm _emit 0x83
        __asm _emit 0xD3
        __asm _emit 0xFF
        // 0x5885AF69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AF6B: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885AF6D: push ebx
        __asm _emit 0x53
        // 0x5885AF6E: push edi
        __asm _emit 0x57
        // 0x5885AF6F: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AF74: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885AF76: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885AF78: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AF7B: cdq
        __asm _emit 0x99
        // 0x5885AF7C: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5885AF7E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AF80: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885AF82: adc ebx, edx
        __asm _emit 0x13
        __asm _emit 0xDA
        // 0x5885AF84: push ebx
        __asm _emit 0x53
        // 0x5885AF85: push edi
        __asm _emit 0x57
        // 0x5885AF86: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AF8B: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AF8E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AF90: jns 0x5885af9e
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5885AF92: add eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x3C
        // 0x5885AF95: add edi, -0x3c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xC4
        // 0x5885AF98: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AF9B: adc ebx, -1
        __asm _emit 0x83
        __asm _emit 0xD3
        __asm _emit 0xFF
        // 0x5885AF9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AFA0: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5885AFA2: push ebx
        __asm _emit 0x53
        // 0x5885AFA3: push edi
        __asm _emit 0x57
        // 0x5885AFA4: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AFA9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885AFAB: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885AFAD: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885AFB0: cdq
        __asm _emit 0x99
        // 0x5885AFB1: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5885AFB3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AFB5: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x5885AFB7: adc ebx, edx
        __asm _emit 0x13
        __asm _emit 0xDA
        // 0x5885AFB9: push ebx
        __asm _emit 0x53
        // 0x5885AFBA: push edi
        __asm _emit 0x57
        // 0x5885AFBB: call 0x5887d190
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AFC0: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885AFC3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AFC5: jns 0x5885afd3
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5885AFC7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5885AFCA: add edi, -0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xE8
        // 0x5885AFCD: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885AFD0: adc ebx, -1
        __asm _emit 0x83
        __asm _emit 0xD3
        __asm _emit 0xFF
        // 0x5885AFD3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885AFD5: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x5885AFD7: push ebx
        __asm _emit 0x53
        // 0x5885AFD8: push edi
        __asm _emit 0x57
        // 0x5885AFD9: call 0x5887d0e0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885AFDE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885AFE0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885AFE2: jl 0x5885b00a
        __asm _emit 0x7C
        __asm _emit 0x26
        // 0x5885AFE4: jg 0x5885afea
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x5885AFE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885AFE8: je 0x5885b000
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5885AFEA: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5885AFED: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5885AFEF: add dword ptr [esi + 0xc], ecx
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5885AFF2: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885AFF4: cdq
        __asm _emit 0x99
        // 0x5885AFF5: pop ebx
        __asm _emit 0x5B
        // 0x5885AFF6: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5885AFF8: add dword ptr [esi + 0x1c], ecx
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5885AFFB: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5885AFFE: jmp 0x5885b04a
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x5885B000: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B002: jg 0x5885b04a
        __asm _emit 0x7F
        __asm _emit 0x46
        // 0x5885B004: jl 0x5885b00a
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5885B006: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B008: jae 0x5885b04a
        __asm _emit 0x73
        __asm _emit 0x40
        // 0x5885B00A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5885B00D: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x5885B010: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5885B012: cdq
        __asm _emit 0x99
        // 0x5885B013: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885B015: pop ebx
        __asm _emit 0x5B
        // 0x5885B016: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5885B018: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885B01B: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5885B01E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5885B020: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5885B023: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5885B025: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885B028: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B02A: jg 0x5885b047
        __asm _emit 0x7F
        __asm _emit 0x1B
        // 0x5885B02C: add eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1F
        // 0x5885B02F: mov dword ptr [esi + 0x10], 0xb
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B036: dec dword ptr [esi + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885B039: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885B03C: lea eax, [edx + 0x16d]
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B042: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5885B045: jmp 0x5885b04a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885B047: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5885B04A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B04C: jmp 0x5885ae3f
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B051: push ebx
        __asm _emit 0x53
        // 0x5885B052: push ebx
        __asm _emit 0x53
        // 0x5885B053: push ebx
        __asm _emit 0x53
        // 0x5885B054: push ebx
        __asm _emit 0x53
        // 0x5885B055: push ebx
        __asm _emit 0x53
        // 0x5885B056: call 0x58850fd9
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
