// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58752000 .. +0x1A0 bytes.
// Source symbol alias: FUN_58752000.
extern "C" __declspec(naked) void FUN_58752000() {
    __asm {
        // 0x58752000: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58752002: push 0x5898498b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752007: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875200D: push eax
        __asm _emit 0x50
        // 0x5875200E: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58752011: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58752016: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58752018: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5875201C: push ebx
        __asm _emit 0x53
        // 0x5875201D: push ebp
        __asm _emit 0x55
        // 0x5875201E: push esi
        __asm _emit 0x56
        // 0x5875201F: push edi
        __asm _emit 0x57
        // 0x58752020: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58752025: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58752027: push eax
        __asm _emit 0x50
        // 0x58752028: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5875202C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752032: mov ebp, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752039: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5875203B: mov esi, dword ptr [edi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752041: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58752043: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58752045: je 0x58752080
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x58752047: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875204A: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5875204D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5875204F: nop
        __asm _emit 0x90
        // 0x58752050: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58752052: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58752054: jne 0x58752070
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58752056: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x58752058: je 0x5875206c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5875205A: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5875205D: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58752060: jne 0x58752070
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58752062: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58752065: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58752068: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x5875206A: jne 0x58752050
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5875206C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875206E: jmp 0x58752075
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58752070: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58752072: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58752075: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58752077: je 0x58752080
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58752079: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x5875207C: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5875207E: jne 0x58752047
        __asm _emit 0x75
        __asm _emit 0xC7
        // 0x58752080: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58752082: mov eax, 0x58a0b450
        __asm _emit 0xB8
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58752087: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58752089: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x5875208B: jne 0x587520a7
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5875208D: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x5875208F: je 0x587520a3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58752091: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58752094: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58752097: jne 0x587520a7
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58752099: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5875209C: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x5875209F: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x587520A1: jne 0x58752087
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587520A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587520A5: jmp 0x587520ac
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587520A7: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587520A9: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587520AC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587520AE: je 0x5875217f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587520B4: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587520B6: jne 0x5875217f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587520BC: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587520C1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xAB
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587520C6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587520C9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587520CD: mov dword ptr [esp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587520D4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587520D6: je 0x587520f4
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587520D8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587520DA: push ebx
        __asm _emit 0x53
        // 0x587520DB: push ebx
        __asm _emit 0x53
        // 0x587520DC: push 0xffffff38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587520E1: push 0xffffff38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587520E6: push edi
        __asm _emit 0x57
        // 0x587520E7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587520E9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587520EB: call 0x5875a7e0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587520F0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587520F2: jmp 0x587520f6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587520F4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587520F6: push ebp
        __asm _emit 0x55
        // 0x587520F7: lea ecx, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x587520FB: push ecx
        __asm _emit 0x51
        // 0x587520FC: mov dword ptr [esp + 0x8c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58752107: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875210B: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752111: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58752115: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58752117: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58752119: push ecx
        __asm _emit 0x51
        // 0x5875211A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875211C: mov word ptr [esp + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x58752121: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58752125: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58752129: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5875212D: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58752131: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58752135: mov word ptr [esp + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5875213A: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875213F: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752144: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58752148: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875214D: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58752151: cmp dword ptr [edi + 0x90], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752157: jne 0x58752161
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58752159: mov dword ptr [edi + 0x90], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875215F: jmp 0x58752173
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58752161: mov ecx, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752167: mov dword ptr [ecx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x5875216A: mov edx, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752170: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58752173: inc dword ptr [edi + 0xa0]
        __asm _emit 0xFF
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752179: mov dword ptr [edi + 0x94], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875217F: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58752183: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875218A: pop ecx
        __asm _emit 0x59
        // 0x5875218B: pop edi
        __asm _emit 0x5F
        // 0x5875218C: pop esi
        __asm _emit 0x5E
        // 0x5875218D: pop ebp
        __asm _emit 0x5D
        // 0x5875218E: pop ebx
        __asm _emit 0x5B
        // 0x5875218F: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58752193: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58752195: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xAA
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875219A: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x74
        // 0x5875219D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
