// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A3B40 .. +0x3EA bytes.
// Source symbol alias: FUN_587a3b40.
extern "C" __declspec(naked) void FUN_587a3b40() {
    __asm {
        // 0x587A3B40: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A3B42: push 0x58980959
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A3B47: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3B4D: push eax
        __asm _emit 0x50
        // 0x587A3B4E: push ecx
        __asm _emit 0x51
        // 0x587A3B4F: push ebp
        __asm _emit 0x55
        // 0x587A3B50: push esi
        __asm _emit 0x56
        // 0x587A3B51: push edi
        __asm _emit 0x57
        // 0x587A3B52: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A3B57: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A3B59: push eax
        __asm _emit 0x50
        // 0x587A3B5A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3B5E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3B64: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A3B66: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A3B6A: mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587A3B6E: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587A3B72: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587A3B76: push eax
        __asm _emit 0x50
        // 0x587A3B77: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587A3B7B: push ecx
        __asm _emit 0x51
        // 0x587A3B7C: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587A3B80: push edx
        __asm _emit 0x52
        // 0x587A3B81: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587A3B85: push eax
        __asm _emit 0x50
        // 0x587A3B86: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587A3B8A: push ecx
        __asm _emit 0x51
        // 0x587A3B8B: push edx
        __asm _emit 0x52
        // 0x587A3B8C: push eax
        __asm _emit 0x50
        // 0x587A3B8D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A3B8F: call 0x5875bb10
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x7F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A3B94: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587A3B98: mov di, word ptr [esp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3B9D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A3BA1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A3BA3: add eax, 0xfffffc7c
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A3BA8: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3BAA: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A3BAE: mov dword ptr [esi], 0x5899990c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x0C
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A3BB4: mov dword ptr [esi + 0x134], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BBA: mov dword ptr [esi + 0x13c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BC0: mov word ptr [esi + 0x414], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BC7: mov dword ptr [esi + 0x140], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BCD: mov dword ptr [esi + 0x144], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A3BD7: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BDD: jge 0x587a3be7
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587A3BDF: lea edx, [eax + 0xe10]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BE5: jmp 0x587a3bef
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587A3BE7: cdq
        __asm _emit 0x99
        // 0x587A3BE8: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BED: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587A3BEF: lea ecx, [edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x14
        // 0x587A3BF2: mov dword ptr [esi + 0x130], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3BF8: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587A3BFD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587A3BFF: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587A3C02: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A3C04: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A3C07: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A3C09: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5A
        // 0x587A3C0C: jl 0x587a3c11
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x587A3C0E: sub eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x5A
        // 0x587A3C11: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C18: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587A3C1A: mov dword ptr [esi + 0x154], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C20: add ecx, 7
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x07
        // 0x587A3C23: mov dword ptr [esi + 0x158], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C29: mov dword ptr [esi + 0x148], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C2F: mov dword ptr [esi + 0x14c], 7
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C39: cmp di, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587A3C3C: jne 0x587a3c4a
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A3C3E: mov dword ptr [esi + 0x150], 0x46
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C48: jmp 0x587a3c54
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587A3C4A: mov dword ptr [esi + 0x150], 0x32
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C54: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A3C58: mov edx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C5E: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C64: mov dword ptr [esi + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C6A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A3C6D: sub eax, dword ptr [esi + 0x164]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C73: sub edx, 7
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x07
        // 0x587A3C76: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3C7A: fild dword ptr [esp + 0x30]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3C7E: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3C82: fild dword ptr [esp + 0x30]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3C86: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A3C8A: mov dword ptr [esi + 0x184], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C90: fdiv st(1)
        __asm _emit 0xD8
        __asm _emit 0xF1
        // 0x587A3C92: mov dword ptr [esi + 0x168], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3C98: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A3C9B: sub ecx, dword ptr [esi + 0x168]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CA1: mov edx, 0x64
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CA6: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3CAA: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587A3CAC: mov dword ptr [esi + 0x138], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CB6: mov dword ptr [esi + 0x3e0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CBC: mov word ptr [esi + 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x587A3CC0: fstp qword ptr [esi + 0x3d0]
        __asm _emit 0xDD
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CC6: fild dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A3CCA: fdivrp st(1)
        __asm _emit 0xDE
        __asm _emit 0xF1
        // 0x587A3CCC: fstp qword ptr [esi + 0x3d8]
        __asm _emit 0xDD
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CD2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x8F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A3CD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A3CDA: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3CDE: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587A3CE3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3CE5: je 0x587a3d26
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587A3CE7: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3CED: cmp dword ptr [ecx + 0x160], 0x2e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2E
        // 0x587A3CF4: jle 0x587a3d0c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587A3CF6: cmp dword ptr [ecx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3CFC: je 0x587a3d0c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A3CFE: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D04: add ecx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D0A: jmp 0x587a3d0e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3D0C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A3D0E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587A3D11: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D16: push edx
        __asm _emit 0x52
        // 0x587A3D17: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587A3D1A: push edx
        __asm _emit 0x52
        // 0x587A3D1B: push ecx
        __asm _emit 0x51
        // 0x587A3D1C: push esi
        __asm _emit 0x56
        // 0x587A3D1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A3D1F: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x0D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A3D24: jmp 0x587a3d28
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3D26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A3D28: mov byte ptr [esp + 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587A3D2D: mov dword ptr [esi + 0x3e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D33: cmp word ptr [esi + 0x414], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D3A: jne 0x587a3d64
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x587A3D3C: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3D42: cmp dword ptr [ecx + 0x164], 0x1b7
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D4C: jle 0x587a3d84
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x587A3D4E: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D54: je 0x587a3d84
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587A3D56: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D5C: mov ecx, dword ptr [ecx + 0x6dc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xDC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D62: jmp 0x587a3d86
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587A3D64: mov ecx, dword ptr [0x58a2466c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3D6A: cmp dword ptr [ecx + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D70: jle 0x587a3d84
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587A3D72: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D78: je 0x587a3d84
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A3D7A: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D80: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587A3D82: jmp 0x587a3d86
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3D84: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A3D86: mov dword ptr [esi + 0x3e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3D8C: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587A3D8F: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587A3D92: mov ecx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x14
        // 0x587A3D95: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587A3D98: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3D9A: je 0x587a3de1
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x587A3D9C: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DA1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A3DA5: mov eax, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DAB: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DB0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A3DB4: mov eax, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DBA: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DBF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A3DC3: mov eax, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DC9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DCE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A3DD2: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DD8: mov ecx, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DDE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587A3DE1: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3DE6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x8E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A3DEB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A3DEE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3DF2: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x587A3DF7: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3DF9: je 0x587a3e3d
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x587A3DFB: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3E01: cmp dword ptr [edx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x587A3E08: jle 0x587a3e20
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587A3E0A: cmp dword ptr [edx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E10: je 0x587a3e20
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A3E12: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E18: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E1E: jmp 0x587a3e22
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3E20: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3E22: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A3E25: sub ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x14
        // 0x587A3E28: push ecx
        __asm _emit 0x51
        // 0x587A3E29: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A3E2C: sub ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x1C
        // 0x587A3E2F: push ecx
        __asm _emit 0x51
        // 0x587A3E30: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587A3E32: push edx
        __asm _emit 0x52
        // 0x587A3E33: push esi
        __asm _emit 0x56
        // 0x587A3E34: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A3E36: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A3E3B: jmp 0x587a3e3f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3E3D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A3E3F: mov byte ptr [esp + 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587A3E44: mov dword ptr [esi + 0x3f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E4A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3E4C: je 0x587a3e57
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A3E4E: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E53: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A3E57: push 0x240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E5C: lea eax, [esi + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E62: push ebp
        __asm _emit 0x55
        // 0x587A3E63: push eax
        __asm _emit 0x50
        // 0x587A3E64: mov dword ptr [esi + 0x16c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E6A: mov dword ptr [esi + 0x174], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E70: mov dword ptr [esi + 0x3c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E76: mov dword ptr [esi + 0x170], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E7C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x8D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A3E81: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587A3E83: mov dword ptr [esi + 0x3ec], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E89: mov dword ptr [esi + 0x3cc], 0x48
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E93: mov dword ptr [esi + 0x3f8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E99: mov dword ptr [esi + 0x3fc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3E9F: mov dword ptr [esi + 0x404], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3EA5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x8D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A3EAA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A3EAD: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A3EB1: mov byte ptr [esp + 0x1c], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        // 0x587A3EB6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587A3EB8: je 0x587a3ef0
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587A3EBA: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3EC0: cmp dword ptr [ecx + 0x170], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587A3EC7: jle 0x587a3ee4
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587A3EC9: cmp dword ptr [ecx + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3ECF: je 0x587a3ee4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587A3ED1: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3ED7: mov edx, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x587A3EDA: push edx
        __asm _emit 0x52
        // 0x587A3EDB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A3EDD: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3EE2: jmp 0x587a3ef2
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587A3EE4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3EE6: push edx
        __asm _emit 0x52
        // 0x587A3EE7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A3EE9: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3EEE: jmp 0x587a3ef2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A3EF0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A3EF2: mov dword ptr [esi + 0x410], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3EF8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3EFD: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587A3F01: mov dword ptr [esi + 0x12c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F07: mov dword ptr [esi + 0x180], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F0D: mov dword ptr [esi + 0x184], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F13: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A3F15: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3F19: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F20: pop ecx
        __asm _emit 0x59
        // 0x587A3F21: pop edi
        __asm _emit 0x5F
        // 0x587A3F22: pop esi
        __asm _emit 0x5E
        // 0x587A3F23: pop ebp
        __asm _emit 0x5D
        // 0x587A3F24: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A3F27: ret 0x38
        __asm _emit 0xC2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
