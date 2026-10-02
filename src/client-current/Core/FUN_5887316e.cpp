// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887316E .. +0x1F2 bytes.
extern "C" __declspec(naked) void FUN_5887316e() {
    __asm {
        // 0x5887316E: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x58873170: push 0x588ed630
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xD6
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58873175: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xF5
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5887317A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887317C: mov dword ptr [ebp - 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xD8
        // 0x5887317F: and dword ptr [ebp - 0x34], edi
        __asm _emit 0x21
        __asm _emit 0x7D
        __asm _emit 0xCC
        // 0x58873182: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x58873184: mov byte ptr [ebp - 0x19], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xE7
        // 0x58873187: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5887318A: cmp esi, 0xb
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x5887318D: jg 0x588731e6
        __asm _emit 0x7F
        __asm _emit 0x57
        // 0x5887318F: je 0x588731a6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58873191: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58873193: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58873195: pop ecx
        __asm _emit 0x59
        // 0x58873196: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58873198: je 0x588731f7
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5887319A: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5887319C: je 0x588731a6
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5887319E: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588731A0: je 0x588731f7
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x588731A2: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588731A4: jne 0x588731ca
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588731A6: call 0x58868bf1
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x5A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588731AB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588731AD: mov dword ptr [ebp - 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xD8
        // 0x588731B0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588731B2: jne 0x588731bc
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588731B4: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588731B7: jmp 0x5887333c
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588731BC: push dword ptr [edi]
        __asm _emit 0xFF
        __asm _emit 0x37
        // 0x588731BE: push esi
        __asm _emit 0x56
        // 0x588731BF: call 0x58873101
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588731C4: pop ecx
        __asm _emit 0x59
        // 0x588731C5: pop ecx
        __asm _emit 0x59
        // 0x588731C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588731C8: jne 0x588731dc
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588731CA: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588731CF: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588731D5: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xDD
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x588731DA: jmp 0x588731b4
        __asm _emit 0xEB
        __asm _emit 0xD8
        // 0x588731DC: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588731DF: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xDB
        // 0x588731E1: mov byte ptr [ebp - 0x19], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xE7
        // 0x588731E4: jmp 0x58873200
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588731E6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588731E8: sub eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0F
        // 0x588731EB: je 0x588731f7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588731ED: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x588731F0: je 0x588731f7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588731F2: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588731F5: jne 0x588731ca
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x588731F7: push esi
        __asm _emit 0x56
        // 0x588731F8: call 0x588730bf
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588731FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58873200: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x58873203: and dword ptr [ebp - 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xD0
        __asm _emit 0x00
        // 0x58873207: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x58873209: je 0x58873213
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5887320B: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5887320D: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x0A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873212: pop ecx
        __asm _emit 0x59
        // 0x58873213: and dword ptr [ebp - 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xD4
        __asm _emit 0x00
        // 0x58873217: mov byte ptr [ebp - 0x1a], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE6
        __asm _emit 0x00
        // 0x5887321B: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5887321F: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x58873222: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58873224: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x58873227: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x58873229: je 0x58873237
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5887322B: push ecx
        __asm _emit 0x51
        // 0x5887322C: call 0x5885786c
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58873231: pop ecx
        __asm _emit 0x59
        // 0x58873232: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58873234: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x58873237: mov dword ptr [ebp - 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5887323A: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5887323D: sete bh
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC7
        // 0x58873240: mov byte ptr [ebp - 0x1a], bh
        __asm _emit 0x88
        __asm _emit 0x7D
        __asm _emit 0xE6
        // 0x58873243: test bh, bh
        __asm _emit 0x84
        __asm _emit 0xFF
        // 0x58873245: jne 0x588732b8
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x58873247: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58873249: je 0x5887334c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887324F: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58873252: je 0x5887325e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58873254: cmp esi, 0xb
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x58873257: je 0x5887325e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58873259: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x5887325C: jne 0x58873287
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5887325E: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58873261: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x58873264: and dword ptr [edi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58873268: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x5887326B: jne 0x588732ae
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x5887326D: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873272: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58873275: mov dword ptr [ebp - 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xCC
        // 0x58873278: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887327D: mov dword ptr [eax + 8], 0x8c
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873284: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x58873287: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x5887328A: jne 0x588732ae
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5887328C: imul eax, dword ptr [0x588c4c74], 0xc
        __asm _emit 0x6B
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x4C
        __asm _emit 0x8C
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58873293: add eax, dword ptr [edi]
        __asm _emit 0x03
        __asm _emit 0x07
        // 0x58873295: imul edx, dword ptr [0x588c4c78], 0xc
        __asm _emit 0x6B
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x4C
        __asm _emit 0x8C
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x5887329C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5887329E: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x588732A1: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588732A3: je 0x588732b8
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588732A5: and dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588732A9: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x588732AC: jmp 0x5887329e
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x588732AE: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588732B3: mov edx, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xDC
        // 0x588732B6: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x588732B8: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588732BF: call 0x588732f8
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588732C4: test bh, bh
        __asm _emit 0x84
        __asm _emit 0xFF
        // 0x588732C6: jne 0x5887333a
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x588732C8: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x588732CB: jne 0x58873308
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x588732CD: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588732D2: push dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x588732D5: push esi
        __asm _emit 0x56
        // 0x588732D6: mov ebx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x588732D9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588732DB: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588732E1: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588732E3: pop ecx
        __asm _emit 0x59
        // 0x588732E4: jmp 0x58873314
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x588732E6: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588732E9: mov edi, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xD8
        // 0x588732EC: mov bl, byte ptr [ebp - 0x19]
        __asm _emit 0x8A
        __asm _emit 0x5D
        __asm _emit 0xE7
        // 0x588732EF: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x588732F2: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x588732F5: mov bh, byte ptr [ebp - 0x1a]
        __asm _emit 0x8A
        __asm _emit 0x7D
        __asm _emit 0xE6
        // 0x588732F8: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588732FA: je 0x58873307
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588732FC: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588732FE: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873303: pop ecx
        __asm _emit 0x59
        // 0x58873304: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x58873307: ret
        __asm _emit 0xC3
        // 0x58873308: push esi
        __asm _emit 0x56
        // 0x58873309: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5887330F: mov ebx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x58873312: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58873314: pop ecx
        __asm _emit 0x59
        // 0x58873315: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58873318: je 0x58873324
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5887331A: cmp esi, 0xb
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x5887331D: je 0x58873324
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5887331F: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58873322: jne 0x5887333a
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58873324: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x58873327: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5887332A: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x5887332D: jne 0x5887333a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5887332F: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873334: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xCC
        // 0x58873337: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5887333A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887333C: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5887333F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873346: pop ecx
        __asm _emit 0x59
        // 0x58873347: pop edi
        __asm _emit 0x5F
        // 0x58873348: pop esi
        __asm _emit 0x5E
        // 0x58873349: pop ebx
        __asm _emit 0x5B
        // 0x5887334A: leave
        __asm _emit 0xC9
        // 0x5887334B: ret
        __asm _emit 0xC3
        // 0x5887334C: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5887334E: je 0x58873358
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58873350: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58873352: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x09
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873357: pop ecx
        __asm _emit 0x59
        // 0x58873358: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5887335A: call 0x58857b3d
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x47
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5887335F: int3
        __asm _emit 0xCC
    }
}
