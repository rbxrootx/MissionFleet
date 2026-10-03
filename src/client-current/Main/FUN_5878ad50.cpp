// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878AD50 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_5878ad50() {
    __asm {
        // 0x5878AD50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5878AD52: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AD57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AD5D: push eax
        __asm _emit 0x50
        // 0x5878AD5E: push ecx
        __asm _emit 0x51
        // 0x5878AD5F: push esi
        __asm _emit 0x56
        // 0x5878AD60: push edi
        __asm _emit 0x57
        // 0x5878AD61: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878AD66: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878AD68: push eax
        __asm _emit 0x50
        // 0x5878AD69: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878AD6D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AD73: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878AD79: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878AD7B: jne 0x5878add4
        __asm _emit 0x75
        __asm _emit 0x57
        // 0x5878AD7D: push 0x650
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AD82: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x1E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878AD87: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878AD8A: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878AD8E: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AD96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878AD98: je 0x5878adb2
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5878AD9A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5878AD9C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878AD9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878ADA0: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878ADA5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878ADA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878ADA9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878ADAB: call 0x5888e5e0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x38
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5878ADB0: jmp 0x5878adb4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878ADB2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878ADB4: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878ADB9: mov dword ptr [0x58a245c0], eax
        __asm _emit 0xA3
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878ADBE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5878ADC2: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878ADC8: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878ADD0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878ADD2: je 0x5878ae38
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5878ADD4: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5878ADD9: call 0x5888d110
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5878ADDE: mov esi, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878ADE4: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5878ADE7: mov edx, 0xfa0
        __asm _emit 0xBA
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878ADEC: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5878ADF0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878ADF2: je 0x5878adfa
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5878ADF4: push esi
        __asm _emit 0x56
        // 0x5878ADF5: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878ADFA: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5878ADFD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878ADFF: je 0x5878ae07
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5878AE01: push esi
        __asm _emit 0x56
        // 0x5878AE02: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878AE07: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878AE0C: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878AE12: push eax
        __asm _emit 0x50
        // 0x5878AE13: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878AE15: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5878AE17: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878AE1C: push esi
        __asm _emit 0x56
        // 0x5878AE1D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5878AE1F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878AE24: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5878AE26: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878AE2A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AE31: pop ecx
        __asm _emit 0x59
        // 0x5878AE32: pop edi
        __asm _emit 0x5F
        // 0x5878AE33: pop esi
        __asm _emit 0x5E
        // 0x5878AE34: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5878AE37: ret
        __asm _emit 0xC3
        // 0x5878AE38: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5878AE3A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878AE3E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AE45: pop ecx
        __asm _emit 0x59
        // 0x5878AE46: pop edi
        __asm _emit 0x5F
        // 0x5878AE47: pop esi
        __asm _emit 0x5E
        // 0x5878AE48: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5878AE4B: ret
        __asm _emit 0xC3
    }
}
