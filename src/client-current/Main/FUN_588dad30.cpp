// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 720 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dad30.

// Ghidra body range 0x588DAD30..0x588DB000; 720 mapped bytes.
extern "C" __declspec(naked) void FUN_588dad30_segment_00() {
    __asm {
        // 0x588DAD30: push ebp
        __asm _emit 0x55
        // 0x588DAD31: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588DAD33: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588DAD36: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x588DAD39: push ebx
        __asm _emit 0x53
        // 0x588DAD3A: push ebp
        __asm _emit 0x55
        // 0x588DAD3B: push esi
        __asm _emit 0x56
        // 0x588DAD3C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DAD3E: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAD44: movzx eax, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x06
        // 0x588DAD48: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x588DAD4B: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x588DAD4E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588DAD50: and edx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588DAD56: push edi
        __asm _emit 0x57
        // 0x588DAD57: jns 0x588dad5e
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588DAD59: dec edx
        __asm _emit 0x4A
        // 0x588DAD5A: or edx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFE
        // 0x588DAD5D: inc edx
        __asm _emit 0x42
        // 0x588DAD5E: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x588DAD60: sbb edx, edx
        __asm _emit 0x1B
        __asm _emit 0xD2
        // 0x588DAD62: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x588DAD64: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588DAD66: mov dword ptr [esi + 0xac], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAD6C: movzx eax, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x06
        // 0x588DAD70: shr eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x588DAD73: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x588DAD76: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DAD78: and ecx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588DAD7E: jns 0x588dad85
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588DAD80: dec ecx
        __asm _emit 0x49
        // 0x588DAD81: or ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFE
        // 0x588DAD84: inc ecx
        __asm _emit 0x41
        // 0x588DAD85: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588DAD87: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x588DAD89: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588DAD8B: lea ebp, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588DAD8E: lea eax, [ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAD95: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588DAD97: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588DAD99: mov dword ptr [esi + 0xb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAD9F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DADA1: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADA7: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADAD: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588DADAF: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588DADB1: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADB7: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADBD: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADC3: mov dword ptr [esi + 0xac], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADC9: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588DADCB: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588DADCE: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588DADD0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DADD2: push edx
        __asm _emit 0x52
        // 0x588DADD3: mov dword ptr [esi + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADD9: mov dword ptr [esi + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADDF: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADE5: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADEB: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DADF0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588DADF2: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DADF8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DADFA: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588DADFD: push ecx
        __asm _emit 0x51
        // 0x588DADFE: push edi
        __asm _emit 0x57
        // 0x588DADFF: push ebx
        __asm _emit 0x53
        // 0x588DAE00: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DAE04: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x1E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DAE09: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE0F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588DAE11: sub eax, dword ptr [esi + 0xac]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE17: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588DAE1A: cdq
        __asm _emit 0x99
        // 0x588DAE1B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DAE1D: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588DAE1F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DAE21: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588DAE23: jle 0x588dae53
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x588DAE25: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DAE27: cmp dword ptr [esi + 0xac], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE2D: jle 0x588dae4a
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588DAE2F: nop
        __asm _emit 0x90
        // 0x588DAE30: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE36: imul edi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFA
        // 0x588DAE39: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x588DAE3B: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588DAE3D: inc ecx
        __asm _emit 0x41
        // 0x588DAE3E: mov byte ptr [edi + ebx], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x01
        // 0x588DAE42: cmp ecx, dword ptr [esi + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE48: jl 0x588dae30
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x588DAE4A: inc edx
        __asm _emit 0x42
        // 0x588DAE4B: cmp edx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE51: jl 0x588dae25
        __asm _emit 0x7C
        __asm _emit 0xD2
        // 0x588DAE53: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE59: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE61: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DAE65: mov dword ptr [esp + 0x28], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE6D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588DAE70: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE76: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588DAE78: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588DAE7B: push edx
        __asm _emit 0x52
        // 0x588DAE7C: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DAE81: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588DAE83: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAE89: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DAE8B: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588DAE8E: push edx
        __asm _emit 0x52
        // 0x588DAE8F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DAE91: push eax
        __asm _emit 0x50
        // 0x588DAE92: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x1D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DAE97: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588DAE9A: cmp dword ptr [esi + 0xb0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAEA1: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAEA9: jle 0x588daf98
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAEAF: lea eax, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x588DAEB3: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588DAEB5: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588DAEB9: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DAEBD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DAEBF: cmp dword ptr [esi + 0xb0], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAEC5: jle 0x588daf7a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAECB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DAECD: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAED3: imul eax, dword ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DAED8: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DAEDC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588DAEDE: cmp byte ptr [eax + ecx], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DAEE2: je 0x588daf62
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x588DAEE4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DAEE8: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DAEEC: push eax
        __asm _emit 0x50
        // 0x588DAEED: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DAEF1: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588DAEF5: push ecx
        __asm _emit 0x51
        // 0x588DAEF6: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588DAEFA: push edx
        __asm _emit 0x52
        // 0x588DAEFB: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588DAEFF: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588DAF04: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588DAF08: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588DAF0D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588DAF0F: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588DAF12: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588DAF14: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588DAF17: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588DAF19: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588DAF1D: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588DAF22: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DAF24: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588DAF27: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DAF29: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DAF2C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588DAF2E: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588DAF30: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588DAF32: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DAF34: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588DAF37: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588DAF3B: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DAF3F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DAF41: jl 0x588daf62
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x588DAF43: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAF49: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588DAF4B: jge 0x588daf62
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x588DAF4D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DAF4F: jl 0x588daf62
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588DAF51: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588DAF53: jge 0x588daf62
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588DAF55: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588DAF58: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DAF5C: add edx, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x10
        // 0x588DAF5E: mov byte ptr [edx + ecx], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x01
        // 0x588DAF62: inc ebx
        __asm _emit 0x43
        // 0x588DAF63: sub edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588DAF66: cmp ebx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAF6C: jl 0x588daecd
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DAF72: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DAF76: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588DAF7A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DAF7E: sub dword ptr [esp + 0x18], 0xa
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x0A
        // 0x588DAF83: inc ecx
        __asm _emit 0x41
        // 0x588DAF84: cmp ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAF8A: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DAF8E: jl 0x588daebd
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DAF94: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DAF98: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DAF9A: cmp dword ptr [esi + 0xb0], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFA0: jle 0x588dafe3
        __asm _emit 0x7E
        __asm _emit 0x41
        // 0x588DAFA2: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFA7: cmp dword ptr [esi + 0xb0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFAD: jle 0x588dafda
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x588DAFAF: nop
        __asm _emit 0x90
        // 0x588DAFB0: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFB6: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588DAFB9: add eax, dword ptr [edi]
        __asm _emit 0x03
        __asm _emit 0x07
        // 0x588DAFBB: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DAFBD: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588DAFC0: jne 0x588dafd1
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588DAFC2: cmp byte ptr [eax - 1], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x588DAFC6: jne 0x588dafd1
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588DAFC8: cmp byte ptr [eax + 1], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x01
        // 0x588DAFCC: jne 0x588dafd1
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588DAFCE: mov byte ptr [eax], 1
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588DAFD1: inc ecx
        __asm _emit 0x41
        // 0x588DAFD2: cmp ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFD8: jl 0x588dafb0
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x588DAFDA: inc edx
        __asm _emit 0x42
        // 0x588DAFDB: cmp edx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DAFE1: jl 0x588dafa2
        __asm _emit 0x7C
        __asm _emit 0xBF
        // 0x588DAFE3: add dword ptr [esp + 0x1c], 0x64
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x64
        // 0x588DAFE8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DAFEB: sub dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588DAFF0: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DAFF4: jne 0x588dae70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DAFFA: push ebx
        __asm _emit 0x53
        // 0x588DAFFB: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x00
    }
}
