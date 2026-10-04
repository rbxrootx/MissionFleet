// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875ADB0 .. +0x16E bytes.
// Source symbol alias: FUN_5875adb0.
extern "C" __declspec(naked) void FUN_5875adb0() {
    __asm {
        // 0x5875ADB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875ADB2: push 0x5897eaf3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0xEA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875ADB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ADBD: push eax
        __asm _emit 0x50
        // 0x5875ADBE: push ecx
        __asm _emit 0x51
        // 0x5875ADBF: push ebx
        __asm _emit 0x53
        // 0x5875ADC0: push ebp
        __asm _emit 0x55
        // 0x5875ADC1: push esi
        __asm _emit 0x56
        // 0x5875ADC2: push edi
        __asm _emit 0x57
        // 0x5875ADC3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875ADC8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875ADCA: push eax
        __asm _emit 0x50
        // 0x5875ADCB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875ADCF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ADD5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875ADD7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875ADDB: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875ADE0: cmp dword ptr [eax + 0x160], 0xcd
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ADEA: jle 0x5875ae02
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875ADEC: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ADF3: je 0x5875ae02
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5875ADF5: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ADFB: add eax, 0x3340
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AE00: jmp 0x5875ae04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AE02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AE04: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875AE08: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875AE0C: push edi
        __asm _emit 0x57
        // 0x5875AE0D: push ebp
        __asm _emit 0x55
        // 0x5875AE0E: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5875AE10: push eax
        __asm _emit 0x50
        // 0x5875AE11: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875AE15: push eax
        __asm _emit 0x50
        // 0x5875AE16: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xC2
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE1B: mov ecx, 0x4e20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AE20: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5875AE24: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5875AE27: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AE2F: mov dword ptr [esi], 0x5898d7fc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875AE35: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875AE37: je 0x5875ae3f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875AE39: push esi
        __asm _emit 0x56
        // 0x5875AE3A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE3F: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5875AE42: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875AE44: je 0x5875ae4c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875AE46: push esi
        __asm _emit 0x56
        // 0x5875AE47: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x80
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE4C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875AE51: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875AE53: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x7E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE58: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875AE5C: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AE61: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5875AE65: push ebx
        __asm _emit 0x53
        // 0x5875AE66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875AE68: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xC4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE6D: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AE72: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x1D
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AE77: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875AE7A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875AE7E: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5875AE83: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875AE85: je 0x5875ae9a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5875AE87: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875AE8B: push edi
        __asm _emit 0x57
        // 0x5875AE8C: push ebp
        __asm _emit 0x55
        // 0x5875AE8D: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5875AE8F: push ecx
        __asm _emit 0x51
        // 0x5875AE90: push esi
        __asm _emit 0x56
        // 0x5875AE91: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AE93: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xC2
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AE98: jmp 0x5875ae9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875AE9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AE9C: push ebx
        __asm _emit 0x53
        // 0x5875AE9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875AE9F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5875AEA4: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEAA: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xC4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AEAF: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEB5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEBA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x7E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875AEBF: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875AEC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875AEC5: mov dword ptr [esi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AECB: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AED1: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AED7: mov dword ptr [esi + 0x108], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEE1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x1D
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875AEE6: cdq
        __asm _emit 0x99
        // 0x5875AEE7: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEEC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5875AEEE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875AEF0: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEF6: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AEFC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5875AEFF: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x5875AF02: mov dword ptr [esi + 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AF08: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875AF0C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AF13: pop ecx
        __asm _emit 0x59
        // 0x5875AF14: pop edi
        __asm _emit 0x5F
        // 0x5875AF15: pop esi
        __asm _emit 0x5E
        // 0x5875AF16: pop ebp
        __asm _emit 0x5D
        // 0x5875AF17: pop ebx
        __asm _emit 0x5B
        // 0x5875AF18: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875AF1B: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
