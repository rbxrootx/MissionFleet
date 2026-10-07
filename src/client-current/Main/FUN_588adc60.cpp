// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 408 bytes in 1 exact ranges.
// Source symbol alias: FUN_588adc60.

// Ghidra body range 0x588ADC60..0x588ADDF8; 408 mapped bytes.
extern "C" __declspec(naked) void FUN_588adc60_segment_00() {
    __asm {
        // 0x588ADC60: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x588ADC63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588ADC68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588ADC6A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588ADC6E: push esi
        __asm _emit 0x56
        // 0x588ADC6F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588ADC71: cmp dword ptr [esi + 0x20f4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC78: je 0x588adde8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC7E: movzx ecx, word ptr [esi + 0x20f6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF6
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC85: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588ADC89: push eax
        __asm _emit 0x50
        // 0x588ADC8A: push ecx
        __asm _emit 0x51
        // 0x588ADC8B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588ADC8D: call 0x588adc20
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588ADC92: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ADC94: je 0x588adde8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC9A: mov edx, dword ptr [esi + 0x20f4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCA0: push ebx
        __asm _emit 0x53
        // 0x588ADCA1: mov ebx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCA7: push edi
        __asm _emit 0x57
        // 0x588ADCA8: mov dword ptr [esi + 0xbc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCAE: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588ADCB0: je 0x588adcb9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588ADCB2: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588ADCB4: shr edi, 0x10
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x10
        // 0x588ADCB7: jmp 0x588adcbe
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588ADCB9: mov edi, 0x270f
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCBE: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x588ADCC1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588ADCC3: lea eax, [esi + 0x16e]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCC9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADCD0: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ADCD3: jne 0x588adcde
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588ADCD5: cmp word ptr [eax - 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x588ADCDA: jne 0x588adcde
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588ADCDC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588ADCDE: cmp word ptr [eax - 2], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0xFE
        // 0x588ADCE2: je 0x588add39
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x588ADCE4: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ADCE7: jne 0x588adcf2
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588ADCE9: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588ADCED: jne 0x588adcf2
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588ADCEF: lea ecx, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x01
        // 0x588ADCF2: cmp word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x38
        // 0x588ADCF5: je 0x588add2e
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588ADCF7: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ADCFA: jne 0x588add06
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588ADCFC: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588ADD01: jne 0x588add06
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588ADD03: lea ecx, [edx + 2]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x02
        // 0x588ADD06: cmp word ptr [eax + 2], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x02
        // 0x588ADD0A: je 0x588add31
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588ADD0C: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ADD0F: jne 0x588add1b
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588ADD11: cmp word ptr [eax + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588ADD16: jne 0x588add1b
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588ADD18: lea ecx, [edx + 3]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x03
        // 0x588ADD1B: cmp word ptr [eax + 4], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588ADD1F: je 0x588add36
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588ADD21: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588ADD24: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588ADD27: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588ADD2A: jl 0x588adcd0
        __asm _emit 0x7C
        __asm _emit 0xA4
        // 0x588ADD2C: jmp 0x588add39
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588ADD2E: inc edx
        __asm _emit 0x42
        // 0x588ADD2F: jmp 0x588add39
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588ADD31: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588ADD34: jmp 0x588add39
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588ADD36: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x588ADD39: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ADD3C: je 0x588adde6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD42: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588ADD45: jne 0x588adde6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD4B: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588ADD4F: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588ADD53: mov word ptr [esi + ecx*2 + 0x16c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x4E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD5B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588ADD5F: mov dword ptr [esi + 0x11c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD65: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588ADD69: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD6F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588ADD73: mov dword ptr [esi + 0x128], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD79: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588ADD7D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ADD7F: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD85: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588ADD89: mov dword ptr [esi + 0x134], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD8F: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588ADD91: mov dword ptr [esi + 0x120], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADD97: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588ADD9B: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADDA1: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588ADDA5: push ecx
        __asm _emit 0x51
        // 0x588ADDA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ADDA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ADDAA: mov dword ptr [esi + 0x12c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADDB0: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADDB6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ADDBC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588ADDC0: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588ADDC4: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588ADDC8: mov eax, dword ptr [esi + 0x20f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADDCE: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588ADDD0: push 0x80011034
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588ADDD5: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588ADDD9: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588ADDDD: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588ADDE1: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x2E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588ADDE6: pop edi
        __asm _emit 0x5F
        // 0x588ADDE7: pop ebx
        __asm _emit 0x5B
        // 0x588ADDE8: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588ADDEC: pop esi
        __asm _emit 0x5E
        // 0x588ADDED: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588ADDEF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xED
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588ADDF4: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588ADDF7: ret
        __asm _emit 0xC3
    }
}
