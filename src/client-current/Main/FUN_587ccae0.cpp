// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CCAE0 .. +0x1D1 bytes.
// Source symbol alias: FUN_587ccae0.
extern "C" __declspec(naked) void FUN_587ccae0() {
    __asm {
        // 0x587CCAE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CCAE2: push 0x58981932
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CCAE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCAED: push eax
        __asm _emit 0x50
        // 0x587CCAEE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587CCAF1: push ebx
        __asm _emit 0x53
        // 0x587CCAF2: push ebp
        __asm _emit 0x55
        // 0x587CCAF3: push esi
        __asm _emit 0x56
        // 0x587CCAF4: push edi
        __asm _emit 0x57
        // 0x587CCAF5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CCAFA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CCAFC: push eax
        __asm _emit 0x50
        // 0x587CCAFD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CCB01: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCB07: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CCB09: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CCB0D: lea edi, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x587CCB10: mov dword ptr [esi], 0x5899b2c4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC4
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CCB16: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CCB18: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CCB1A: mov dword ptr [edi], 0x5899b2a4
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xA4
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CCB20: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587CCB23: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x587CCB26: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x587CCB29: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCB2E: lea ebp, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x587CCB31: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587CCB33: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CCB37: mov dword ptr [ebp], 0x5899b2ac
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0xAC
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CCB3E: mov dword ptr [ebp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x587CCB41: mov dword ptr [ebp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x587CCB44: mov dword ptr [ebp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x04
        // 0x587CCB47: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCB4C: lea ecx, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCB52: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587CCB57: mov dword ptr [ecx], 0x5899b2b4
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0xB4
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CCB5D: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x587CCB60: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587CCB63: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587CCB66: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCB6B: lea ecx, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCB71: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587CCB76: mov dword ptr [ecx], 0x5899b2bc
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0xBC
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CCB7C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x587CCB7F: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587CCB82: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587CCB85: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCB8A: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x587CCB8F: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587CCB92: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587CCB95: mov byte ptr [esi + 0xc], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587CCB98: mov byte ptr [esi + 0xd], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x0D
        // 0x587CCB9B: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587CCB9E: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x587CCBA1: mov dword ptr [esi + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCBA8: mov dword ptr [esi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x587CCBAB: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x587CCBAE: mov dword ptr [esi + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587CCBB1: mov dword ptr [esi + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x587CCBB4: mov dword ptr [esi + 0x2c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x2C
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCBBB: lea eax, [esi + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x587CCBBE: lea ecx, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x02
        // 0x587CCBC1: mov dword ptr [eax - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0xF8
        // 0x587CCBC4: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x587CCBC6: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x587CCBC9: mov dword ptr [eax + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587CCBCC: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587CCBCF: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x587CCBD2: jne 0x587ccbc1
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587CCBD4: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587CCBD7: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x587CCBDA: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x587CCBDD: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x587CCBE0: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x587CCBE3: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587CCBE6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587CCBE8: je 0x587ccc09
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587CCBEA: jmp 0x587ccbf4
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587CCBEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587CCBF0: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CCBF4: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587CCBF7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CCBF9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CCBFD: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CCBFF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CCC01: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CCC03: cmp dword ptr [esp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CCC07: jne 0x587ccbf0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587CCC09: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x587CCC0C: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x587CCC0F: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587CCC12: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587CCC15: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC17: je 0x587ccc2a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CCC19: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CCC1B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CCC1D: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CCC1F: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CCC22: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CCC24: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CCC26: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC28: jne 0x587ccc19
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CCC2A: mov dword ptr [ebp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x587CCC2D: mov dword ptr [ebp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x04
        // 0x587CCC30: mov dword ptr [ebp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x587CCC33: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC39: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC3B: je 0x587ccc4e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CCC3D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CCC3F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CCC41: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CCC43: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CCC46: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CCC48: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CCC4A: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC4C: jne 0x587ccc3d
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CCC4E: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC54: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC5A: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC60: mov edi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC66: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC68: je 0x587ccc7b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CCC6A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CCC6C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CCC6E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CCC70: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CCC73: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CCC75: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CCC77: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587CCC79: jne 0x587ccc6a
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CCC7B: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC81: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC87: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC8D: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC93: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC99: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCC9F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CCCA1: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CCCA5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCCAC: pop ecx
        __asm _emit 0x59
        // 0x587CCCAD: pop edi
        __asm _emit 0x5F
        // 0x587CCCAE: pop esi
        __asm _emit 0x5E
        // 0x587CCCAF: pop ebp
        __asm _emit 0x5D
        // 0x587CCCB0: pop ebx
        __asm _emit 0x5B
    }
}
