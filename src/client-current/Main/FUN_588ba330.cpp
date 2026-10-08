// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 742 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ba330.

// Ghidra body range 0x588BA330..0x588BA616; 742 mapped bytes.
extern "C" __declspec(naked) void FUN_588ba330_segment_00() {
    __asm {
        // 0x588BA330: push ebx
        __asm _emit 0x53
        // 0x588BA331: push esi
        __asm _emit 0x56
        // 0x588BA332: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BA334: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BA337: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA33A: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588BA33D: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BA340: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588BA343: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA348: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BA34C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BA34F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588BA351: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BA355: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BA358: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BA35C: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588BA35F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BA363: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588BA366: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BA36A: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA370: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BA374: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA37A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BA37E: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BA381: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BA385: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA38B: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA391: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588BA395: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BA399: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA39F: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x588BA3A2: mov dword ptr [esi + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3A8: mov dword ptr [esi + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3AE: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3B3: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588BA3B6: ja 0x588ba5eb
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x2F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3BC: movzx eax, byte ptr [eax + 0x588ba630]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0xA6
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588BA3C3: push edi
        __asm _emit 0x57
        // 0x588BA3C4: jmp dword ptr [eax*4 + 0x588ba618]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xA6
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588BA3CB: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588BA3D0: je 0x588ba428
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x588BA3D2: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588BA3D5: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3DC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588BA3DF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BA3E2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3E8: sub edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x15
        // 0x588BA3EB: push edx
        __asm _emit 0x52
        // 0x588BA3EC: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x588BA3EF: push eax
        __asm _emit 0x50
        // 0x588BA3F0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA3F5: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA3FB: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA400: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA404: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA407: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA40A: add ecx, 0x15
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x15
        // 0x588BA40D: push ecx
        __asm _emit 0x51
        // 0x588BA40E: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA414: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588BA417: push edx
        __asm _emit 0x52
        // 0x588BA418: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA41D: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA423: jmp 0x588ba5e6
        __asm _emit 0xE9
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA428: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BA42B: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588BA42E: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA431: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA434: push ecx
        __asm _emit 0x51
        // 0x588BA435: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA43B: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588BA43E: push edx
        __asm _emit 0x52
        // 0x588BA43F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA444: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA44A: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588BA44F: jmp 0x588ba5ea
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA454: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BA457: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588BA45A: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA45D: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA460: push ecx
        __asm _emit 0x51
        // 0x588BA461: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA464: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588BA467: push edx
        __asm _emit 0x52
        // 0x588BA468: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA46D: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BA470: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588BA475: jmp 0x588ba5ea
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA47A: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588BA47D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588BA480: sub eax, 0x15
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x15
        // 0x588BA483: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x588BA486: push eax
        __asm _emit 0x50
        // 0x588BA487: push ecx
        __asm _emit 0x51
        // 0x588BA488: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA48B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA490: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BA493: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA498: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA49C: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588BA49F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BA4A2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA4A8: add edx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1E
        // 0x588BA4AB: push edx
        __asm _emit 0x52
        // 0x588BA4AC: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x588BA4AF: push eax
        __asm _emit 0x50
        // 0x588BA4B0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA4B5: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA4BB: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA4BF: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588BA4C4: je 0x588ba4e9
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588BA4C6: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA4C9: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA4CC: add ecx, 0x47
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x47
        // 0x588BA4CF: push ecx
        __asm _emit 0x51
        // 0x588BA4D0: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA4D6: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588BA4D9: push edx
        __asm _emit 0x52
        // 0x588BA4DA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA4DF: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA4E5: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA4E9: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BA4EC: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588BA4EF: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA4F2: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA4F5: sub ecx, 0x24
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x24
        // 0x588BA4F8: push ecx
        __asm _emit 0x51
        // 0x588BA4F9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588BA4FC: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x588BA4FF: push edx
        __asm _emit 0x52
        // 0x588BA500: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA505: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BA508: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA50C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588BA50F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588BA512: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x588BA515: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x588BA518: push eax
        __asm _emit 0x50
        // 0x588BA519: push ecx
        __asm _emit 0x51
        // 0x588BA51A: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BA51D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA522: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BA525: jmp 0x588ba5e6
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA52A: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588BA52D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BA530: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA533: sub edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x15
        // 0x588BA536: push edx
        __asm _emit 0x52
        // 0x588BA537: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x588BA53A: push eax
        __asm _emit 0x50
        // 0x588BA53B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA540: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BA543: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA548: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA54C: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BA54F: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588BA552: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1E
        // 0x588BA555: push ecx
        __asm _emit 0x51
        // 0x588BA556: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA55C: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588BA55F: push edx
        __asm _emit 0x52
        // 0x588BA560: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA565: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA56B: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA56F: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588BA574: je 0x588ba599
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588BA576: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588BA579: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588BA57C: add eax, 0x47
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x47
        // 0x588BA57F: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x588BA582: push eax
        __asm _emit 0x50
        // 0x588BA583: push ecx
        __asm _emit 0x51
        // 0x588BA584: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA58A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA58F: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA595: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA599: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588BA59C: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588BA59F: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BA5A2: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA5A6: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588BA5A9: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588BA5AC: sub eax, 0x15
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x15
        // 0x588BA5AF: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x588BA5B2: push eax
        __asm _emit 0x50
        // 0x588BA5B3: push ecx
        __asm _emit 0x51
        // 0x588BA5B4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588BA5B7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA5BC: jmp 0x588ba5ea
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x588BA5BE: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588BA5C1: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BA5C4: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BA5C7: push edx
        __asm _emit 0x52
        // 0x588BA5C8: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x588BA5CB: push eax
        __asm _emit 0x50
        // 0x588BA5CC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA5D1: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BA5D4: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA5D9: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA5DD: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588BA5E0: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588BA5E3: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588BA5E6: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588BA5EA: pop edi
        __asm _emit 0x5F
        // 0x588BA5EB: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588BA5F0: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x588BA5F4: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588BA5F9: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588BA5FD: mov eax, 0xe1ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA602: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588BA605: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA60A: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588BA60D: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588BA611: pop esi
        __asm _emit 0x5E
        // 0x588BA612: pop ebx
        __asm _emit 0x5B
        // 0x588BA613: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
