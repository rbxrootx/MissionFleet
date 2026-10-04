// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F5180 .. +0x37C bytes.
// Source symbol alias: FUN_588f5180.
extern "C" __declspec(naked) void FUN_588f5180() {
    __asm {
        // 0x588F5180: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F5182: push 0x58989ebe
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F5187: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F518D: push eax
        __asm _emit 0x50
        // 0x588F518E: push ecx
        __asm _emit 0x51
        // 0x588F518F: push ebx
        __asm _emit 0x53
        // 0x588F5190: push ebp
        __asm _emit 0x55
        // 0x588F5191: push esi
        __asm _emit 0x56
        // 0x588F5192: push edi
        __asm _emit 0x57
        // 0x588F5193: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F5198: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F519A: push eax
        __asm _emit 0x50
        // 0x588F519B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F519F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F51A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F51A7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F51AB: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588F51AF: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588F51B3: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588F51B7: mov edi, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588F51BB: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F51BF: push eax
        __asm _emit 0x50
        // 0x588F51C0: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588F51C4: push ecx
        __asm _emit 0x51
        // 0x588F51C5: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588F51C9: push edx
        __asm _emit 0x52
        // 0x588F51CA: push eax
        __asm _emit 0x50
        // 0x588F51CB: push edi
        __asm _emit 0x57
        // 0x588F51CC: push ebp
        __asm _emit 0x55
        // 0x588F51CD: push ecx
        __asm _emit 0x51
        // 0x588F51CE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F51D0: call 0x5875bb10
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x69
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588F51D5: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F51D9: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F51DD: mov dword ptr [esi + 0x13c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F51E3: mov dword ptr [esi], 0x589a19c4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC4
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F51E9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F51EB: mov dword ptr [esi + 0x144], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F51F1: mov dword ptr [esi + 0x424], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F51F7: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588F51F9: mov dword ptr [esi + 0x124], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F51FF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F5202: mov dword ptr [esi + 0x128], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5208: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F520B: mov dword ptr [esi + 0x12c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5211: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588F5214: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F5216: mov eax, 0xb60b60b7
        __asm _emit 0xB8
        __asm _emit 0xB7
        __asm _emit 0x60
        __asm _emit 0x0B
        __asm _emit 0xB6
        // 0x588F521B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F521D: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588F521F: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588F5222: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F5224: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F5227: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F5229: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F522F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F5233: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F5235: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F523B: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5241: mov eax, 0xba2e8ba3
        __asm _emit 0xB8
        __asm _emit 0xA3
        __asm _emit 0x8B
        __asm _emit 0x2E
        __asm _emit 0xBA
        // 0x588F5246: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F524A: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x588F524D: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588F524F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F5253: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588F5256: imul edx, edx, 0x16
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x16
        // 0x588F5259: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588F525B: add ecx, 0x86
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5261: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F5264: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F5267: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F526C: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588F526E: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F5272: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588F5275: add eax, 0xfffffc7c
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F527A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F527C: mov dword ptr [esi + 0x17c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5282: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F5286: mov dword ptr [esi + 0x148], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F528C: mov dword ptr [esi + 0x14c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5296: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F529C: jge 0x588f52a6
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x588F529E: lea edx, [eax + 0xe10]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52A4: jmp 0x588f52ae
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588F52A6: cdq
        __asm _emit 0x99
        // 0x588F52A7: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52AC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588F52AE: lea ecx, [edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x14
        // 0x588F52B1: mov dword ptr [esi + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52B7: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F52BC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F52BE: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588F52C1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F52C3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F52C6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F52C8: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5A
        // 0x588F52CB: jl 0x588f52d0
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x588F52CD: sub eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x5A
        // 0x588F52D0: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F52D4: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52DB: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F52DD: mov dword ptr [esi + 0x15c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52E3: add ecx, 7
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x07
        // 0x588F52E6: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F52E8: mov dword ptr [esi + 0x160], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52EE: mov dword ptr [esi + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52F4: mov dword ptr [esi + 0x154], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F52FE: mov dword ptr [esi + 0x158], 0x14
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5308: mov dword ptr [esi + 0x16c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F530E: mov dword ptr [esi + 0x170], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5314: mov dword ptr [esi + 0x140], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F531E: mov dword ptr [esi + 0x400], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5324: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5329: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F532C: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588F5330: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588F5335: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F5337: je 0x588f5371
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588F5339: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F533F: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5345: jle 0x588f5357
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588F5347: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F534D: je 0x588f5357
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F534F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5355: jmp 0x588f5359
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5357: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F5359: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588F535C: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5361: push edx
        __asm _emit 0x52
        // 0x588F5362: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588F5365: push edx
        __asm _emit 0x52
        // 0x588F5366: push ecx
        __asm _emit 0x51
        // 0x588F5367: push esi
        __asm _emit 0x56
        // 0x588F5368: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F536A: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF6
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F536F: jmp 0x588f5373
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5371: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F5373: mov dword ptr [esi + 0x3f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5379: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F537F: cmp dword ptr [ecx + 0x164], 0x1b7
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
        // 0x588F5389: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F538D: jle 0x588f53a5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588F538F: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5395: je 0x588f53a5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F5397: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F539D: mov edx, dword ptr [ecx + 0x6dc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53A3: jmp 0x588f53a7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F53A5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F53A7: mov dword ptr [esi + 0x3f0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53AD: mov ecx, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x588F53B0: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588F53B3: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x588F53B6: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53BB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F53BD: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588F53C0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53C5: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53CB: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53D0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F53D4: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53DA: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53DF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F53E3: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53E9: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53EE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F53F2: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53F8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F53FD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F5401: mov eax, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5407: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F540D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F5410: push 0x240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5415: lea eax, [esi + 0x1a8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F541B: push ebx
        __asm _emit 0x53
        // 0x588F541C: push eax
        __asm _emit 0x50
        // 0x588F541D: mov dword ptr [esi + 0x184], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5423: mov dword ptr [esi + 0x19c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5429: mov dword ptr [esi + 0x3e8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F542F: mov dword ptr [esi + 0x198], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5435: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F543A: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x588F543C: mov dword ptr [esi + 0x194], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5442: mov dword ptr [esi + 0x190], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5448: mov dword ptr [esi + 0x18c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F544E: mov dword ptr [esi + 0x188], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5454: mov dword ptr [esi + 0x178], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F545A: mov dword ptr [esi + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5460: mov dword ptr [esi + 0x3f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5466: mov dword ptr [esi + 0x3ec], 0x48
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5470: mov dword ptr [esi + 0x404], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5476: mov dword ptr [esi + 0x408], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F547C: mov dword ptr [esi + 0x410], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5482: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5487: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F548A: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588F548E: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588F5493: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F5495: je 0x588f54cd
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588F5497: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F549D: cmp dword ptr [ecx + 0x170], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588F54A4: jle 0x588f54c1
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588F54A6: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54AC: je 0x588f54c1
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588F54AE: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54B4: mov ecx, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x40
        // 0x588F54B7: push ecx
        __asm _emit 0x51
        // 0x588F54B8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F54BA: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x1E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F54BF: jmp 0x588f54cf
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588F54C1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F54C3: push ecx
        __asm _emit 0x51
        // 0x588F54C4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F54C6: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F54CB: jmp 0x588f54cf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F54CD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F54CF: mov dword ptr [esi + 0x420], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54D5: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54DA: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588F54DE: mov dword ptr [esi + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54E4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F54E6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F54EA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F54F1: pop ecx
        __asm _emit 0x59
        // 0x588F54F2: pop edi
        __asm _emit 0x5F
        // 0x588F54F3: pop esi
        __asm _emit 0x5E
        // 0x588F54F4: pop ebp
        __asm _emit 0x5D
        // 0x588F54F5: pop ebx
        __asm _emit 0x5B
        // 0x588F54F6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F54F9: ret 0x38
        __asm _emit 0xC2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
