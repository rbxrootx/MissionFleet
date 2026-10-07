// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2092 bytes in 6 exact ranges.
// Source symbol alias: FUN_589091f0.

// Ghidra body range 0x589091F0..0x5890933F; 335 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_00() {
    __asm {
        // 0x589091F0: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589091F6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x589091FB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x589091FD: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909204: mov eax, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890920B: push ebx
        __asm _emit 0x53
        // 0x5890920C: push ebp
        __asm _emit 0x55
        // 0x5890920D: push esi
        __asm _emit 0x56
        // 0x5890920E: push edi
        __asm _emit 0x57
        // 0x5890920F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58909211: push 0x8000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58909216: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58909218: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890921A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890921C: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58909221: push eax
        __asm _emit 0x50
        // 0x58909222: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58909224: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890922A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5890922C: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58909230: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58909233: je 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909239: mov ebx, dword ptr [0x5898c190]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890923F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58909241: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58909245: push eax
        __asm _emit 0x50
        // 0x58909246: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890924B: lea edi, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5890924E: push edi
        __asm _emit 0x57
        // 0x5890924F: push esi
        __asm _emit 0x56
        // 0x58909250: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58909252: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58909255: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890925B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890925D: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58909261: push ecx
        __asm _emit 0x51
        // 0x58909262: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58909264: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58909268: push edx
        __asm _emit 0x52
        // 0x58909269: push esi
        __asm _emit 0x56
        // 0x5890926A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5890926C: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5890926F: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909275: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58909277: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58909279: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5890927B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890927D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5890927F: mov dword ptr [esp + 0x28], 0x23
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909287: movsx ebx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x18
        // 0x5890928A: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5890928C: movsx ebx, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x58909290: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58909292: movsx ebx, byte ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x58909296: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x58909298: movsx ebx, byte ptr [eax + 3]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5890929C: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x5890929E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x589092A1: sub dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x589092A6: jne 0x58909287
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x589092A8: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x589092AA: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x589092AC: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x589092AE: cmp ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589092B2: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589092B8: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589092BA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589092BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x589092C0: mov cl, byte ptr [eax + ebp + 4]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x28
        __asm _emit 0x04
        // 0x589092C4: cmp cl, byte ptr [eax + 0x589a2a68]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589092CA: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589092D0: inc eax
        __asm _emit 0x40
        // 0x589092D1: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x589092D4: jl 0x589092c0
        __asm _emit 0x7C
        __asm _emit 0xEA
        // 0x589092D6: mov eax, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x5C
        // 0x589092D9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x589092DB: mov edx, 0x7c
        __asm _emit 0xBA
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589092E0: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x589092E2: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x589092E5: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x589092E7: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x589092E9: push ecx
        __asm _emit 0x51
        // 0x589092EA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589092EF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589092F2: mov dword ptr [ebp + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589092F8: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x589092FA: je 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909300: mov eax, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x5C
        // 0x58909303: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58909305: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890930A: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5890930C: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x5890930F: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58909311: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58909313: push ecx
        __asm _emit 0x51
        // 0x58909314: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58909319: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890931C: mov dword ptr [ebp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909322: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58909324: je 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890932A: cmp dword ptr [ebp + 0x5c], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5890932D: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58909331: jle 0x58909a44
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x0D
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909337: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58909339: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890933D: jmp 0x58909342
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58909340..0x58909831; 1265 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_01() {
    __asm {
        // 0x58909340: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58909342: cmp byte ptr [ebp + 0x58], 2
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x58909346: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890934A: mov eax, dword ptr [0x5898c190]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890934F: jne 0x5890954a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909355: mov cl, byte ptr [ebp + 0x59]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0x59
        // 0x58909358: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5890935B: jne 0x589093c6
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x5890935D: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909363: push esi
        __asm _emit 0x56
        // 0x58909364: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58909368: push ecx
        __asm _emit 0x51
        // 0x58909369: push 0x7c
        __asm _emit 0x6A
        __asm _emit 0x7C
        // 0x5890936B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x5890936D: push edx
        __asm _emit 0x52
        // 0x5890936E: push edi
        __asm _emit 0x57
        // 0x5890936F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58909371: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58909374: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890937A: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909380: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58909382: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909386: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890938A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890938C: mov dword ptr [esp + 0x14], 0x1f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909394: movsx edx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x10
        // 0x58909397: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58909399: movsx edx, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5890939D: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5890939F: movsx edx, byte ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x589093A3: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589093A7: movsx edx, byte ptr [eax + 3]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x589093AB: add dword ptr [esp + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589093AF: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x589093B2: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x589093B7: jne 0x58909394
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x589093B9: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589093BD: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589093C1: jmp 0x589096b1
        __asm _emit 0xE9
        __asm _emit 0xEB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589093C6: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x589093C9: jne 0x5890954a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589093CF: push esi
        __asm _emit 0x56
        // 0x589093D0: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589093D4: push ecx
        __asm _emit 0x51
        // 0x589093D5: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x589093D7: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x589093DB: push edx
        __asm _emit 0x52
        // 0x589093DC: push edi
        __asm _emit 0x57
        // 0x589093DD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589093DF: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x589093E2: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589093E8: movzx ecx, byte ptr [esp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589093ED: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589093F3: mov byte ptr [ebx + eax], cl
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x589093F6: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589093FC: mov dword ptr [ebx + edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x04
        // 0x58909400: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909406: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890940A: mov dword ptr [ebx + eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x08
        // 0x5890940E: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909414: lea edi, [ebx + edx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x13
        __asm _emit 0x0C
        // 0x58909418: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890941D: lea esi, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58909421: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58909423: movzx ecx, byte ptr [esp + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58909428: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890942E: mov byte ptr [ebx + eax + 0x34], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x34
        // 0x58909432: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909438: mov al, byte ptr [esp + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x61
        // 0x5890943C: mov byte ptr [ebx + edx + 0x35], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x35
        // 0x58909440: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909446: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5890944A: mov dword ptr [ebx + eax + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x38
        // 0x5890944E: mov edx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58909452: mov dword ptr [ebx + eax + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x3C
        // 0x58909456: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890945C: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58909460: mov dword ptr [ebx + eax + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x40
        // 0x58909464: mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58909468: mov dword ptr [ebx + eax + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x44
        // 0x5890946C: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909472: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58909476: mov dword ptr [ebx + eax + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x48
        // 0x5890947A: mov edx, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x5890947E: mov dword ptr [ebx + eax + 0x4c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x4C
        // 0x58909482: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909488: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5890948C: mov dword ptr [ebx + eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x50
        // 0x58909490: mov edx, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909497: mov dword ptr [ebx + eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x54
        // 0x5890949B: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094A1: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094A8: mov dword ptr [ebx + eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x58
        // 0x589094AC: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094B2: mov dword ptr [ebx + edx + 0x5c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094BA: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094C0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589094C2: mov dword ptr [ebx + eax + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x60
        // 0x589094C6: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094CC: mov dword ptr [ebx + ecx + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x64
        // 0x589094D0: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094D6: mov dword ptr [ebx + edx + 0x68], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x68
        // 0x589094DA: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094E0: mov dword ptr [ebx + eax + 0x6c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x6C
        // 0x589094E4: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094EA: mov dword ptr [ebx + ecx + 0x70], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x70
        // 0x589094EE: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094F4: mov dword ptr [ebx + edx + 0x74], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x74
        // 0x589094F8: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589094FE: mov ecx, dword ptr [esp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909505: mov dword ptr [ebx + eax + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x78
        // 0x58909509: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890950D: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909511: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58909513: lea eax, [esp + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x58909517: mov dword ptr [esp + 0x14], 0x1d
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890951F: nop
        __asm _emit 0x90
        // 0x58909520: movsx edx, byte ptr [eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x58909524: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58909526: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x5890952A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5890952C: movsx edx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x10
        // 0x5890952F: add dword ptr [esp + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909533: movsx edx, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58909537: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890953B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5890953E: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58909543: jne 0x58909520
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x58909545: jmp 0x589096a9
        __asm _emit 0xE9
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890954A: push esi
        __asm _emit 0x56
        // 0x5890954B: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890954F: push ecx
        __asm _emit 0x51
        // 0x58909550: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x58909552: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58909556: push edx
        __asm _emit 0x52
        // 0x58909557: push edi
        __asm _emit 0x57
        // 0x58909558: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890955A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5890955D: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909563: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909569: mov cl, byte ptr [esp + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890956D: mov byte ptr [ebx + eax], cl
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x58909570: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58909574: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890957A: mov dword ptr [ebx + edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x08
        // 0x5890957E: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909584: lea edi, [ebx + ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x0C
        // 0x58909588: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890958D: lea esi, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58909591: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58909593: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909599: mov al, byte ptr [esp + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5890959D: mov byte ptr [ebx + edx + 0x34], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x34
        // 0x589095A1: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589095A7: mov dl, byte ptr [esp + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x61
        // 0x589095AB: mov byte ptr [ebx + ecx + 0x35], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x35
        // 0x589095AF: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589095B5: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x589095B9: mov dword ptr [ebx + eax + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x38
        // 0x589095BD: mov edx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x589095C1: mov dword ptr [ebx + eax + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x3C
        // 0x589095C5: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589095CB: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x589095CF: mov dword ptr [ebx + eax + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x40
        // 0x589095D3: mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x589095D7: mov dword ptr [ebx + eax + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x44
        // 0x589095DB: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589095E1: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x589095E5: mov dword ptr [ebx + eax + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x48
        // 0x589095E9: mov edx, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x589095ED: mov dword ptr [ebx + eax + 0x4c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x4C
        // 0x589095F1: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589095F7: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x589095FB: mov dword ptr [ebx + eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x50
        // 0x589095FF: mov edx, dword ptr [esp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909606: mov dword ptr [ebx + eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x54
        // 0x5890960A: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909610: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909617: mov dword ptr [ebx + eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x58
        // 0x5890961B: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909621: mov dword ptr [ebx + edx + 0x5c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909629: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890962F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58909631: mov dword ptr [ebx + eax + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x60
        // 0x58909635: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890963B: mov dword ptr [ebx + edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x64
        // 0x5890963F: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909645: mov dword ptr [ebx + eax + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x68
        // 0x58909649: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890964F: mov dword ptr [ebx + edx + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x6C
        // 0x58909653: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909659: mov dword ptr [ebx + eax + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x70
        // 0x5890965D: mov eax, dword ptr [esp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909664: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890966A: mov dword ptr [ebx + edx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x78
        // 0x5890966E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58909670: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58909674: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909678: lea eax, [esp + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x5890967C: mov dword ptr [esp + 0x14], 0x17
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909684: movsx edx, byte ptr [eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x58909688: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5890968A: movsx edx, byte ptr [eax - 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x5890968E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58909690: movsx edx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x10
        // 0x58909693: add dword ptr [esp + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909697: movsx edx, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5890969B: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890969F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x589096A2: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x589096A7: jne 0x58909684
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x589096A9: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589096AD: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589096B1: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x589096B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589096B5: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589096B9: push eax
        __asm _emit 0x50
        // 0x589096BA: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x589096BC: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x589096BE: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x589096C2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x589096C4: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589096C8: push ecx
        __asm _emit 0x51
        // 0x589096C9: push edx
        __asm _emit 0x52
        // 0x589096CA: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589096D0: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x589096D3: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589096D9: cmp esi, dword ptr [esp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589096DD: jne 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589096E3: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589096E9: lea ecx, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x589096EC: mov eax, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x3C
        // 0x589096EF: imul eax, dword ptr [ecx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x38
        // 0x589096F3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x589096F5: mov edx, 0x14
        __asm _emit 0xBA
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589096FA: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x589096FC: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x589096FF: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58909701: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58909703: push ecx
        __asm _emit 0x51
        // 0x58909704: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58909709: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890970D: mov ecx, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909713: mov dword ptr [edx + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x58909716: mov eax, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890971C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5890971E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58909721: cmp dword ptr [edx], 0
        __asm _emit 0x83
        __asm _emit 0x3A
        __asm _emit 0x00
        // 0x58909724: je 0x58909a56
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890972A: mov al, byte ptr [ebp + 0x58]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x58
        // 0x5890972D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890972F: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58909733: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58909735: jne 0x58909839
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890973B: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909741: mov eax, dword ptr [ecx + ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x3C
        // 0x58909745: imul eax, dword ptr [ecx + ebx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x38
        // 0x5890974A: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5890974C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890974E: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909753: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58909755: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58909758: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5890975A: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5890975C: push ecx
        __asm _emit 0x51
        // 0x5890975D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58909762: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58909764: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58909767: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890976B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890976D: je 0x58909a67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909773: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909779: mov edx, dword ptr [eax + ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x3C
        // 0x5890977D: imul edx, dword ptr [eax + ebx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x38
        // 0x58909782: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58909784: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58909788: push edi
        __asm _emit 0x57
        // 0x58909789: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890978D: push ecx
        __asm _emit 0x51
        // 0x5890978E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58909790: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58909792: push edx
        __asm _emit 0x52
        // 0x58909793: push esi
        __asm _emit 0x56
        // 0x58909794: push eax
        __asm _emit 0x50
        // 0x58909795: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890979B: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097A1: lea eax, [ebx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x589097A4: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x589097A7: imul ecx, dword ptr [eax + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x38
        // 0x589097AB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589097AD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589097AF: jle 0x5890982b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589097B7: mov esi, dword ptr [esi + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x96
        // 0x589097BA: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589097BE: add edi, esi
        __asm _emit 0x03
        __asm _emit 0xFE
        // 0x589097C0: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589097C4: mov edi, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097CA: mov edi, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x589097CD: mov dword ptr [eax + edi], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x38
        // 0x589097D0: mov esi, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097D6: mov edi, dword ptr [ecx + esi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x31
        // 0x589097D9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589097DB: mov dword ptr [edi + eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x04
        // 0x589097DF: mov edi, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097E5: mov edi, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x589097E8: mov dword ptr [edi + eax + 8], 0x100
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097F0: mov edi, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589097F6: mov edi, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x589097F9: mov dword ptr [edi + eax + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x0C
        // 0x589097FD: mov edi, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909803: mov ecx, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x39
        // 0x58909806: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890980A: mov dword ptr [ecx + eax + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x10
        // 0x5890980E: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909814: mov esi, dword ptr [ecx + ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x3C
        // 0x58909818: imul esi, dword ptr [ecx + ebx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x38
        // 0x5890981D: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5890981F: inc edx
        __asm _emit 0x42
        // 0x58909820: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58909823: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58909825: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58909829: jl 0x589097b7
        __asm _emit 0x7C
        __asm _emit 0x8C
        // 0x5890982B: push esi
        __asm _emit 0x56
        // 0x5890982C: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58909839..0x58909897; 94 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_02() {
    __asm {
        // 0x58909839: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5890983B: jne 0x58909a1e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909841: mov al, byte ptr [ebp + 0x59]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x59
        // 0x58909844: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58909846: jne 0x589098d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890984C: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909852: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x58909854: lea ecx, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x58909857: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58909859: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890985D: push eax
        __asm _emit 0x50
        // 0x5890985E: mov eax, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x3C
        // 0x58909861: imul eax, dword ptr [ecx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x38
        // 0x58909865: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x58909868: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890986C: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5890986E: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58909870: push ecx
        __asm _emit 0x51
        // 0x58909871: push edx
        __asm _emit 0x52
        // 0x58909872: push eax
        __asm _emit 0x50
        // 0x58909873: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58909879: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890987F: lea eax, [ebx + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x13
        // 0x58909882: mov edx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x3C
        // 0x58909885: imul edx, dword ptr [eax + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x50
        __asm _emit 0x38
        // 0x58909889: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890988B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890988D: jle 0x58909a1e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909893: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58909895: jmp 0x589098a0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x589098A0..0x58909948; 168 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_03() {
    __asm {
        // 0x589098A0: mov eax, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098A6: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589098AA: mov eax, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x06
        // 0x589098AD: add edi, dword ptr [eax + edx]
        __asm _emit 0x03
        __asm _emit 0x3C
        __asm _emit 0x10
        // 0x589098B0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x589098B2: mov dword ptr [eax + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098B9: mov eax, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098BF: mov esi, dword ptr [eax + ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x3C
        // 0x589098C3: imul esi, dword ptr [eax + ebx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x38
        // 0x589098C8: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x589098CA: inc ecx
        __asm _emit 0x41
        // 0x589098CB: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x589098CE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x589098D0: jl 0x589098a0
        __asm _emit 0x7C
        __asm _emit 0xCE
        // 0x589098D2: jmp 0x58909a1e
        __asm _emit 0xE9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098D7: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x589098D9: jne 0x58909a1e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098DF: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098E5: mov edx, dword ptr [ebx + ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x74
        // 0x589098E9: push edx
        __asm _emit 0x52
        // 0x589098EA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589098EF: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589098F5: mov edx, dword ptr [ebx + ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x74
        // 0x589098F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589098FC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x589098FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58909900: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58909904: push eax
        __asm _emit 0x50
        // 0x58909905: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58909909: push edx
        __asm _emit 0x52
        // 0x5890990A: push esi
        __asm _emit 0x56
        // 0x5890990B: push eax
        __asm _emit 0x50
        // 0x5890990C: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58909910: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58909916: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890991C: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x5890991E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58909920: mov esi, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x3C
        // 0x58909923: imul esi, dword ptr [edx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x72
        __asm _emit 0x38
        // 0x58909927: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58909929: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890992B: jle 0x589099a3
        __asm _emit 0x7E
        __asm _emit 0x76
        // 0x5890992D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58909930: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58909932: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58909935: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58909937: jbe 0x5890998b
        __asm _emit 0x76
        __asm _emit 0x52
        // 0x58909939: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5890993C: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5890993E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58909940: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58909942: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909946: jmp 0x58909950
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58909950..0x589099D0; 128 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_04() {
    __asm {
        // 0x58909950: mov eax, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909956: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890995A: mov eax, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x07
        // 0x5890995D: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x5890995F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58909961: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58909963: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58909966: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58909969: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5890996C: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5890996F: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58909972: mov dword ptr [eax + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x58909975: mov edi, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x58909978: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5890997B: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5890997E: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58909981: jne 0x58909950
        __asm _emit 0x75
        __asm _emit 0xCD
        // 0x58909983: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58909987: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890998B: mov edx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909991: mov esi, dword ptr [edx + ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x1A
        __asm _emit 0x3C
        // 0x58909995: imul esi, dword ptr [edx + ebx + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x1A
        __asm _emit 0x38
        // 0x5890999A: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x5890999C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5890999F: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x589099A1: jl 0x58909930
        __asm _emit 0x7C
        __asm _emit 0x8D
        // 0x589099A3: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589099A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589099AB: cmp dword ptr [ebx + ecx + 0x74], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x74
        // 0x589099AF: jbe 0x589099c6
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x589099B1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x589099B3: mov ecx, dword ptr [ebx + edx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x74
        // 0x589099B7: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589099BB: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x589099BF: inc eax
        __asm _emit 0x40
        // 0x589099C0: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x589099C2: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x589099C4: jb 0x589099b7
        __asm _emit 0x72
        __asm _emit 0xF1
        // 0x589099C6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589099CA: push eax
        __asm _emit 0x50
        // 0x589099CB: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58909A1E..0x58909A84; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_589091f0_segment_05() {
    __asm {
        // 0x58909A1E: mov ecx, dword ptr [ebp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A24: cmp edi, dword ptr [ebx + ecx + 0x78]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x78
        // 0x58909A28: jne 0x58909a67
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58909A2A: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58909A2E: add dword ptr [esp + 0x20], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58909A33: inc eax
        __asm _emit 0x40
        // 0x58909A34: add ebx, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x7C
        // 0x58909A37: cmp eax, dword ptr [ebp + 0x5c]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x5C
        // 0x58909A3A: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58909A3E: jl 0x58909340
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFC
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58909A44: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58909A48: push ecx
        __asm _emit 0x51
        // 0x58909A49: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58909A4F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A54: jmp 0x58909a69
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58909A56: mov edx, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A5C: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58909A60: mov dword ptr [edx + eax*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A67: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58909A69: mov ecx, dword ptr [esp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A70: pop edi
        __asm _emit 0x5F
        // 0x58909A71: pop esi
        __asm _emit 0x5E
        // 0x58909A72: pop ebp
        __asm _emit 0x5D
        // 0x58909A73: pop ebx
        __asm _emit 0x5B
        // 0x58909A74: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58909A76: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58909A7B: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58909A81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
