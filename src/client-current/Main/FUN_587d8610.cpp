// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 549 bytes in 2 exact ranges.
// Source symbol alias: FUN_587d8610.

// Ghidra body range 0x587D8610..0x587D8655; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_587d8610_segment_00() {
    __asm {
        // 0x587D8610: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587D8613: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8619: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D861F: mov eax, dword ptr [edx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x78
        // 0x587D8622: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8626: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D862C: push ebx
        __asm _emit 0x53
        // 0x587D862D: push ebp
        __asm _emit 0x55
        // 0x587D862E: push esi
        __asm _emit 0x56
        // 0x587D862F: push edi
        __asm _emit 0x57
        // 0x587D8630: mov edi, 0xda
        __asm _emit 0xBF
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8635: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8639: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8641: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8645: mov ebp, 0xbc0
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D864A: mov esi, 0xac0
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D864F: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8653: jmp 0x587d8660
        __asm _emit 0xEB
        __asm _emit 0x0B
    }
}

// Ghidra body range 0x587D8660..0x587D8840; 480 mapped bytes.
extern "C" __declspec(naked) void FUN_587d8610_segment_01() {
    __asm {
        // 0x587D8660: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8666: cmp dword ptr [eax + esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x30
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D866E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8672: je 0x587d8819
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8678: mov ebx, dword ptr [eax + esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x30
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D867F: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8685: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x587D8689: movzx edi, word ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x3C
        __asm _emit 0x38
        // 0x587D868D: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x587D868F: mov ebx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8695: mov ebx, dword ptr [esi + ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x1E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D869C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D869E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D86A0: je 0x587d86a7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D86A2: movzx ebx, byte ptr [ebx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x1B
        // 0x587D86A5: jmp 0x587d86a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D86A7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D86A9: movzx ebx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDB
        // 0x587D86AC: sub ebx, 5
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587D86AF: je 0x587d873d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86B5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x587D86B8: jne 0x587d8819
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86BE: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D86C2: cmp dword ptr [eax + ebp], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0x28
        // 0x587D86C5: je 0x587d8819
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86CB: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86D1: mov eax, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x28
        // 0x587D86D4: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D86D8: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x587D86DB: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D86DF: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587D86E2: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D86E6: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86EC: movzx eax, word ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x587D86F0: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x587D86F4: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D86F9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587D86FB: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587D86FE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587D8700: jl 0x587d8819
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8706: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D870A: cmp dword ptr [esp + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D870E: jl 0x587d8819
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8714: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8718: mov al, byte ptr [edi + esi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x37
        // 0x587D871B: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587D871D: add al, dl
        __asm _emit 0x02
        __asm _emit 0xC2
        // 0x587D871F: jne 0x587d8728
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587D8721: mov dword ptr [edi + ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8728: mov edi, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D872E: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587D8730: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587D8734: mov word ptr [esi + edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x587D8738: jmp 0x587d8819
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D873D: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8741: cmp dword ptr [ebx + ebp], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x2B
        __asm _emit 0x00
        // 0x587D8745: je 0x587d87a1
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x587D8747: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D874D: mov eax, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x28
        // 0x587D8750: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D8754: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x587D8757: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D875B: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587D875E: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8762: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8768: movzx eax, word ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x587D876C: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x587D8770: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8775: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587D8777: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587D877A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587D877C: jl 0x587d87a1
        __asm _emit 0x7C
        __asm _emit 0x23
        // 0x587D877E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8782: cmp dword ptr [esp + 0x18], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8786: jl 0x587d879d
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x587D8788: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D878C: mov bl, byte ptr [ecx + esi]
        __asm _emit 0x8A
        __asm _emit 0x1C
        __asm _emit 0x31
        // 0x587D878F: xor bl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x587D8792: add bl, dl
        __asm _emit 0x02
        __asm _emit 0xDA
        // 0x587D8794: jne 0x587d879d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587D8796: mov dword ptr [ecx + ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D879D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D87A1: mov ebx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D87A7: cmp dword ptr [ebx + ebp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x2B
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D87AC: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D87B0: je 0x587d8819
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x587D87B2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D87B4: mov ecx, dword ptr [ecx + ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x29
        __asm _emit 0x04
        // 0x587D87B8: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D87BC: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x587D87BF: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D87C3: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x587D87C6: add dword ptr [esp + 0x10], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D87CA: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D87CE: mov ecx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D87D4: movzx ecx, word ptr [esi + ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x02
        // 0x587D87D9: movzx ebx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5B
        __asm _emit 0x1E
        // 0x587D87DD: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D87E3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587D87E5: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587D87E8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D87EA: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587D87EC: jl 0x587d8815
        __asm _emit 0x7C
        __asm _emit 0x27
        // 0x587D87EE: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D87F2: cmp eax, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D87F6: jl 0x587d8815
        __asm _emit 0x7C
        __asm _emit 0x1D
        // 0x587D87F8: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D87FC: mov cl, byte ptr [eax + esi + 2]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x30
        __asm _emit 0x02
        // 0x587D8800: xor cl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF1
        __asm _emit 0xAA
        // 0x587D8803: add cl, dl
        __asm _emit 0x02
        __asm _emit 0xCA
        // 0x587D8805: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8809: jne 0x587d8819
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587D880B: mov dword ptr [eax + ebp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8813: jmp 0x587d8819
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587D8815: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8819: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D881D: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x02
        // 0x587D8820: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587D8823: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x587D8826: cmp edi, 0x11a
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D882C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8830: jl 0x587d8660
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8836: pop edi
        __asm _emit 0x5F
        // 0x587D8837: pop esi
        __asm _emit 0x5E
        // 0x587D8838: pop ebp
        __asm _emit 0x5D
        // 0x587D8839: pop ebx
        __asm _emit 0x5B
        // 0x587D883A: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587D883D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
