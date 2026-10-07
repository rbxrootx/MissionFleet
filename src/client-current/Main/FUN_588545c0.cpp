// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1073 bytes in 1 exact ranges.
// Source symbol alias: FUN_588545c0.

// Ghidra body range 0x588545C0..0x588549F1; 1073 mapped bytes.
extern "C" __declspec(naked) void FUN_588545c0_segment_00() {
    __asm {
        // 0x588545C0: cmp dword ptr [0x58a248dc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588545C7: push ebx
        __asm _emit 0x53
        // 0x588545C8: push esi
        __asm _emit 0x56
        // 0x588545C9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588545CB: jne 0x58854783
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545D1: cmp dword ptr [esi + 8], 0x400
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545D8: jl 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545DE: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x588545E1: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588545E6: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545EB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588545ED: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588545F0: je 0x588545fd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588545F2: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545F8: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588545FB: jne 0x588545ff
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588545FD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588545FF: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854605: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854608: je 0x58854615
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885460A: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854610: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854613: jne 0x58854617
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58854615: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58854617: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885461D: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854620: je 0x5885462d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58854622: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854628: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x5885462B: jne 0x5885462f
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885462D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885462F: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854635: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854638: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885463E: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854644: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854647: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885464D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885464F: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854655: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58854657: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5885465A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885465C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885465E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58854664: push ebx
        __asm _emit 0x53
        // 0x58854665: call 0x587ecf10
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x88
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5885466A: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885466F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854673: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58854676: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885467B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5885467E: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58854681: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58854684: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58854688: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5885468B: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5885468F: mov eax, dword ptr [esi + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854695: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58854699: mov eax, dword ptr [esi + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885469F: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546A3: mov eax, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546A9: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546AD: mov eax, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546B3: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546B7: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546BD: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546C1: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546C7: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546CB: mov eax, dword ptr [esi + 0x304]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546D1: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546D5: mov eax, dword ptr [esi + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546DB: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588546DF: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588546E4: cmp dword ptr [eax + 0x164], 0x4ff
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546EE: jle 0x58854707
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588546F0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546F7: je 0x58854707
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588546F9: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588546FF: mov eax, dword ptr [eax + 0x13fc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xFC
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854705: jmp 0x58854709
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58854707: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58854709: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885470F: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854715: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58854718: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885471A: je 0x58854744
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5885471C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5885471F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58854722: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58854725: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58854728: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5885472B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885472D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58854730: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58854732: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58854735: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58854738: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885473B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5885473E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58854741: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58854744: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885474A: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854750: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854755: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885475A: mov edx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854760: mov ecx, dword ptr [edx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854766: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58854768: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xE5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885476D: mov eax, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854773: mov ecx, dword ptr [eax + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854779: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885477B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xE5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58854780: pop esi
        __asm _emit 0x5E
        // 0x58854781: pop ebx
        __asm _emit 0x5B
        // 0x58854782: ret
        __asm _emit 0xC3
        // 0x58854783: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x58854786: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5885478B: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854790: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58854792: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x58854795: je 0x588547a2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58854797: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885479D: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547A0: jne 0x588547a4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588547A2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588547A4: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547AA: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547AD: je 0x588547ba
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588547AF: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547B5: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547B8: jne 0x588547bc
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588547BA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588547BC: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547C2: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547C5: je 0x588547d2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588547C7: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547CD: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547D0: jne 0x588547d4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588547D2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588547D4: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547DA: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547DD: je 0x588547ea
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588547DF: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547E5: cmp dword ptr [edx + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x5C
        // 0x588547E8: jne 0x588547ec
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588547EA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588547EC: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588547F0: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547F5: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588547F8: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588547FD: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58854800: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854806: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885480C: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58854810: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58854814: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58854817: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x58854819: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885481F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58854821: je 0x588549ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854827: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885482D: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58854830: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58854833: push ebp
        __asm _emit 0x55
        // 0x58854834: push edi
        __asm _emit 0x57
        // 0x58854835: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58854838: push edx
        __asm _emit 0x52
        // 0x58854839: push eax
        __asm _emit 0x50
        // 0x5885483A: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5885483D: mov dword ptr [esi + 0x54], 0x400
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854844: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58854849: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885484F: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854856: mov dword ptr [eax + 0x54], 0xffffffc4
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885485D: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854863: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58854865: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58854868: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885486A: mov edi, 0x3d
        __asm _emit 0xBF
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885486F: lea ebp, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854875: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58854878: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885487B: add eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x68
        // 0x5885487E: push eax
        __asm _emit 0x50
        // 0x5885487F: push edi
        __asm _emit 0x57
        // 0x58854880: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x17
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58854885: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58854888: add ecx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885488E: push ecx
        __asm _emit 0x51
        // 0x5885488F: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58854892: push edi
        __asm _emit 0x57
        // 0x58854893: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58854898: add edi, 0x4c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x4C
        // 0x5885489B: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x5885489E: cmp edi, 0x16d
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588548A4: jl 0x58854875
        __asm _emit 0x7C
        __asm _emit 0xCF
        // 0x588548A6: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588548AC: pop edi
        __asm _emit 0x5F
        // 0x588548AD: pop ebp
        __asm _emit 0x5D
        // 0x588548AE: cmp byte ptr [edx + 0x74], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x74
        // 0x588548B1: jne 0x588548c6
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588548B3: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588548B9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588548BC: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588548BF: mov dword ptr [eax + 0x54], 0x500
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588548C6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588548CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588548CE: call 0x587ecf10
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x86
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588548D3: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588548D8: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588548DC: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588548DF: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x588548E2: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588548E5: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588548E8: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588548ED: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588548F1: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588548F4: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588548F6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588548FA: mov eax, dword ptr [esi + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854900: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854904: mov eax, dword ptr [esi + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885490A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885490E: mov eax, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854914: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854918: mov eax, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885491E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58854922: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854928: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885492C: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854932: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58854936: mov eax, dword ptr [esi + 0x304]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885493C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854940: mov eax, dword ptr [esi + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854946: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885494A: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885494F: cmp dword ptr [eax + 0x164], 0x1ef
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xEF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854959: jle 0x58854972
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5885495B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854962: je 0x58854972
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58854964: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885496A: mov eax, dword ptr [eax + 0x7bc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854970: jmp 0x58854974
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58854972: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58854974: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885497A: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854980: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58854983: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58854985: je 0x588549af
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58854987: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5885498A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5885498D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58854990: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58854993: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58854996: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58854998: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5885499B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885499D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588549A0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588549A3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588549A6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588549A9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588549AC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588549AF: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549B5: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549BB: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549C0: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xE3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588549C5: mov edx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549CB: mov ecx, dword ptr [edx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549D1: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549D6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xE3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588549DB: mov eax, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549E1: mov ecx, dword ptr [eax + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588549E7: push 0x46
        __asm _emit 0x6A
        __asm _emit 0x46
        // 0x588549E9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xE3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588549EE: pop esi
        __asm _emit 0x5E
        // 0x588549EF: pop ebx
        __asm _emit 0x5B
        // 0x588549F0: ret
        __asm _emit 0xC3
    }
}
