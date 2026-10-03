// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588172D0 .. +0x52F bytes.
extern "C" __declspec(naked) void FUN_588172d0() {
    __asm {
        // 0x588172D0: push esi
        __asm _emit 0x56
        // 0x588172D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588172D3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588172D7: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588172D9: je 0x588177f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588172DF: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588172E2: push edi
        __asm _emit 0x57
        // 0x588172E3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588172E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588172E9: je 0x5881730f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588172EB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588172EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588172F0: je 0x58817308
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588172F2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588172F4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588172F6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588172F9: push edi
        __asm _emit 0x57
        // 0x588172FA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588172FC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588172FF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58817302: je 0x5881730f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58817304: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58817306: jne 0x588172f2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58817308: pop edi
        __asm _emit 0x5F
        // 0x58817309: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881730B: pop esi
        __asm _emit 0x5E
        // 0x5881730C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5881730F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58817312: push ebx
        __asm _emit 0x53
        // 0x58817313: push ebp
        __asm _emit 0x55
        // 0x58817314: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817319: ja 0x58817596
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881731F: je 0x5881749d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817325: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881732A: je 0x58817423
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817330: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817335: jne 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881733B: mov edx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817341: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58817345: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x58817349: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5881734B: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5881734D: jne 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817353: add esi, 0x74
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x74
        // 0x58817356: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881735B: mov ebp, 0xffffff
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58817360: mov ebx, 0xcccccc
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0x00
        // 0x58817365: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881736B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5881736E: push ecx
        __asm _emit 0x51
        // 0x5881736F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58817371: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xA1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58817376: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58817378: je 0x588173f5
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x5881737A: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5881737D: mov dword ptr [edx + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x58817380: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58817383: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58817387: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5881738A: jne 0x588173e8
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5881738C: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817391: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58817398: jle 0x588173ae
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5881739A: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588173A1: je 0x588173ae
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588173A3: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588173A9: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588173AC: jmp 0x588173b0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588173AE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588173B0: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588173B5: push eax
        __asm _emit 0x50
        // 0x588173B6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x05
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588173BB: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588173C0: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588173C7: jle 0x588173dd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588173C9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588173D0: je 0x588173dd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588173D2: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588173D8: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588173DB: jmp 0x588173df
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588173DD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588173DF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588173E1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588173E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588173E6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588173E8: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588173EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588173EC: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xA1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588173F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588173F3: jmp 0x58817406
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588173F5: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588173F8: mov dword ptr [ecx + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x60
        // 0x588173FB: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588173FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588173FF: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xA1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58817404: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58817406: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58817409: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xA1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881740E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58817411: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58817414: jne 0x58817365
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881741A: pop ebp
        __asm _emit 0x5D
        // 0x5881741B: pop ebx
        __asm _emit 0x5B
        // 0x5881741C: pop edi
        __asm _emit 0x5F
        // 0x5881741D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881741F: pop esi
        __asm _emit 0x5E
        // 0x58817420: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58817423: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x58817426: sub edi, 0x1b
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x1B
        // 0x58817429: je 0x58817461
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5881742B: sub edi, 6
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x06
        // 0x5881742E: je 0x5881744d
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58817430: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58817433: jne 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817439: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881743F: call 0x587dac20
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x37
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58817444: pop ebp
        __asm _emit 0x5D
        // 0x58817445: pop ebx
        __asm _emit 0x5B
        // 0x58817446: pop edi
        __asm _emit 0x5F
        // 0x58817447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58817449: pop esi
        __asm _emit 0x5E
        // 0x5881744A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5881744D: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817453: call 0x587dad80
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58817458: pop ebp
        __asm _emit 0x5D
        // 0x58817459: pop ebx
        __asm _emit 0x5B
        // 0x5881745A: pop edi
        __asm _emit 0x5F
        // 0x5881745B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881745D: pop esi
        __asm _emit 0x5E
        // 0x5881745E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58817461: mov edx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817467: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5881746B: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5881746F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58817471: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58817473: jne 0x5881748b
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58817475: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881747B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5881747D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58817480: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58817482: pop ebp
        __asm _emit 0x5D
        // 0x58817483: pop ebx
        __asm _emit 0x5B
        // 0x58817484: pop edi
        __asm _emit 0x5F
        // 0x58817485: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58817487: pop esi
        __asm _emit 0x5E
        // 0x58817488: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5881748B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5881748D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58817490: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58817492: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58817494: pop ebp
        __asm _emit 0x5D
        // 0x58817495: pop ebx
        __asm _emit 0x5B
        // 0x58817496: pop edi
        __asm _emit 0x5F
        // 0x58817497: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58817499: pop esi
        __asm _emit 0x5E
        // 0x5881749A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5881749D: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588174A3: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588174A7: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588174AB: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588174AE: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588174B1: jne 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588174B7: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588174BD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588174BF: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588174C2: lea ebp, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x588174C5: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588174C8: push ebx
        __asm _emit 0x53
        // 0x588174C9: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xA0
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588174CE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588174D0: jne 0x588174e2
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588174D2: inc edi
        __asm _emit 0x47
        // 0x588174D3: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588174D6: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x588174D9: jl 0x588174c5
        __asm _emit 0x7C
        __asm _emit 0xEA
        // 0x588174DB: pop ebp
        __asm _emit 0x5D
        // 0x588174DC: pop ebx
        __asm _emit 0x5B
        // 0x588174DD: pop edi
        __asm _emit 0x5F
        // 0x588174DE: pop esi
        __asm _emit 0x5E
        // 0x588174DF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588174E2: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588174E8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588174EC: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588174F0: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588174F3: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588174F6: jne 0x58817505
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588174F8: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588174FE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58817500: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58817503: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58817505: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58817508: mov dword ptr [esi + 0x194], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881750E: jge 0x58817537
        __asm _emit 0x7D
        __asm _emit 0x27
        // 0x58817510: mov edi, dword ptr [esi + edi*4 + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817517: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5881751A: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5881751D: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x58817520: push ecx
        __asm _emit 0x51
        // 0x58817521: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817527: sub edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881752D: push edx
        __asm _emit 0x52
        // 0x5881752E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xBD
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58817533: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58817535: jmp 0x58817563
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x58817537: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5881753A: jle 0x5881756e
        __asm _emit 0x7E
        __asm _emit 0x32
        // 0x5881753C: mov edi, dword ptr [esi + edi*4 + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817543: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58817546: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58817549: sub eax, 0xb4
        __asm _emit 0x2D
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881754E: sub ecx, 0x96
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817554: push eax
        __asm _emit 0x50
        // 0x58817555: push ecx
        __asm _emit 0x51
        // 0x58817556: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881755C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xBD
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58817561: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58817563: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817569: call 0x58819a70
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881756E: mov esi, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817574: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58817577: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5881757A: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5881757D: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58817580: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817586: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58817588: call 0x587babc0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x36
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5881758D: pop ebp
        __asm _emit 0x5D
        // 0x5881758E: pop ebx
        __asm _emit 0x5B
        // 0x5881758F: pop edi
        __asm _emit 0x5F
        // 0x58817590: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58817592: pop esi
        __asm _emit 0x5E
        // 0x58817593: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58817596: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881759B: jne 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175A1: movzx eax, word ptr [edi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x0A
        // 0x588175A5: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588175A8: jle 0x588176b6
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175AE: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588175B4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588175B7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588175BA: push edi
        __asm _emit 0x57
        // 0x588175BB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x9F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588175C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588175C2: je 0x588175f5
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588175C4: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175CA: cmp dword ptr [eax + 0xcd0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175D1: je 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175D7: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175DC: cmp word ptr [eax + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175E3: jae 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175E9: inc word ptr [eax + 0x88]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175F0: jmp 0x58817779
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588175F5: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588175F8: push edi
        __asm _emit 0x57
        // 0x588175F9: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x9F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588175FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58817600: je 0x58817633
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58817602: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817608: cmp dword ptr [eax + 0xcd4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881760F: je 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817615: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881761A: cmp word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817621: jae 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817627: inc word ptr [eax + 0x8a]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881762E: jmp 0x58817779
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817633: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58817636: push edi
        __asm _emit 0x57
        // 0x58817637: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x9F
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881763C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881763E: je 0x58817671
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58817640: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817646: cmp dword ptr [eax + 0xcdc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881764D: je 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817653: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817658: cmp word ptr [eax + 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881765F: jae 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817665: inc word ptr [eax + 0x8e]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881766C: jmp 0x58817779
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817671: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817677: push edi
        __asm _emit 0x57
        // 0x58817678: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x9E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881767D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881767F: je 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817685: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881768B: cmp dword ptr [eax + 0xcd8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817692: je 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817698: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881769D: cmp word ptr [eax + 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176A4: jae 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176AA: inc word ptr [eax + 0x8c]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176B1: jmp 0x58817779
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176B6: jge 0x588177ef
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176BC: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588176C2: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588176C5: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588176C8: push edi
        __asm _emit 0x57
        // 0x588176C9: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x9E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588176CE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588176D0: je 0x588176f7
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588176D2: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176D8: cmp word ptr [eax + 0x88], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176E0: jbe 0x58817780
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176E6: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176EB: add word ptr [eax + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176F2: jmp 0x58817779
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588176F7: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588176FA: push edi
        __asm _emit 0x57
        // 0x588176FB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x9E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58817700: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58817702: je 0x58817722
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58817704: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881770A: cmp word ptr [eax + 0x8a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817712: jbe 0x58817780
        __asm _emit 0x76
        __asm _emit 0x6C
        // 0x58817714: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817719: add word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817720: jmp 0x58817779
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x58817722: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58817725: push edi
        __asm _emit 0x57
        // 0x58817726: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x9E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881772B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881772D: je 0x5881774d
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5881772F: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817735: cmp word ptr [eax + 0x8e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881773D: jbe 0x58817780
        __asm _emit 0x76
        __asm _emit 0x41
        // 0x5881773F: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817744: add word ptr [eax + 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881774B: jmp 0x58817779
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5881774D: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817753: push edi
        __asm _emit 0x57
        // 0x58817754: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x9D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58817759: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881775B: je 0x58817780
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5881775D: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817763: cmp word ptr [eax + 0x8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881776B: jbe 0x58817780
        __asm _emit 0x76
        __asm _emit 0x13
        // 0x5881776D: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817772: add word ptr [eax + 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817779: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881777B: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58817780: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817785: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881778A: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817790: jle 0x588177a6
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58817792: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817799: je 0x588177a6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5881779B: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588177A1: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588177A4: jmp 0x588177a8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588177A6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588177A8: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588177AE: push edx
        __asm _emit 0x52
        // 0x588177AF: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588177B4: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588177B9: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588177BF: jle 0x588177e5
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588177C1: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588177C8: je 0x588177e5
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588177CA: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588177D0: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588177D3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588177D5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588177D8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588177DA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588177DC: pop ebp
        __asm _emit 0x5D
        // 0x588177DD: pop ebx
        __asm _emit 0x5B
        // 0x588177DE: pop edi
        __asm _emit 0x5F
        // 0x588177DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588177E1: pop esi
        __asm _emit 0x5E
        // 0x588177E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588177E5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588177E7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588177E9: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588177EC: push ecx
        __asm _emit 0x51
        // 0x588177ED: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588177EF: pop ebp
        __asm _emit 0x5D
        // 0x588177F0: pop ebx
        __asm _emit 0x5B
        // 0x588177F1: pop edi
        __asm _emit 0x5F
        // 0x588177F2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588177F4: pop esi
        __asm _emit 0x5E
        // 0x588177F5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588177F8: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588177FB: pop esi
        __asm _emit 0x5E
        // 0x588177FC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
