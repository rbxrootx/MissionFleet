// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E4230 .. +0x287 bytes.
// Source symbol alias: FUN_587e4230.
extern "C" __declspec(naked) void FUN_587e4230() {
    __asm {
        // 0x587E4230: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587E4232: push 0x5897ef86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0xEF
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587E4237: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E423D: push eax
        __asm _emit 0x50
        // 0x587E423E: push ecx
        __asm _emit 0x51
        // 0x587E423F: push ebx
        __asm _emit 0x53
        // 0x587E4240: push ebp
        __asm _emit 0x55
        // 0x587E4241: push esi
        __asm _emit 0x56
        // 0x587E4242: push edi
        __asm _emit 0x57
        // 0x587E4243: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587E4248: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587E424A: push eax
        __asm _emit 0x50
        // 0x587E424B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E424F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4255: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E4257: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E4259: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587E425C: cmp dword ptr [0x58a24aec], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4262: jne 0x587e4299
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x587E4264: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4269: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x89
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E426E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E4271: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E4275: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E4279: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587E427B: je 0x587e428e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587E427D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E427F: push ebx
        __asm _emit 0x53
        // 0x587E4280: push 0x5898d75c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E4285: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E4287: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFA
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E428C: jmp 0x587e4290
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E428E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E4290: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E4294: mov dword ptr [0x58a24aec], eax
        __asm _emit 0xA3
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4299: mov ecx, dword ptr [0x58a24ae8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E429F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587E42A1: jne 0x587e430c
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x587E42A3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587E42A5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x89
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E42AA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E42AD: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E42B1: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E42B9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587E42BB: je 0x587e42f3
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587E42BD: mov ecx, dword ptr [0x58a24aec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E42C3: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E42C9: jle 0x587e42d9
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587E42CB: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E42D1: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587E42D3: je 0x587e42d9
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587E42D5: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587E42D7: jmp 0x587e42db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E42D9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E42DB: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E42E1: push 0x7ff8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E42E6: push ebx
        __asm _emit 0x53
        // 0x587E42E7: push ebx
        __asm _emit 0x53
        // 0x587E42E8: push edx
        __asm _emit 0x52
        // 0x587E42E9: push ecx
        __asm _emit 0x51
        // 0x587E42EA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E42EC: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xD9
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587E42F1: jmp 0x587e42f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E42F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E42F5: push ebx
        __asm _emit 0x53
        // 0x587E42F6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E42F8: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E42FC: mov dword ptr [0x58a24ae8], eax
        __asm _emit 0xA3
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4301: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E4306: mov ecx, dword ptr [0x58a24ae8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E430C: mov edi, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x28
        // 0x587E430F: cmp edi, 0xff
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4315: mov ebp, dword ptr [0x58a24ae4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xE4
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E431B: jl 0x587e43c4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4321: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587E4323: jne 0x587e43c8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4329: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E432B: call 0x587d74d0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E4330: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E4332: call 0x587d6b70
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E4337: call 0x587d6630
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x22
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E433C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E433E: call 0x587e0e40
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E4343: mov dl, byte ptr [esi + 0xd54]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4349: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587E434C: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587E434F: push eax
        __asm _emit 0x50
        // 0x587E4350: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E4352: call 0x587d6aa0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x27
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E4357: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E435D: mov dword ptr [ecx + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4363: mov edx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4369: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587E436D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587E436F: je 0x587e437e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587E4371: mov ecx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4377: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E4379: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587E437C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E437E: movzx ecx, word ptr [esi + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587E4382: push ecx
        __asm _emit 0x51
        // 0x587E4383: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4389: call 0x588ed750
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E438E: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4393: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587E4397: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587E439A: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x587E439E: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587E43A1: mov dword ptr [0x58a24ae4], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E43AB: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587E43B0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E43B4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E43BB: pop ecx
        __asm _emit 0x59
        // 0x587E43BC: pop edi
        __asm _emit 0x5F
        // 0x587E43BD: pop esi
        __asm _emit 0x5E
        // 0x587E43BE: pop ebp
        __asm _emit 0x5D
        // 0x587E43BF: pop ebx
        __asm _emit 0x5B
        // 0x587E43C0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E43C3: ret
        __asm _emit 0xC3
        // 0x587E43C4: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587E43C6: je 0x587e43cc
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587E43C8: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587E43CA: jmp 0x587e43d3
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587E43CC: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E43D1: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587E43D3: cmp edx, 0x80
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E43D9: jl 0x587e43e8
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587E43DB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E43DD: cdq
        __asm _emit 0x99
        // 0x587E43DE: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587E43E1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E43E3: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E43E6: jmp 0x587e4409
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x587E43E8: cmp edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x587E43EB: jl 0x587e43fd
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x587E43ED: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x587E43F2: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E43F4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E43F6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E43F9: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587E43FB: jmp 0x587e440b
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587E43FD: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587E4400: jl 0x587e440b
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x587E4402: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E4404: cdq
        __asm _emit 0x99
        // 0x587E4405: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E4407: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587E4409: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587E440B: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587E440D: jg 0x587e441b
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x587E440F: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587E4411: je 0x587e441b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587E4413: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E4415: mov dword ptr [esi + 0x1050], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E441B: cmp dword ptr [esi + 0x1050], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4421: je 0x587e445f
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x587E4423: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587E4425: je 0x587e4443
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587E4427: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587E4429: push edi
        __asm _emit 0x57
        // 0x587E442A: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E442F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E4433: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E443A: pop ecx
        __asm _emit 0x59
        // 0x587E443B: pop edi
        __asm _emit 0x5F
        // 0x587E443C: pop esi
        __asm _emit 0x5E
        // 0x587E443D: pop ebp
        __asm _emit 0x5D
        // 0x587E443E: pop ebx
        __asm _emit 0x5B
        // 0x587E443F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E4442: ret
        __asm _emit 0xC3
        // 0x587E4443: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587E4445: push edi
        __asm _emit 0x57
        // 0x587E4446: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E444B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E444F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E4456: pop ecx
        __asm _emit 0x59
        // 0x587E4457: pop edi
        __asm _emit 0x5F
        // 0x587E4458: pop esi
        __asm _emit 0x5E
        // 0x587E4459: pop ebp
        __asm _emit 0x5D
        // 0x587E445A: pop ebx
        __asm _emit 0x5B
        // 0x587E445B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E445E: ret
        __asm _emit 0xC3
        // 0x587E445F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E4461: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xE7
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E4466: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E4468: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E446D: mov ecx, dword ptr [0x58a24ae8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4473: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587E4475: je 0x587e4485
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587E4477: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E4479: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587E447B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E447D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E447F: mov dword ptr [0x58a24ae8], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4485: mov ecx, dword ptr [0x58a24aec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E448B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587E448D: je 0x587e449d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587E448F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E4491: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587E4493: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E4495: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E4497: mov dword ptr [0x58a24aec], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E449D: mov dword ptr [0x58a24ae4], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0xE4
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E44A3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E44A7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E44AE: pop ecx
        __asm _emit 0x59
        // 0x587E44AF: pop edi
        __asm _emit 0x5F
        // 0x587E44B0: pop esi
        __asm _emit 0x5E
        // 0x587E44B1: pop ebp
        __asm _emit 0x5D
        // 0x587E44B2: pop ebx
        __asm _emit 0x5B
        // 0x587E44B3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E44B6: ret
        __asm _emit 0xC3
    }
}
