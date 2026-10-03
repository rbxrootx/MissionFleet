// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797F10 .. +0x4D2 bytes.
extern "C" __declspec(naked) void FUN_58797f10() {
    __asm {
        // 0x58797F10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58797F13: push ebx
        __asm _emit 0x53
        // 0x58797F14: push ebp
        __asm _emit 0x55
        // 0x58797F15: push esi
        __asm _emit 0x56
        // 0x58797F16: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797F18: cmp word ptr [esi + 0x26c], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x58797F20: push edi
        __asm _emit 0x57
        // 0x58797F21: jne 0x5879812e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F27: mov ebx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F2D: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58797F30: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F36: mov eax, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58797F39: mov edi, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F3F: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F45: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58797F48: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58797F4C: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F52: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F58: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58797F5A: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58797F5E: jle 0x58797f66
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58797F60: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58797F62: sub ebp, edi
        __asm _emit 0x2B
        __asm _emit 0xEF
        // 0x58797F64: jmp 0x58797f68
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58797F66: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58797F68: movzx edi, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x79
        __asm _emit 0x1E
        // 0x58797F6C: imul edi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFD
        // 0x58797F6F: mov ebp, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F75: cmp ebp, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58797F77: jne 0x58797fb7
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58797F79: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F7E: xor dx, word ptr [esi + 0x25c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F85: sub ax, dx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58797F88: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F8D: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58797F90: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797F97: cwde
        __asm _emit 0x98
        // 0x58797F98: jle 0x58797fa2
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58797F9A: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58797F9C: imul eax, dword ptr [ebx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58797FA0: jmp 0x58797fdf
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x58797FA2: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FA8: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FAD: imul eax, dword ptr [esi + edx*4 + 0x27c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FB5: jmp 0x58797fdf
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58797FB7: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FBC: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FC3: cwde
        __asm _emit 0x98
        // 0x58797FC4: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FC9: imul eax, dword ptr [ebx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58797FCD: mov ebx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FD3: mov ebx, dword ptr [esi + ebx*4 + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FDA: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x58797FDD: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58797FDF: mov dl, byte ptr [ecx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FE5: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58797FE9: movsx eax, word ptr [esi + 0x278]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FF0: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58797FF3: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797FF8: imul eax, dword ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58797FFC: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58798000: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58798004: je 0x5879800c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58798006: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5879800A: jne 0x58798016
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5879800C: mov dword ptr [esi + 0x254], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798016: mov ebx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879801C: mov ebp, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798022: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x58798024: add ebx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58798028: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5879802A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5879802C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58798030: mov al, byte ptr [ecx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798036: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58798038: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5879803C: mov edi, 0x7fffffff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58798041: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58798045: je 0x5879804d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58798047: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5879804B: jne 0x58798052
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5879804D: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798052: movzx eax, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x1E
        // 0x58798056: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58798059: je 0x58798077
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5879805B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5879805E: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58798062: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58798064: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58798068: cdq
        __asm _emit 0x99
        // 0x58798069: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5879806B: add eax, dword ptr [esi + 0x260]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798071: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58798073: jge 0x58798077
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58798075: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58798077: mov ebp, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5879807A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5879807C: je 0x58798092
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5879807E: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798084: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58798086: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x58798088: add eax, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879808C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5879808E: jge 0x58798092
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58798090: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58798092: movzx eax, word ptr [ecx + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x58798096: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879809B: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5879809F: jne 0x587980d0
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587980A1: cmp word ptr [ecx + 0x22], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0x22
        // 0x587980A5: jne 0x587980ac
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587980A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587980A9: push ebp
        __asm _emit 0x55
        // 0x587980AA: jmp 0x587980bd
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587980AC: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587980B0: jne 0x587980d0
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587980B2: cmp word ptr [ecx + 0x22], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x08
        // 0x587980B7: jne 0x587980d0
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587980B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587980BB: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587980BD: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587980C3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587980C5: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587980CA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587980CC: jge 0x587980d0
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587980CE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587980D0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587980D2: jge 0x587980d8
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587980D4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587980D6: jmp 0x587980e5
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x587980D8: cmp edi, 0xff
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587980DE: jle 0x587980e5
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587980E0: mov edi, 0xff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587980E5: cmp dword ptr [esi + 0x2cc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587980EB: je 0x58798103
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587980ED: cmp word ptr [esi + 0x26c], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x587980F5: jne 0x58798103
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587980F7: mov edi, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587980FD: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798103: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798109: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879810B: mov dword ptr [ecx + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x74
        // 0x5879810E: mov ecx, 0xee
        __asm _emit 0xB9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798113: mov edx, 0xeeeeee
        __asm _emit 0xBA
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0x00
        // 0x58798118: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5879811A: jl 0x5879833d
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798120: mov edi, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798126: mov dword ptr [edi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x58798129: jmp 0x58798348
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879812E: mov edi, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798134: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58798137: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879813D: mov edx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798143: mov ebx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58798146: mov ebp, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879814C: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x5879814F: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58798151: jle 0x58798157
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58798153: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x58798155: jmp 0x58798159
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58798157: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58798159: movzx ebp, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x69
        __asm _emit 0x1E
        // 0x5879815D: mov ax, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798164: imul ebp, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEA
        // 0x58798167: mov edx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879816D: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x5879816F: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58798173: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798178: jne 0x587981b3
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x5879817A: xor dx, word ptr [esi + 0x25c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798181: sub ax, dx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58798184: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798189: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5879818C: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798193: cwde
        __asm _emit 0x98
        // 0x58798194: jle 0x5879819e
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58798196: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58798198: imul eax, dword ptr [edi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5879819C: jmp 0x587981e3
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x5879819E: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981A4: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981A9: imul eax, dword ptr [esi + edx*4 + 0x27c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981B1: jmp 0x587981e3
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x587981B3: mov ebp, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981B9: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587981BC: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981C2: mov word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981C9: cwde
        __asm _emit 0x98
        // 0x587981CA: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981D0: imul ebp, dword ptr [esi + edx*4 + 0x27c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xAC
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981D8: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981DD: imul eax, dword ptr [edi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x587981E1: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587981E3: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587981E7: mov al, byte ptr [ecx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587981ED: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587981EF: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587981F3: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587981F7: je 0x587981ff
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587981F9: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587981FD: jne 0x58798209
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587981FF: mov dword ptr [esi + 0x254], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798209: mov ebp, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879820F: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58798211: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58798213: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58798217: mov eax, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879821D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5879821F: sub edx, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58798223: mov edi, 0x7fffffff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58798228: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879822C: mov dl, byte ptr [ecx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798232: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58798235: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58798239: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5879823D: je 0x58798245
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879823F: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58798243: jne 0x5879824a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58798245: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879824A: movzx edx, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x1E
        // 0x5879824E: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58798251: je 0x58798265
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58798253: movzx ebx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDA
        // 0x58798256: cdq
        __asm _emit 0x99
        // 0x58798257: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58798259: add eax, dword ptr [esi + 0x260]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879825F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58798261: jge 0x58798265
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58798263: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58798265: mov ebx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58798268: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5879826A: je 0x58798278
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5879826C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5879826E: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58798270: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58798272: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58798274: jge 0x58798278
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58798276: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58798278: movzx eax, word ptr [ecx + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x5879827C: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798281: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58798285: jne 0x587982b6
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58798287: cmp word ptr [ecx + 0x22], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0x22
        // 0x5879828B: jne 0x58798292
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5879828D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879828F: push ebp
        __asm _emit 0x55
        // 0x58798290: jmp 0x587982a3
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58798292: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58798296: jne 0x587982b6
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58798298: cmp word ptr [ecx + 0x22], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x08
        // 0x5879829D: jne 0x587982b6
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5879829F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587982A1: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587982A3: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587982A9: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587982AB: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x82
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587982B0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587982B2: jge 0x587982b6
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587982B4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587982B6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587982B8: jge 0x587982be
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587982BA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587982BC: jmp 0x587982cb
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x587982BE: cmp edi, 0xff
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982C4: jle 0x587982cb
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x587982C6: mov edi, 0xff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982CB: cmp dword ptr [esi + 0x2cc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982D1: je 0x587982e9
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587982D3: cmp word ptr [esi + 0x26c], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x587982DB: jne 0x587982e9
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587982DD: mov edi, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982E3: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982E9: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587982EF: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587982F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587982F4: jle 0x58798317
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x587982F6: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587982FB: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58798300: cdq
        __asm _emit 0x99
        // 0x58798301: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58798303: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798309: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879830F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58798311: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58798313: jg 0x58798317
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x58798315: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58798317: mov edx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879831D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879831F: cmp dword ptr [esp + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58798323: mov dword ptr [edx + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x74
        // 0x58798326: mov ecx, 0xee
        __asm _emit 0xB9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879832B: mov edx, 0xeeeeee
        __asm _emit 0xBA
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0xEE
        __asm _emit 0x00
        // 0x58798330: jl 0x5879833d
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x58798332: mov edi, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798338: mov dword ptr [edi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x5879833B: jmp 0x58798348
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5879833D: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798343: mov dword ptr [eax + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x58798346: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58798348: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5879834D: jl 0x5879835a
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x5879834F: mov edi, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798355: mov dword ptr [edi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x58798358: jmp 0x58798368
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5879835A: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798360: mov dword ptr [eax + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x58798363: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798368: mov edi, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5879836E: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58798374: cmp dword ptr [esp + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58798378: jg 0x58798385
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5879837A: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798380: mov dword ptr [ecx + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x58798383: jmp 0x5879838e
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58798385: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879838B: mov dword ptr [edx + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x5879838E: movzx ecx, word ptr [esi + 0x278]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798395: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58798398: jge 0x587983ad
        __asm _emit 0x7D
        __asm _emit 0x13
        // 0x5879839A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879839C: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983A2: pop edi
        __asm _emit 0x5F
        // 0x587983A3: pop esi
        __asm _emit 0x5E
        // 0x587983A4: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587983A7: pop ebp
        __asm _emit 0x5D
        // 0x587983A8: pop ebx
        __asm _emit 0x5B
        // 0x587983A9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587983AC: ret
        __asm _emit 0xC3
        // 0x587983AD: jne 0x587983c9
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587983AF: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983B5: pop edi
        __asm _emit 0x5F
        // 0x587983B6: pop esi
        __asm _emit 0x5E
        // 0x587983B7: pop ebp
        __asm _emit 0x5D
        // 0x587983B8: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983BD: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983C4: pop ebx
        __asm _emit 0x5B
        // 0x587983C5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587983C8: ret
        __asm _emit 0xC3
        // 0x587983C9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587983CB: je 0x5879839c
        __asm _emit 0x74
        __asm _emit 0xCF
        // 0x587983CD: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983D3: pop edi
        __asm _emit 0x5F
        // 0x587983D4: pop esi
        __asm _emit 0x5E
        // 0x587983D5: pop ebp
        __asm _emit 0x5D
        // 0x587983D6: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587983DD: pop ebx
        __asm _emit 0x5B
        // 0x587983DE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587983E1: ret
        __asm _emit 0xC3
    }
}
