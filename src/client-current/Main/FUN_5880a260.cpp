// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1740 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_5880a260.

// Ghidra body range 0x5880A260..0x5880A7DD; 1405 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a260_segment_00() {
    __asm {
        // 0x5880A260: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5880A262: push 0x58982cd6
        __asm _emit 0x68
        __asm _emit 0xD6
        __asm _emit 0x2C
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880A267: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A26D: push eax
        __asm _emit 0x50
        // 0x5880A26E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5880A271: push ebx
        __asm _emit 0x53
        // 0x5880A272: push ebp
        __asm _emit 0x55
        // 0x5880A273: push esi
        __asm _emit 0x56
        // 0x5880A274: push edi
        __asm _emit 0x57
        // 0x5880A275: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880A27A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880A27C: push eax
        __asm _emit 0x50
        // 0x5880A27D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880A281: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A287: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5880A289: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A28B: mov dword ptr [ebp + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A291: mov dword ptr [ebp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A297: mov dword ptr [ebp + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A29D: mov dword ptr [ebp + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2A3: mov dword ptr [ebp + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2A9: mov dword ptr [ebp + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2AF: mov dword ptr [ebp + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2B5: mov dword ptr [ebp + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2BB: mov dword ptr [ebp + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2C1: mov dword ptr [ebp + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2C7: mov dword ptr [ebp + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2CD: mov dword ptr [ebp + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2D3: mov dword ptr [ebp + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2D9: mov dword ptr [ebp + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2DF: mov dword ptr [ebp + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2E5: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2EA: mov dword ptr [ebp + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2F0: lea eax, [ebp + 0x43c]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A2F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880A2F8: push eax
        __asm _emit 0x50
        // 0x5880A2F9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880A2FE: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A304: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5880A307: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xFC
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A30C: mov dword ptr [ebp + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A312: mov dword ptr [ebp + 0x74], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A319: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A31E: mov dword ptr [esp + 0x14], 0x180
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A326: mov dword ptr [esp + 0x18], 0x58a0b1c8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880A32E: lea esi, [ebp + 0x374]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A334: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5880A336: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A33A: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A33F: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5880A342: mov eax, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0xFC
        // 0x5880A345: test byte ptr [eax + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880A349: je 0x5880a3e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A34F: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A352: mov eax, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A359: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5880A35E: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A364: lea eax, [edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFF
        // 0x5880A367: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A36D: jle 0x5880a38c
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x5880A36F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A371: jl 0x5880a38c
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x5880A373: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A37A: je 0x5880a38c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5880A37C: mov eax, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A382: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A386: lea eax, [ecx + eax - 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0xC0
        // 0x5880A38A: jmp 0x5880a38e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A38C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A38E: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A391: mov ecx, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A398: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5880A39B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A39D: je 0x5880a3c7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5880A39F: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x5880A3A2: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x5880A3A5: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x5880A3A8: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5880A3AB: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x5880A3AE: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5880A3B0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880A3B3: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x5880A3B5: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5880A3B8: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5880A3BB: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x5880A3BE: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x5880A3C1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880A3C4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880A3C7: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A3CA: mov dword ptr [esi - 0x2c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A3D0: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A3D3: lea eax, [edx - 6]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFA
        // 0x5880A3D6: mov dword ptr [ebp + ecx*4 + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A3DD: add dword ptr [ebp + 0x74], edi
        __asm _emit 0x01
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x5880A3E0: jmp 0x5880a3ed
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5880A3E2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5880A3E4: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A3E9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880A3ED: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5880A3F0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A3F4: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5880A3F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880A3F9: test byte ptr [eax + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880A3FD: je 0x5880a48f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A403: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A406: mov eax, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A40D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5880A412: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A417: cmp dword ptr [eax + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A41D: jle 0x5880a438
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5880A41F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5880A421: jl 0x5880a438
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x5880A423: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A42A: je 0x5880a438
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880A42C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A432: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A436: jmp 0x5880a43a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A438: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A43A: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A43D: mov ecx, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A444: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5880A447: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A449: je 0x5880a474
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880A44B: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x5880A44E: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x5880A451: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x5880A454: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x5880A457: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x20
        // 0x5880A45A: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5880A45D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880A460: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x5880A462: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5880A465: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5880A468: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x5880A46B: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x5880A46E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880A471: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880A474: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A477: mov dword ptr [esi - 0x2c0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A47D: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A480: lea eax, [edx - 5]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFB
        // 0x5880A483: mov dword ptr [ebp + ecx*4 + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A48A: add dword ptr [ebp + 0x74], edi
        __asm _emit 0x01
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x5880A48D: jmp 0x5880a49b
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5880A48F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5880A492: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A497: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880A49B: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5880A49E: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A4A2: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5880A4A5: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5880A4A8: test byte ptr [eax + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880A4AC: je 0x5880a546
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4B2: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A4B5: mov eax, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4BC: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5880A4C1: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A4C7: lea eax, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x01
        // 0x5880A4CA: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4D0: jle 0x5880a4ef
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x5880A4D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A4D4: jl 0x5880a4ef
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x5880A4D6: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4DD: je 0x5880a4ef
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5880A4DF: mov eax, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4E5: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A4E9: lea eax, [ecx + eax + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x40
        // 0x5880A4ED: jmp 0x5880a4f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A4EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A4F1: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A4F4: mov ecx, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A4FB: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5880A4FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A500: je 0x5880a52b
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880A502: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x5880A505: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x5880A508: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x5880A50B: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x5880A50E: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x20
        // 0x5880A511: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5880A514: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880A517: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x5880A519: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5880A51C: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5880A51F: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x5880A522: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x5880A525: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880A528: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880A52B: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A52E: mov dword ptr [esi - 0x2bc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A534: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A537: lea eax, [edx - 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x5880A53A: mov dword ptr [ebp + ecx*4 + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A541: add dword ptr [ebp + 0x74], edi
        __asm _emit 0x01
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x5880A544: jmp 0x5880a552
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5880A546: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5880A549: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A54E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880A552: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5880A555: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5880A558: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A55C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5880A55F: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880A563: je 0x5880a600
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A569: mov eax, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x5880A56C: mov eax, dword ptr [ebp + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A573: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5880A578: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A57E: lea eax, [edx + 2]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x02
        // 0x5880A581: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A587: jle 0x5880a5a9
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5880A589: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A58B: jl 0x5880a5a9
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x5880A58D: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A594: je 0x5880a5a9
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5880A596: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A59C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A5A0: lea eax, [eax + ecx + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A5A7: jmp 0x5880a5ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A5A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A5AB: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A5AE: mov ecx, dword ptr [ebp + ecx*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A5B5: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5880A5B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A5BA: je 0x5880a5e5
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880A5BC: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x5880A5BF: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x5880A5C2: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x5880A5C5: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x5880A5C8: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x20
        // 0x5880A5CB: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5880A5CE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880A5D1: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x5880A5D3: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5880A5D6: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5880A5D9: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x5880A5DC: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x5880A5DF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880A5E2: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880A5E5: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A5E8: mov dword ptr [esi - 0x2b8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A5EE: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5880A5F1: lea eax, [edx - 3]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFD
        // 0x5880A5F4: mov dword ptr [ebp + ecx*4 + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A5FB: add dword ptr [ebp + 0x74], edi
        __asm _emit 0x01
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x5880A5FE: jmp 0x5880a60c
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5880A600: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5880A603: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A608: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880A60C: add dword ptr [esp + 0x14], 0x100
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A614: add dword ptr [esp + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x5880A619: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5880A61C: lea eax, [edx - 6]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xFA
        // 0x5880A61F: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x5880A622: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5880A625: jl 0x5880a334
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x09
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A62B: mov esi, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A631: mov eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A637: add esi, 0x10918
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880A63D: mov ecx, 0x37
        __asm _emit 0xB9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A642: lea edi, [ebp + 0x43c]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A648: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5880A64A: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880A64D: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880A64F: push ecx
        __asm _emit 0x51
        // 0x5880A650: mov ecx, dword ptr [ebp + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A656: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5880A658: push ebx
        __asm _emit 0x53
        // 0x5880A659: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x41
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A65E: mov eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A664: mov ecx, dword ptr [ebp + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A66A: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5880A66D: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880A66F: push edx
        __asm _emit 0x52
        // 0x5880A670: push ebx
        __asm _emit 0x53
        // 0x5880A671: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x41
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A676: mov eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A67C: mov ecx, dword ptr [ebp + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A682: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5880A685: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5880A687: push eax
        __asm _emit 0x50
        // 0x5880A688: push ebx
        __asm _emit 0x53
        // 0x5880A689: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x41
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A68E: mov eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A694: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880A697: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880A699: push ecx
        __asm _emit 0x51
        // 0x5880A69A: mov ecx, dword ptr [ebp + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6A0: push ebx
        __asm _emit 0x53
        // 0x5880A6A1: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x40
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A6A6: movzx eax, byte ptr [ebp + 0x4fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6AD: mov ecx, dword ptr [ebp + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6B3: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5880A6B6: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880A6B8: push edx
        __asm _emit 0x52
        // 0x5880A6B9: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A6BE: movzx eax, byte ptr [ebp + 0x4fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6C5: mov ecx, dword ptr [ebp + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6CB: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5880A6CE: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5880A6D0: push eax
        __asm _emit 0x50
        // 0x5880A6D1: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x40
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A6D6: movzx eax, byte ptr [ebp + 0x4fe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6DD: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880A6E0: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880A6E2: push ecx
        __asm _emit 0x51
        // 0x5880A6E3: mov ecx, dword ptr [ebp + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6E9: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x40
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A6EE: movzx eax, byte ptr [ebp + 0x4ff]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6F5: mov ecx, dword ptr [ebp + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A6FB: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5880A6FE: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880A700: push edx
        __asm _emit 0x52
        // 0x5880A701: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x40
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5880A706: movzx eax, byte ptr [ebp + 0x4fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A70D: mov ecx, dword ptr [ebp + 0x3c8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A713: push eax
        __asm _emit 0x50
        // 0x5880A714: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A719: movzx ecx, byte ptr [ebp + 0x4fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8D
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A720: push ecx
        __asm _emit 0x51
        // 0x5880A721: mov ecx, dword ptr [ebp + 0x3cc]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A727: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A72C: movzx edx, byte ptr [ebp + 0x4fe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A733: mov ecx, dword ptr [ebp + 0x3d0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A739: push edx
        __asm _emit 0x52
        // 0x5880A73A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A73F: movzx eax, byte ptr [ebp + 0x4ff]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A746: mov ecx, dword ptr [ebp + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A74C: push eax
        __asm _emit 0x50
        // 0x5880A74D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A752: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A758: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5880A75B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5880A75D: je 0x5880a768
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5880A75F: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A766: jmp 0x5880a76a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A768: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A76A: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5880A76D: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5880A770: lea eax, [ebp + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xD5
        __asm _emit 0x00
        // 0x5880A774: mov edx, dword ptr [eax + 0x440]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A77A: add ecx, 0x181
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A780: cmp edx, dword ptr [eax + 0x444]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A786: je 0x5880a7b9
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5880A788: mov edx, dword ptr [eax + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A78E: mov esi, dword ptr [eax + 0x440]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A794: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880A796: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x5880A798: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x5880A79B: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5880A79D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880A79F: div esi
        __asm _emit 0xF7
        __asm _emit 0xF6
        // 0x5880A7A1: imul eax, eax, 0x68
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x68
        // 0x5880A7A4: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5880A7A6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880A7AB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5880A7AD: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880A7B0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880A7B2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880A7B5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880A7B7: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5880A7B9: push ecx
        __asm _emit 0x51
        // 0x5880A7BA: mov ecx, dword ptr [ebp + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A7C0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x8B
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A7C5: cmp dword ptr [ebp + 0xd0], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A7CB: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A7CF: jle 0x5880a872
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A7D5: lea edi, [ebp + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A7DB: jmp 0x5880a7e0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5880A7E0..0x5880A889; 169 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a260_segment_01() {
    __asm {
        // 0x5880A7E0: push 0xf8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A7E5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880A7EA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880A7ED: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A7F1: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5880A7F3: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5880A7F7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5880A7F9: je 0x5880a81c
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5880A7FB: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5880A7FE: lea edx, [ecx + ebx + 0x123]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A805: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5880A808: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5880A80A: push edx
        __asm _emit 0x52
        // 0x5880A80B: add ecx, 0xa5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A811: push ecx
        __asm _emit 0x51
        // 0x5880A812: push ebp
        __asm _emit 0x55
        // 0x5880A813: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880A815: call 0x588c6aa0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xC2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A81A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5880A81C: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x5880A81E: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5880A821: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A826: add dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x26
        // 0x5880A82A: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A832: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5880A835: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5880A839: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880A83B: je 0x5880a843
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A83D: push esi
        __asm _emit 0x56
        // 0x5880A83E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x87
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A843: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5880A846: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880A848: je 0x5880a850
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A84A: push esi
        __asm _emit 0x56
        // 0x5880A84B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A850: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5880A852: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A857: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A85B: inc eax
        __asm _emit 0x40
        // 0x5880A85C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5880A85F: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x14
        // 0x5880A862: cmp eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A868: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A86C: jl 0x5880a7e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A872: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5880A874: cmp dword ptr [ebp + 0x74], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x74
        // 0x5880A877: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A87B: jle 0x5880a922
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A881: lea edi, [ebp + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A887: jmp 0x5880a890
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5880A890..0x5880A936; 166 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a260_segment_02() {
    __asm {
        // 0x5880A890: push 0xf8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A895: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880A89A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880A89D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A8A1: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A8A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A8AB: je 0x5880a8d0
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5880A8AD: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5880A8B0: lea edx, [ecx + ebx + 0xbf]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A8B7: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5880A8BA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5880A8BC: push edx
        __asm _emit 0x52
        // 0x5880A8BD: add ecx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A8C3: push ecx
        __asm _emit 0x51
        // 0x5880A8C4: push ebp
        __asm _emit 0x55
        // 0x5880A8C5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880A8C7: call 0x588c6aa0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xC1
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A8CC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5880A8CE: jmp 0x5880a8d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A8D0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5880A8D2: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x5880A8D4: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5880A8D7: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A8DC: add dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x26
        // 0x5880A8E0: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A8E8: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5880A8EC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880A8EE: je 0x5880a8f6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A8F0: push esi
        __asm _emit 0x56
        // 0x5880A8F1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x86
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A8F6: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5880A8F9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880A8FB: je 0x5880a903
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A8FD: push esi
        __asm _emit 0x56
        // 0x5880A8FE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A903: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5880A905: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A90A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A90E: inc eax
        __asm _emit 0x40
        // 0x5880A90F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5880A912: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x14
        // 0x5880A915: cmp eax, dword ptr [ebp + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x5880A918: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880A91C: jl 0x5880a890
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A922: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880A926: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A92D: pop ecx
        __asm _emit 0x59
        // 0x5880A92E: pop edi
        __asm _emit 0x5F
        // 0x5880A92F: pop esi
        __asm _emit 0x5E
        // 0x5880A930: pop ebp
        __asm _emit 0x5D
        // 0x5880A931: pop ebx
        __asm _emit 0x5B
        // 0x5880A932: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5880A935: ret
        __asm _emit 0xC3
    }
}
