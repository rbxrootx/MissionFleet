// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 516 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587cfad0.

// Ghidra body range 0x587CFAD0..0x587CFAED; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587cfad0_segment_00() {
    __asm {
        // 0x587CFAD0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587CFAD3: push ebx
        __asm _emit 0x53
        // 0x587CFAD4: push ebp
        __asm _emit 0x55
        // 0x587CFAD5: push esi
        __asm _emit 0x56
        // 0x587CFAD6: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFADA: lea esi, [ecx + 0x598]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFAE0: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFAE8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CFAEA: push edi
        __asm _emit 0x57
        // 0x587CFAEB: jmp 0x587cfaf0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587CFAF0..0x587CFCD7; 487 mapped bytes.
extern "C" __declspec(naked) void FUN_587cfad0_segment_01() {
    __asm {
        // 0x587CFAF0: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFAF5: mov edi, dword ptr [esi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xF0
        // 0x587CFAF8: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CFAFA: je 0x587cfb0a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CFAFC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFAFE: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB03: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB05: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB0A: mov ecx, dword ptr [esi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF0
        // 0x587CFB0D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFB0F: je 0x587cfb1c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CFB11: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFB13: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFB15: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFB17: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFB19: mov dword ptr [esi - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0xF0
        // 0x587CFB1C: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587CFB1E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CFB20: je 0x587cfb40
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587CFB22: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB24: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB29: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB2B: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB30: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CFB32: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFB34: je 0x587cfb40
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587CFB36: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFB38: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFB3A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFB3C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFB3E: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x587CFB40: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587CFB43: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CFB45: je 0x587cfb55
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CFB47: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB49: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB4E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB50: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB55: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587CFB58: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFB5A: je 0x587cfb67
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CFB5C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFB5E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFB60: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFB62: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFB64: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587CFB67: mov edi, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587CFB6A: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CFB6C: je 0x587cfb7c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CFB6E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB70: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB75: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CFB77: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CFB7C: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x587CFB7F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFB81: je 0x587cfb8e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CFB83: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFB85: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFB87: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFB89: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFB8B: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x587CFB8E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CFB91: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587CFB94: jne 0x587cfaf5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CFB9A: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587CFB9F: jne 0x587cfaf0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CFBA5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFBA9: mov ecx, dword ptr [eax + 0x7a4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBAF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFBB1: je 0x587cfbc5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CFBB3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFBB5: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFBB7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFBB9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFBBB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFBBF: mov dword ptr [ecx + 0x7a4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBC5: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFBC9: mov ecx, dword ptr [edx + 0x7a8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBCF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFBD1: je 0x587cfbe5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CFBD3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFBD5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFBD7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CFBD9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFBDB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFBDF: mov dword ptr [eax + 0x7a8], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBE5: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFBE9: mov edi, 0x19
        __asm _emit 0xBF
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBEE: add esi, 0x510
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFBF4: lea ebp, [edi - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0xE8
        // 0x587CFBF7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CFBF9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFBFB: je 0x587cfc06
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CFBFD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFBFF: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFC01: push ebp
        __asm _emit 0x55
        // 0x587CFC02: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFC04: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x587CFC06: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CFC09: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587CFC0B: jne 0x587cfbf7
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587CFC0D: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFC11: add esi, 0x148
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC17: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC1C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587CFC20: mov ecx, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xEC
        // 0x587CFC23: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFC25: je 0x587cfc31
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587CFC27: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFC29: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFC2B: push ebp
        __asm _emit 0x55
        // 0x587CFC2C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFC2E: mov dword ptr [esi - 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0xEC
        // 0x587CFC31: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CFC33: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFC35: je 0x587cfc40
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CFC37: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFC39: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFC3B: push ebp
        __asm _emit 0x55
        // 0x587CFC3C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFC3E: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x587CFC40: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CFC43: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587CFC45: jne 0x587cfc20
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x587CFC47: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFC4B: add esi, 0x574
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC51: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC56: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CFC58: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFC5A: je 0x587cfc65
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CFC5C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFC5E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFC60: push ebp
        __asm _emit 0x55
        // 0x587CFC61: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFC63: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x587CFC65: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CFC68: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587CFC6A: jne 0x587cfc56
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587CFC6C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CFC70: mov ecx, dword ptr [ecx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC76: pop edi
        __asm _emit 0x5F
        // 0x587CFC77: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFC79: je 0x587cfc8c
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CFC7B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFC7D: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFC7F: push ebp
        __asm _emit 0x55
        // 0x587CFC80: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFC82: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFC86: mov dword ptr [ecx + 0x4f4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC8C: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFC90: mov ecx, dword ptr [edx + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFC96: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFC98: je 0x587cfcab
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CFC9A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CFC9C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFC9E: push ebp
        __asm _emit 0x55
        // 0x587CFC9F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CFCA1: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFCA5: mov dword ptr [eax + 0x500], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFCAB: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFCAF: mov ecx, dword ptr [eax + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFCB5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CFCB7: je 0x587cfcca
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CFCB9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CFCBB: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CFCBD: push ebp
        __asm _emit 0x55
        // 0x587CFCBE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CFCC0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CFCC4: mov dword ptr [eax + 0x4f8], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFCCA: pop esi
        __asm _emit 0x5E
        // 0x587CFCCB: mov dword ptr [eax + 0xac4], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xC4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFCD1: pop ebp
        __asm _emit 0x5D
        // 0x587CFCD2: pop ebx
        __asm _emit 0x5B
        // 0x587CFCD3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587CFCD6: ret
        __asm _emit 0xC3
    }
}
