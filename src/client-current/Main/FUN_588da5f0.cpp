// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 758 bytes in 1 exact ranges.
// Source symbol alias: FUN_588da5f0.

// Ghidra body range 0x588DA5F0..0x588DA8E6; 758 mapped bytes.
extern "C" __declspec(naked) void FUN_588da5f0_segment_00() {
    __asm {
        // 0x588DA5F0: push ebx
        __asm _emit 0x53
        // 0x588DA5F1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DA5F3: push esi
        __asm _emit 0x56
        // 0x588DA5F4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DA5F6: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA5FC: push edi
        __asm _emit 0x57
        // 0x588DA5FD: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x588DA600: mov dword ptr [esi + 0x6108], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA60A: mov dword ptr [esi + 0x6310], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA610: mov dword ptr [esi + 0x6314], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x14
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA616: mov byte ptr [esi + 0x610c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA61C: mov dword ptr [esi + 0x140c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA622: mov dword ptr [esi + 0x1410], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA628: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DA62A: je 0x588da64b
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588DA62C: movzx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588DA630: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA636: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588DA63B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588DA63D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588DA640: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DA642: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DA645: lea eax, [edx + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x588DA649: jmp 0x588da64d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DA64B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA64D: mov dword ptr [esi + 0x1414], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA653: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA655: mov word ptr [esi + 0x164], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA65C: mov edi, 0xaaaaaaaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DA661: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DA666: mov dword ptr [esi + 0x6088], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA66C: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA672: mov dword ptr [esi + 0x60a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA678: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA67A: mov dword ptr [esi + 0x1444], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA680: mov dword ptr [esi + 0x1438], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA686: mov dword ptr [esi + 0x143c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA68C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DA68E: mov word ptr [esi + 0x60b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA695: mov dword ptr [esi + 0x1440], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DA69F: mov dword ptr [esi + 0x6058], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6A5: mov dword ptr [esi + 0x6064], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6AB: mov dword ptr [esi + 0x340], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6B1: mov dword ptr [esi + 0x1258], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6BB: mov dword ptr [esi + 0x168], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6C1: mov dword ptr [esi + 0x60c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6C7: mov dword ptr [esi + 0x6078], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6CD: mov dword ptr [esi + 0x6080], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6D3: mov dword ptr [esi + 0x6084], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6D9: mov dword ptr [esi + 0x6068], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6DF: mov byte ptr [esi + 0x60ac], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6E5: mov byte ptr [esi + 0x60ad], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6EB: mov dword ptr [esi + 0x60bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6F1: mov dword ptr [esi + 0x607c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6F7: mov dword ptr [esi + 0x608c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA6FD: mov dword ptr [esi + 0x60a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA703: mov dword ptr [esi + 0x60a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA709: mov dword ptr [esi + 0x6094], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA70F: mov dword ptr [esi + 0x6098], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA715: mov dword ptr [esi + 0x60b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA71B: mov dword ptr [esi + 0x609c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA721: mov dword ptr [esi + 0x6090], 0x40000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA72B: mov dword ptr [esi + 0x60b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA731: mov dword ptr [esi + 0x6050], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA73B: mov dword ptr [esi + 0x6054], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA741: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DA743: mov word ptr [esi + 0x60ba], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA74A: mov dword ptr [esi + 0x1420], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA750: mov dword ptr [esi + 0x1424], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA756: mov dword ptr [esi + 0x1428], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA75C: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA761: mov dword ptr [esi + 0x142c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA767: lea ecx, [esi + 0x1484]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA76D: push ebx
        __asm _emit 0x53
        // 0x588DA76E: push ecx
        __asm _emit 0x51
        // 0x588DA76F: mov dword ptr [esi + 0x1480], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA775: mov dword ptr [esi + 0x1478], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA77B: mov dword ptr [esi + 0x147c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA781: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DA786: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA788: mov dword ptr [esi + 0x603c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA78E: mov dword ptr [esi + 0x6040], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA794: mov dword ptr [esi + 0x602c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA79A: push 0x180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA79F: mov dword ptr [esi + 0x6030], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7A5: lea edx, [esi + 0x411c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7AB: push ebx
        __asm _emit 0x53
        // 0x588DA7AC: mov dword ptr [esi + 0x6034], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7B2: push edx
        __asm _emit 0x52
        // 0x588DA7B3: mov dword ptr [esi + 0x6038], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7B9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DA7BE: push 0x6c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7C3: lea eax, [esi + 0x42e0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7C9: push ebx
        __asm _emit 0x53
        // 0x588DA7CA: push eax
        __asm _emit 0x50
        // 0x588DA7CB: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DA7D0: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x588DA7D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DA7D5: mov dword ptr [esi + 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7DB: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7E1: mov dword ptr [esi + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7E7: mov dword ptr [esi + 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7ED: mov dword ptr [esi + 0x18c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7F3: mov dword ptr [esi + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7F9: mov dword ptr [esi + 0x194], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA7FF: mov dword ptr [esi + 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA805: mov dword ptr [esi + 0x19c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA80B: mov dword ptr [esi + 0x1a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA811: mov dword ptr [esi + 0x1a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA817: mov dword ptr [esi + 0x1a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA81D: mov dword ptr [esi + 0x1ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA823: mov dword ptr [esi + 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA829: mov dword ptr [esi + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA82F: mov dword ptr [esi + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA835: mov dword ptr [esi + 0x1bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA83B: mov dword ptr [esi + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA841: mov dword ptr [esi + 0x1c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA847: mov dword ptr [esi + 0x1c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA84D: mov dword ptr [esi + 0x1cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA853: mov dword ptr [esi + 0x1d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA859: mov dword ptr [esi + 0x1d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA85F: mov dword ptr [esi + 0x1d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA865: mov dword ptr [esi + 0x1dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA86B: mov dword ptr [esi + 0x1e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA871: mov dword ptr [esi + 0x1e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA877: mov dword ptr [esi + 0x1e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA87D: mov dword ptr [esi + 0x1ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA883: mov dword ptr [esi + 0x1f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA889: mov dword ptr [esi + 0x1f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA88F: mov dword ptr [esi + 0x1f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA895: movzx dx, byte ptr [esi + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA89D: mov cx, word ptr [esi + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8A4: mov dword ptr [esi + 0x1264], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8AA: mov dword ptr [esi + 0x1268], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8B0: mov dword ptr [esi + 0x126c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8B6: mov dword ptr [esi + 0x1270], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8BC: mov dword ptr [esi + 0x1274], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8C2: mov dword ptr [esi + 0x1278], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8C8: mov dword ptr [esi + 0x1284], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8CE: pop edi
        __asm _emit 0x5F
        // 0x588DA8CF: mov dword ptr [esi + 0x1288], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8D5: mov word ptr [esi + 0x1260], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8DC: mov word ptr [esi + 0x1262], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8E3: pop esi
        __asm _emit 0x5E
        // 0x588DA8E4: pop ebx
        __asm _emit 0x5B
        // 0x588DA8E5: ret
        __asm _emit 0xC3
    }
}
