// CWarehouseItemForce destructor body. Ghidra shows this releases and clears
// its child pointers through their virtual slot-0 methods, then restores EH state.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F8640 .. +0x1D6 bytes.
// Source symbol alias: FUN_588f8640.
extern "C" __declspec(naked) void FUN_588f8640() {
    __asm {
        // 0x588F8640: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F8642: push 0x5898a088
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F8647: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F864D: push eax
        __asm _emit 0x50
        // 0x588F864E: push ecx
        __asm _emit 0x51
        // 0x588F864F: push esi
        __asm _emit 0x56
        // 0x588F8650: push edi
        __asm _emit 0x57
        // 0x588F8651: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F8656: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F8658: push eax
        __asm _emit 0x50
        // 0x588F8659: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F865D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8663: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F8665: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F8669: mov dword ptr [esi], 0x589a210c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x0C
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F866F: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8675: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588F8677: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F867B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F867D: je 0x588f868d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F867F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8681: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8683: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F8685: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8687: mov dword ptr [esi + 0xc0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F868D: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8693: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F8695: je 0x588f86a5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F8697: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8699: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F869B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F869D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F869F: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86A5: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86AB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F86AD: je 0x588f86bd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F86AF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F86B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F86B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F86B5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F86B7: mov dword ptr [esi + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86BD: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86C3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F86C5: je 0x588f86d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F86C7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F86C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F86CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F86CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F86CF: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86D5: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86DB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F86DD: je 0x588f86ed
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F86DF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F86E1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F86E3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F86E5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F86E7: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86ED: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F86F3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F86F5: je 0x588f8705
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F86F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F86F9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F86FB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F86FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F86FF: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8705: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F870B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F870D: je 0x588f871d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F870F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8711: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8713: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F8715: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8717: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F871D: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8723: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F8725: je 0x588f8735
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F8727: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8729: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F872B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F872D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F872F: mov dword ptr [esi + 0xe0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8735: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F873B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F873D: je 0x588f874d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F873F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8741: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8743: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F8745: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8747: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F874D: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8753: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F8755: je 0x588f8765
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F8757: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8759: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F875B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F875D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F875F: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8765: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F876B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F876D: je 0x588f877d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F876F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8771: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8773: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F8775: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8777: mov dword ptr [esi + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F877D: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8783: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F8785: je 0x588f8795
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F8787: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8789: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F878B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F878D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F878F: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8795: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F879B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F879D: je 0x588f87ad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F879F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F87A1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F87A3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F87A5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F87A7: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87AD: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87B3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F87B5: je 0x588f87c5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F87B7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F87B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F87BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F87BD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F87BF: mov dword ptr [esi + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87C5: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87CB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F87CD: je 0x588f87dd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F87CF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F87D1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F87D3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F87D5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F87D7: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87DD: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87E3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F87E5: je 0x588f87f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F87E7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F87E9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F87EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F87ED: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F87EF: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F87F5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F87F7: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F87FF: call 0x588f7c00
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F8804: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F8808: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F880F: pop ecx
        __asm _emit 0x59
        // 0x588F8810: pop edi
        __asm _emit 0x5F
        // 0x588F8811: pop esi
        __asm _emit 0x5E
        // 0x588F8812: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F8815: ret
        __asm _emit 0xC3
    }
}
