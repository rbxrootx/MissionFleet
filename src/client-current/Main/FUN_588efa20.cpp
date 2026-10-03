// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EFA20 .. +0x220 bytes.
extern "C" __declspec(naked) void FUN_588efa20() {
    __asm {
        // 0x588EFA20: push ecx
        __asm _emit 0x51
        // 0x588EFA21: push esi
        __asm _emit 0x56
        // 0x588EFA22: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EFA24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588EFA28: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588EFA2A: je 0x588efc36
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA30: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFA34: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA39: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFA3C: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA41: push edi
        __asm _emit 0x57
        // 0x588EFA42: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFA45: je 0x588efa72
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588EFA47: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFA4B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFA4E: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA53: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFA56: je 0x588efa72
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588EFA58: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFA5C: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFA5F: mov eax, 0x700
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA64: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFA67: je 0x588efa72
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EFA69: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFA6D: jmp 0x588efc12
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFA72: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EFA75: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588EFA78: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFA7A: jne 0x588efa84
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588EFA7C: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588EFA7F: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588EFA82: je 0x588efb03
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588EFA84: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588EFA86: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588EFA89: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588EFA8C: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588EFA8F: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588EFA92: ja 0x588efab9
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588EFA94: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588EFA97: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588EFA9A: ja 0x588efab0
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588EFA9C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EFA9E: jge 0x588efaa5
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588EFAA0: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588EFAA3: jmp 0x588efac4
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588EFAA5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588EFAA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EFAA9: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588EFAAC: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588EFAAE: jmp 0x588efac4
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588EFAB0: cdq
        __asm _emit 0x99
        // 0x588EFAB1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588EFAB3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588EFAB5: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588EFAB7: jmp 0x588efac4
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588EFAB9: cdq
        __asm _emit 0x99
        // 0x588EFABA: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588EFABD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588EFABF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588EFAC1: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588EFAC4: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588EFAC7: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588EFACA: ja 0x588efaef
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588EFACC: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588EFACF: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588EFAD2: ja 0x588efae6
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588EFAD4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EFAD6: jge 0x588efadd
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588EFAD8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588EFADB: jmp 0x588efafa
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588EFADD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EFADF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EFAE1: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588EFAE4: jmp 0x588efafa
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588EFAE6: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588EFAE8: cdq
        __asm _emit 0x99
        // 0x588EFAE9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588EFAEB: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588EFAED: jmp 0x588efafa
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588EFAEF: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588EFAF1: cdq
        __asm _emit 0x99
        // 0x588EFAF2: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588EFAF5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588EFAF7: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EFAFA: push eax
        __asm _emit 0x50
        // 0x588EFAFB: push edi
        __asm _emit 0x57
        // 0x588EFAFC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EFAFE: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFB03: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588EFB06: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588EFB09: jne 0x588efc12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB0F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588EFB12: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588EFB15: jne 0x588efc12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB1B: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588EFB1F: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB24: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588EFB27: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB2C: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588EFB2F: jne 0x588efb9e
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x588EFB31: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588EFB35: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB3A: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588EFB3D: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB42: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588EFB45: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588EFB49: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588EFB4E: mov dword ptr [esi + 0x64], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB55: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFB5A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588EFB5C: cmp dword ptr [eax + 0x170], 0xc
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588EFB63: mov edx, 0xc8
        __asm _emit 0xBA
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB68: jle 0x588efb8d
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588EFB6A: cmp dword ptr [eax + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB70: je 0x588efb8d
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588EFB72: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB78: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588EFB7B: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFB80: push eax
        __asm _emit 0x50
        // 0x588EFB81: push edi
        __asm _emit 0x57
        // 0x588EFB82: push edx
        __asm _emit 0x52
        // 0x588EFB83: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EFB88: jmp 0x588efc12
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFB8D: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFB92: push eax
        __asm _emit 0x50
        // 0x588EFB93: push edi
        __asm _emit 0x57
        // 0x588EFB94: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFB96: push edx
        __asm _emit 0x52
        // 0x588EFB97: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EFB9C: jmp 0x588efc12
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x588EFB9E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFBA2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588EFBA4: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFBA7: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBAC: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFBAF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFBB3: jne 0x588efbed
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588EFBB5: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBBA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFBBD: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBC2: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588EFBC5: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFBC9: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBCE: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFBD2: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBD7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588EFBDB: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBE0: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588EFBE4: mov dword ptr [esi + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBEB: jmp 0x588efc12
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588EFBED: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFBF0: mov eax, 0x700
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFBF5: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588EFBF8: jne 0x588efc12
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588EFBFA: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFBFE: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC03: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588EFC06: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC0B: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588EFC0E: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588EFC12: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588EFC15: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EFC17: je 0x588efc35
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588EFC19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC20: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588EFC23: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EFC25: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588EFC28: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588EFC2B: je 0x588efc39
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588EFC2D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EFC2F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EFC31: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EFC33: jne 0x588efc20
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588EFC35: pop edi
        __asm _emit 0x5F
        // 0x588EFC36: pop esi
        __asm _emit 0x5E
        // 0x588EFC37: pop ecx
        __asm _emit 0x59
        // 0x588EFC38: ret
        __asm _emit 0xC3
        // 0x588EFC39: pop edi
        __asm _emit 0x5F
        // 0x588EFC3A: pop esi
        __asm _emit 0x5E
        // 0x588EFC3B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EFC3E: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
