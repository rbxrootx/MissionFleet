// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587DAC20 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_587dac20() {
    __asm {
        // 0x587DAC20: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC26: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587DAC2B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587DAC2D: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC34: push esi
        __asm _emit 0x56
        // 0x587DAC35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAC37: cmp dword ptr [esi + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC3E: je 0x587dad66
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC44: mov eax, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC4A: push ebp
        __asm _emit 0x55
        // 0x587DAC4B: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DAC51: push eax
        __asm _emit 0x50
        // 0x587DAC52: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAC56: push 0x5899ba88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DAC5B: push ecx
        __asm _emit 0x51
        // 0x587DAC5C: mov dword ptr [esi + 0xe0c], 0x2000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC66: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587DAC68: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DAC6B: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587DAC6F: push edx
        __asm _emit 0x52
        // 0x587DAC70: call dword ptr [0x5898c178]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DAC76: cmp dword ptr [esi + 0xe10], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC7D: jne 0x587dac95
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587DAC7F: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC85: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC8B: mov dword ptr [esi + 0xe14], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC95: mov eax, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAC9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAC9D: je 0x587dad5c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACA3: mov eax, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACA9: mov cl, byte ptr [esi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x61
        // 0x587DACAC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DACAE: je 0x587dad5c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACB4: jmp 0x587dacc0
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587DACB6: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACBD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587DACC0: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACC6: cmp byte ptr [edx + 0x35c], cl
        __asm _emit 0x38
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACCC: jne 0x587dacd7
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587DACCE: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACD5: je 0x587dace3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587DACD7: mov eax, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACDD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DACDF: jne 0x587dacc0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587DACE1: jmp 0x587dad5c
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x587DACE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DACE5: je 0x587dad5c
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x587DACE7: mov eax, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACED: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DACF1: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587DACF3: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587DACF6: je 0x587dad12
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587DACF8: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DACFE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DAD00: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587DAD03: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DAD05: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD0B: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD12: push edi
        __asm _emit 0x57
        // 0x587DAD13: mov edi, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD19: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAD1B: push edi
        __asm _emit 0x57
        // 0x587DAD1C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAD1E: call 0x587d8f90
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAD23: push eax
        __asm _emit 0x50
        // 0x587DAD24: push edi
        __asm _emit 0x57
        // 0x587DAD25: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DAD29: push 0x5899ba70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DAD2E: push edx
        __asm _emit 0x52
        // 0x587DAD2F: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587DAD31: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587DAD34: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAD38: push eax
        __asm _emit 0x50
        // 0x587DAD39: call dword ptr [0x5898c178]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DAD3F: mov ecx, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD45: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAD47: push ecx
        __asm _emit 0x51
        // 0x587DAD48: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAD4A: call 0x587d8f90
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAD4F: dec dword ptr [esi + 0xe14]
        __asm _emit 0xFF
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD55: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD5B: pop edi
        __asm _emit 0x5F
        // 0x587DAD5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAD5E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAD60: call 0x587d6830
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAD65: pop ebp
        __asm _emit 0x5D
        // 0x587DAD66: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD6D: pop esi
        __asm _emit 0x5E
        // 0x587DAD6E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587DAD70: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x1E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DAD75: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD7B: ret
        __asm _emit 0xC3
    }
}
