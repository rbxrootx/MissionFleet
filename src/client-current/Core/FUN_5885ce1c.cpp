// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885CE1C .. +0x2F4 bytes.
extern "C" __declspec(naked) void FUN_5885ce1c() {
    __asm {
        // 0x5885CE1C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885CE1E: push ebp
        __asm _emit 0x55
        // 0x5885CE1F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885CE21: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x5885CE24: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CE27: push ebx
        __asm _emit 0x53
        // 0x5885CE28: push esi
        __asm _emit 0x56
        // 0x5885CE29: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885CE2C: push edi
        __asm _emit 0x57
        // 0x5885CE2D: call 0x58861412
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE32: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885CE34: je 0x5885d067
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE3A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CE3C: je 0x5885ce84
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5885CE3E: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5885CE41: jl 0x5885ce48
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5885CE43: cmp esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x24
        // 0x5885CE46: jle 0x5885ce84
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5885CE48: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885CE4B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885CE4D: push eax
        __asm _emit 0x50
        // 0x5885CE4E: push ebx
        __asm _emit 0x53
        // 0x5885CE4F: push ebx
        __asm _emit 0x53
        // 0x5885CE50: push ebx
        __asm _emit 0x53
        // 0x5885CE51: push ebx
        __asm _emit 0x53
        // 0x5885CE52: push ebx
        __asm _emit 0x53
        // 0x5885CE53: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885CE57: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE5E: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CE63: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885CE66: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885CE69: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885CE6B: je 0x5885d078
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE71: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CE74: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CE77: jne 0x5885d078
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE7D: mov byte ptr [ecx], bl
        __asm _emit 0x88
        __asm _emit 0x19
        // 0x5885CE7F: jmp 0x5885d078
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CE84: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CE87: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CE8A: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885CE8D: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885CE90: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CE93: movlpd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885CE98: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885CE9B: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CEA0: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885CEA3: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CEA5: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CEA8: cmp byte ptr [edi + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5885CEAC: jne 0x5885ceb5
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5885CEAE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885CEB0: call 0x58855ea0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x8F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CEB5: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x5885CEB8: jmp 0x5885cec7
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5885CEBA: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CEBD: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CEC2: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CEC4: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CEC7: push edi
        __asm _emit 0x57
        // 0x5885CEC8: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x5885CECB: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885CECD: push eax
        __asm _emit 0x50
        // 0x5885CECE: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CED3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885CED6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885CED8: jne 0x5885ceba
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885CEDA: movzx eax, byte ptr [ebp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x30
        // 0x5885CEDE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885CEE0: or ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x02
        // 0x5885CEE3: cmp bl, 0x2d
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x2D
        // 0x5885CEE6: cmovne ecx, eax
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885CEE9: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885CEEC: je 0x5885cef3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885CEEE: cmp bl, 0x2b
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x2B
        // 0x5885CEF1: jne 0x5885cf00
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885CEF3: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CEF6: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CEFB: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CEFD: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CF00: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5885CF02: pop edi
        __asm _emit 0x5F
        // 0x5885CF03: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CF05: je 0x5885cf0b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885CF07: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5885CF09: jne 0x5885cf7f
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5885CF0B: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CF0D: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885CF0F: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885CF11: ja 0x5885cf1b
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CF13: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CF16: add eax, -0x30
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xD0
        // 0x5885CF19: jmp 0x5885cf39
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885CF1B: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CF1D: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885CF1F: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CF21: ja 0x5885cf2b
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CF23: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CF26: add eax, -0x57
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xA9
        // 0x5885CF29: jmp 0x5885cf39
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885CF2B: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CF2D: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885CF2F: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CF31: ja 0x5885cf75
        __asm _emit 0x77
        __asm _emit 0x42
        // 0x5885CF33: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CF36: add eax, -0x37
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xC9
        // 0x5885CF39: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885CF3B: jne 0x5885cf75
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5885CF3D: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CF40: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CF45: mov byte ptr [ebp - 0x10], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885CF48: cmp al, 0x78
        __asm _emit 0x3C
        __asm _emit 0x78
        // 0x5885CF4A: je 0x5885cf5f
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885CF4C: cmp al, 0x58
        __asm _emit 0x3C
        __asm _emit 0x58
        // 0x5885CF4E: je 0x5885cf5f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885CF50: push dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5885CF53: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CF56: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CF5B: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885CF5D: jmp 0x5885cf77
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5885CF5F: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CF62: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CF67: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CF69: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CF6B: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CF6E: cmovne edi, esi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xFE
        // 0x5885CF71: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5885CF73: jmp 0x5885cf7f
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5885CF75: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5885CF77: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CF79: pop eax
        __asm _emit 0x58
        // 0x5885CF7A: cmovne eax, esi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC6
        // 0x5885CF7D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885CF7F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885CF81: cdq
        __asm _emit 0x99
        // 0x5885CF82: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5885CF84: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885CF87: push ecx
        __asm _emit 0x51
        // 0x5885CF88: push eax
        __asm _emit 0x50
        // 0x5885CF89: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885CF8B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885CF8D: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885CF90: call 0x58831ba0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885CF95: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885CF98: mov edi, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5885CF9B: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885CF9E: mov dword ptr [ebp - 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885CFA1: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885CFA4: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CFA6: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885CFA8: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885CFAA: ja 0x5885cfb4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CFAC: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CFAF: add ebx, -0x30
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xD0
        // 0x5885CFB2: jmp 0x5885cfd7
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885CFB4: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CFB6: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885CFB8: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CFBA: ja 0x5885cfc4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CFBC: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CFBF: add ebx, -0x57
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xA9
        // 0x5885CFC2: jmp 0x5885cfd7
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885CFC4: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CFC6: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885CFC8: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CFCA: ja 0x5885cfd4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CFCC: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CFCF: add ebx, -0x37
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xC9
        // 0x5885CFD2: jmp 0x5885cfd7
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885CFD4: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5885CFD7: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5885CFD9: jae 0x5885d047
        __asm _emit 0x73
        __asm _emit 0x6C
        // 0x5885CFDB: push edi
        __asm _emit 0x57
        // 0x5885CFDC: push ecx
        __asm _emit 0x51
        // 0x5885CFDD: push dword ptr [ebp - 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5885CFE0: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885CFE3: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x4B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885CFE8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885CFEA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CFEC: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5885CFEE: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xDC
        // 0x5885CFF1: adc eax, edx
        __asm _emit 0x13
        __asm _emit 0xC2
        // 0x5885CFF3: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885CFF6: cmp edi, dword ptr [ebp - 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0xE4
        // 0x5885CFF9: jb 0x5885d00d
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x5885CFFB: ja 0x5885d008
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x5885CFFD: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885D000: cmp eax, dword ptr [ebp - 0x20]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885D003: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D006: jbe 0x5885d00d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5885D008: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885D00A: inc ecx
        __asm _emit 0x41
        // 0x5885D00B: jmp 0x5885d00f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D00D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885D00F: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885D011: ja 0x5885d01f
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x5885D013: jb 0x5885d01a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5885D015: cmp ebx, dword ptr [ebp - 0x24]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5885D018: jae 0x5885d01f
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5885D01A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D01C: inc eax
        __asm _emit 0x40
        // 0x5885D01D: jmp 0x5885d021
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D01F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D021: mov edi, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885D024: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885D026: shl eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x5885D029: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885D02C: or eax, 8
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x08
        // 0x5885D02F: mov dword ptr [ebp - 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF4
        // 0x5885D032: or dword ptr [ebp - 8], eax
        __asm _emit 0x09
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D035: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D03A: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885D03D: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885D03F: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885D042: jmp 0x5885cfa4
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D047: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885D04A: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885D04D: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D052: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D055: test al, 8
        __asm _emit 0xA8
        __asm _emit 0x08
        // 0x5885D057: jne 0x5885d081
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5885D059: push dword ptr [ebp - 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885D05C: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885D05F: push dword ptr [ebp - 0x30]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5885D062: call 0x58860d5f
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D067: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885D06A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885D06C: je 0x5885d078
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D06E: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885D071: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885D074: jne 0x5885d078
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885D076: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885D078: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D07A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885D07C: jmp 0x5885d10b
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D081: mov ebx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xF4
        // 0x5885D084: push edi
        __asm _emit 0x57
        // 0x5885D085: push ebx
        __asm _emit 0x53
        // 0x5885D086: push eax
        __asm _emit 0x50
        // 0x5885D087: call 0x58856abc
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D08C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885D08F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D091: je 0x5885d0e9
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5885D093: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885D096: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885D09A: mov dword ptr [eax + 0x18], 0x22
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D0A1: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D0A4: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885D0A6: jne 0x5885d0b0
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D0A8: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5885D0AB: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885D0AE: jmp 0x5885d0f6
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5885D0B0: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5885D0B2: je 0x5885d0ce
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5885D0B4: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885D0B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885D0B9: je 0x5885d0c5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D0BB: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885D0BE: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885D0C1: jne 0x5885d0c5
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885D0C3: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885D0C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D0C7: mov edx, 0x80000000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5885D0CC: jmp 0x5885d10b
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5885D0CE: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885D0D1: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885D0D3: je 0x5885d0df
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D0D5: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885D0D8: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885D0DB: jne 0x5885d0df
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885D0DD: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885D0DF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885D0E2: mov edx, 0x7fffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885D0E7: jmp 0x5885d10b
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x5885D0E9: test byte ptr [ebp - 8], 2
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5885D0ED: je 0x5885d0f6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5885D0EF: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x5885D0F1: adc edi, 0
        __asm _emit 0x83
        __asm _emit 0xD7
        __asm _emit 0x00
        // 0x5885D0F4: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x5885D0F6: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5885D0F9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885D0FB: je 0x5885d107
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D0FD: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885D100: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885D103: jne 0x5885d107
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885D105: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5885D107: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D109: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5885D10B: pop edi
        __asm _emit 0x5F
        // 0x5885D10C: pop esi
        __asm _emit 0x5E
        // 0x5885D10D: pop ebx
        __asm _emit 0x5B
        // 0x5885D10E: leave
        __asm _emit 0xC9
        // 0x5885D10F: ret
        __asm _emit 0xC3
    }
}
