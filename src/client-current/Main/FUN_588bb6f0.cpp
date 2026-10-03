// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588BB6F0 .. +0x533 bytes.
extern "C" __declspec(naked) void FUN_588bb6f0() {
    __asm {
        // 0x588BB6F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588BB6F2: push 0x589886e6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BB6F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB6FD: push eax
        __asm _emit 0x50
        // 0x588BB6FE: push ecx
        __asm _emit 0x51
        // 0x588BB6FF: push ebx
        __asm _emit 0x53
        // 0x588BB700: push ebp
        __asm _emit 0x55
        // 0x588BB701: push esi
        __asm _emit 0x56
        // 0x588BB702: push edi
        __asm _emit 0x57
        // 0x588BB703: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588BB708: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588BB70A: push eax
        __asm _emit 0x50
        // 0x588BB70B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BB70F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB715: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BB717: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588BB71B: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB71F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BB723: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588BB727: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BB72B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BB72F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588BB733: push ebx
        __asm _emit 0x53
        // 0x588BB734: push eax
        __asm _emit 0x50
        // 0x588BB735: push ecx
        __asm _emit 0x51
        // 0x588BB736: push edi
        __asm _emit 0x57
        // 0x588BB737: push ebp
        __asm _emit 0x55
        // 0x588BB738: push edx
        __asm _emit 0x52
        // 0x588BB739: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BB73B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB740: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BB746: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BB74B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB74D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588BB750: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588BB753: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB75A: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588BB75D: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BB761: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588BB765: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BB767: mov dword ptr [esi], 0x589a09d8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BB76D: mov dword ptr [esi + 0x13b4], 0xc
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB777: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB77A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB77F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB782: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB786: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588BB78B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB78D: je 0x588bb7c9
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588BB78F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BB792: cmp dword ptr [ecx + 0x164], 0x31
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x588BB799: jle 0x588bb7b9
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588BB79B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB7A1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB7A3: je 0x588bb7b9
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588BB7A5: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB7AB: push ebx
        __asm _emit 0x53
        // 0x588BB7AC: push edi
        __asm _emit 0x57
        // 0x588BB7AD: push ebp
        __asm _emit 0x55
        // 0x588BB7AE: push ecx
        __asm _emit 0x51
        // 0x588BB7AF: push esi
        __asm _emit 0x56
        // 0x588BB7B0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB7B2: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x64
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB7B7: jmp 0x588bb7cb
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588BB7B9: push ebx
        __asm _emit 0x53
        // 0x588BB7BA: push edi
        __asm _emit 0x57
        // 0x588BB7BB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB7BD: push ebp
        __asm _emit 0x55
        // 0x588BB7BE: push ecx
        __asm _emit 0x51
        // 0x588BB7BF: push esi
        __asm _emit 0x56
        // 0x588BB7C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB7C2: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB7C7: jmp 0x588bb7cb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB7C9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB7CB: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BB7CD: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB7D2: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BB7D5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB7DA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB7DD: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB7E1: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588BB7E6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB7E8: je 0x588bb824
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588BB7EA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BB7ED: cmp dword ptr [ecx + 0x164], 0x30
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        // 0x588BB7F4: jle 0x588bb814
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588BB7F6: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB7FC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB7FE: je 0x588bb814
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588BB800: mov ecx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB806: push ebx
        __asm _emit 0x53
        // 0x588BB807: push edi
        __asm _emit 0x57
        // 0x588BB808: push ebp
        __asm _emit 0x55
        // 0x588BB809: push ecx
        __asm _emit 0x51
        // 0x588BB80A: push esi
        __asm _emit 0x56
        // 0x588BB80B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB80D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x64
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB812: jmp 0x588bb826
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588BB814: push ebx
        __asm _emit 0x53
        // 0x588BB815: push edi
        __asm _emit 0x57
        // 0x588BB816: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB818: push ebp
        __asm _emit 0x55
        // 0x588BB819: push ecx
        __asm _emit 0x51
        // 0x588BB81A: push esi
        __asm _emit 0x56
        // 0x588BB81B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB81D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x64
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB822: jmp 0x588bb826
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB824: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB826: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BB828: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB82D: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BB830: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB835: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB838: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB83C: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588BB841: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB843: je 0x588bb87f
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588BB845: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BB848: cmp dword ptr [ecx + 0x164], 0x2f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2F
        // 0x588BB84F: jle 0x588bb86f
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588BB851: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB857: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB859: je 0x588bb86f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588BB85B: mov ecx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB861: push ebx
        __asm _emit 0x53
        // 0x588BB862: push edi
        __asm _emit 0x57
        // 0x588BB863: push ebp
        __asm _emit 0x55
        // 0x588BB864: push ecx
        __asm _emit 0x51
        // 0x588BB865: push esi
        __asm _emit 0x56
        // 0x588BB866: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB868: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB86D: jmp 0x588bb881
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588BB86F: push ebx
        __asm _emit 0x53
        // 0x588BB870: push edi
        __asm _emit 0x57
        // 0x588BB871: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB873: push ebp
        __asm _emit 0x55
        // 0x588BB874: push ecx
        __asm _emit 0x51
        // 0x588BB875: push esi
        __asm _emit 0x56
        // 0x588BB876: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB878: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB87D: jmp 0x588bb881
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB87F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB881: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BB883: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB888: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BB88B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x13
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB890: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB893: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB897: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588BB89C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB89E: je 0x588bb8da
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588BB8A0: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BB8A3: cmp dword ptr [ecx + 0x164], 0x2e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2E
        // 0x588BB8AA: jle 0x588bb8ca
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588BB8AC: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB8B2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB8B4: je 0x588bb8ca
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588BB8B6: mov ecx, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB8BC: push ebx
        __asm _emit 0x53
        // 0x588BB8BD: push edi
        __asm _emit 0x57
        // 0x588BB8BE: push ebp
        __asm _emit 0x55
        // 0x588BB8BF: push ecx
        __asm _emit 0x51
        // 0x588BB8C0: push esi
        __asm _emit 0x56
        // 0x588BB8C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB8C3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB8C8: jmp 0x588bb8dc
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588BB8CA: push ebx
        __asm _emit 0x53
        // 0x588BB8CB: push edi
        __asm _emit 0x57
        // 0x588BB8CC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB8CE: push ebp
        __asm _emit 0x55
        // 0x588BB8CF: push ecx
        __asm _emit 0x51
        // 0x588BB8D0: push esi
        __asm _emit 0x56
        // 0x588BB8D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB8D3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BB8D8: jmp 0x588bb8dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB8DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB8DC: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BB8DF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BB8E4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB8E9: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BB8EC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB8F1: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BB8F4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BB8F9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB8FE: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588BB901: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB906: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB90B: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB910: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB915: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB918: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB91C: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588BB921: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB923: je 0x588bb965
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588BB925: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BB92B: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588BB932: jle 0x588bb94b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588BB934: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB93B: je 0x588bb94b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588BB93D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB943: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB949: jmp 0x588bb94d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB94B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB94D: lea edx, [edi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588BB950: push edx
        __asm _emit 0x52
        // 0x588BB951: lea edx, [ebp + 0x13d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB957: push edx
        __asm _emit 0x52
        // 0x588BB958: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588BB95A: push ecx
        __asm _emit 0x51
        // 0x588BB95B: push esi
        __asm _emit 0x56
        // 0x588BB95C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB95E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB963: jmp 0x588bb967
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB965: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB967: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB96C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB971: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB977: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x12
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB97C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB97F: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB983: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588BB988: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB98A: je 0x588bb9d5
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588BB98C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BB98F: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588BB996: jle 0x588bb9aa
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BB998: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB99E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BB9A0: je 0x588bb9aa
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB9A2: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9A8: jmp 0x588bb9ac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB9AA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BB9AC: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BB9AE: lea edx, [edi + 0x9f]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9B4: push edx
        __asm _emit 0x52
        // 0x588BB9B5: lea edx, [ebp + 0x111]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9BB: push edx
        __asm _emit 0x52
        // 0x588BB9BC: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BB9C2: push ecx
        __asm _emit 0x51
        // 0x588BB9C3: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BB9C9: push esi
        __asm _emit 0x56
        // 0x588BB9CA: push ecx
        __asm _emit 0x51
        // 0x588BB9CB: push edx
        __asm _emit 0x52
        // 0x588BB9CC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BB9CE: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x23
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB9D3: jmp 0x588bb9d7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB9D5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB9D7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9DC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BB9E1: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9E7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BB9EC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BB9EF: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BB9F3: mov ebx, 7
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB9F8: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BB9FC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BB9FE: je 0x588bba49
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588BBA00: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BBA03: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x588BBA0A: jle 0x588bba1e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BBA0C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA12: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BBA14: je 0x588bba1e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BBA16: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA1C: jmp 0x588bba20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBA1E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BBA20: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BBA22: lea edx, [edi + 0x9f]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA28: push edx
        __asm _emit 0x52
        // 0x588BBA29: lea edx, [ebp + 0x141]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA2F: push edx
        __asm _emit 0x52
        // 0x588BBA30: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBA36: push ecx
        __asm _emit 0x51
        // 0x588BBA37: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBA3D: push esi
        __asm _emit 0x56
        // 0x588BBA3E: push ecx
        __asm _emit 0x51
        // 0x588BBA3F: push edx
        __asm _emit 0x52
        // 0x588BBA40: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BBA42: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BBA47: jmp 0x588bba4b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBA49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BBA4B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA50: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BBA55: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA5B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x11
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BBA60: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BBA63: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BBA67: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588BBA6C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BBA6E: je 0x588bbabe
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588BBA70: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBA76: cmp dword ptr [ecx + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588BBA7D: jle 0x588bba96
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588BBA7F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA86: je 0x588bba96
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588BBA88: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA8E: add edx, 0x180
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBA94: jmp 0x588bba98
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBA96: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BBA98: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BBA9A: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588BBA9D: push ecx
        __asm _emit 0x51
        // 0x588BBA9E: lea ecx, [ebp + 0x107]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBAA4: push ecx
        __asm _emit 0x51
        // 0x588BBAA5: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBAAB: push edx
        __asm _emit 0x52
        // 0x588BBAAC: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBAB2: push esi
        __asm _emit 0x56
        // 0x588BBAB3: push edx
        __asm _emit 0x52
        // 0x588BBAB4: push ecx
        __asm _emit 0x51
        // 0x588BBAB5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BBAB7: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x22
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BBABC: jmp 0x588bbac0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBABE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BBAC0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBAC5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BBACA: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBAD0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BBAD5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BBAD8: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BBADC: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588BBAE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BBAE3: je 0x588bbb32
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588BBAE5: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBAEB: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBAF1: jle 0x588bbb0a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588BBAF3: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBAFA: je 0x588bbb0a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588BBAFC: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB02: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB08: jmp 0x588bbb0c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBB0A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BBB0C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBB12: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BBB14: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588BBB17: push edi
        __asm _emit 0x57
        // 0x588BBB18: add ebp, 0x141
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB1E: push ebp
        __asm _emit 0x55
        // 0x588BBB1F: push edx
        __asm _emit 0x52
        // 0x588BBB20: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BBB26: push esi
        __asm _emit 0x56
        // 0x588BBB27: push edx
        __asm _emit 0x52
        // 0x588BBB28: push ecx
        __asm _emit 0x51
        // 0x588BBB29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BBB2B: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BBB30: jmp 0x588bbb34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBB32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BBB34: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB3A: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB40: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB45: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BBB49: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB4F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588BBB51: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BBB55: push 0x33c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB5A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BBB5F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BBB64: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BBB67: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BBB6B: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588BBB70: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BBB72: je 0x588bbb8d
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588BBB74: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BBB76: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BBB78: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BBB7A: push 0x1e
        __asm _emit 0x6A
        __asm _emit 0x1E
        // 0x588BBB7C: push 0x338
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB81: push esi
        __asm _emit 0x56
        // 0x588BBB82: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BBB84: call 0x5886dda0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x22
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588BBB89: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588BBB8B: jmp 0x588bbb8f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BBB8D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BBB8F: mov dword ptr [esi + 0x13a8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB95: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588BBB98: mov edx, 0x44c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBB9D: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588BBBA2: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588BBBA6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BBBA8: je 0x588bbbb0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588BBBAA: push edi
        __asm _emit 0x57
        // 0x588BBBAB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BBBB0: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588BBBB3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BBBB5: je 0x588bbbbd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588BBBB7: push edi
        __asm _emit 0x57
        // 0x588BBBB8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BBBBD: mov eax, dword ptr [esi + 0x13a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBC3: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBC8: mov word ptr [eax + 0x324], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBCF: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBD4: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588BBBD8: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588BBBDC: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBE1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588BBBE4: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBE9: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588BBBEC: mov byte ptr [esi + 0xa0], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBBF3: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588BBBF7: mov dword ptr [esi + 0x9c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBC01: mov dword ptr [esi + 0x13b0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBC0B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588BBC0D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BBC11: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BBC18: pop ecx
        __asm _emit 0x59
        // 0x588BBC19: pop edi
        __asm _emit 0x5F
        // 0x588BBC1A: pop esi
        __asm _emit 0x5E
        // 0x588BBC1B: pop ebp
        __asm _emit 0x5D
        // 0x588BBC1C: pop ebx
        __asm _emit 0x5B
        // 0x588BBC1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588BBC20: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
