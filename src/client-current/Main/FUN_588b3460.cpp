// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B3460 .. +0x29E bytes.
// Source symbol alias: FUN_588b3460.
extern "C" __declspec(naked) void FUN_588b3460() {
    __asm {
        // 0x588B3460: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B3464: push esi
        __asm _emit 0x56
        // 0x588B3465: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B3467: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B346A: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3470: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B3473: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B3477: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B347C: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588B347F: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3484: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588B3487: push edi
        __asm _emit 0x57
        // 0x588B3488: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B348A: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B348E: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3493: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3499: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B349F: mov dword ptr [esi + 0xe4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34A5: mov word ptr [esi + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34AC: mov dword ptr [esi + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34B2: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34B8: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588B34BB: ja 0x588b36f9
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34C1: jmp dword ptr [eax*4 + 0x588b3700]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x37
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B34C8: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B34CA: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34CF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B34D1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B34D6: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B34DA: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34DF: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588B34E2: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34E7: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588B34EA: mov dword ptr [esi + 0xd4], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34F4: mov dword ptr [esi + 0xd8], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B34FE: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B3502: mov eax, 0xffffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B3507: pop edi
        __asm _emit 0x5F
        // 0x588B3508: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B350F: pop esi
        __asm _emit 0x5E
        // 0x588B3510: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3513: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B3515: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588B3517: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B3519: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B351E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B3522: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3527: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B352A: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B352F: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B3532: mov dword ptr [esi + 0xd4], 0xffffff9c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B353C: mov dword ptr [esi + 0xd8], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3546: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B354A: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B354F: pop edi
        __asm _emit 0x5F
        // 0x588B3550: mov word ptr [esi + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3557: pop esi
        __asm _emit 0x5E
        // 0x588B3558: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B355B: push 0xfa
        __asm _emit 0x68
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3560: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588B3562: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B3564: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3569: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B356D: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3572: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588B3575: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B357A: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588B357D: mov dword ptr [esi + 0xd4], 0xffffff9c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B3587: mov dword ptr [esi + 0xd8], 0xfa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3591: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B3595: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B359A: pop edi
        __asm _emit 0x5F
        // 0x588B359B: mov word ptr [esi + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35A2: pop esi
        __asm _emit 0x5E
        // 0x588B35A3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B35A6: push edi
        __asm _emit 0x57
        // 0x588B35A7: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35AC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B35AE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B35B3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B35B7: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35BC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588B35BF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35C4: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35CA: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588B35CD: mov dword ptr [esi + 0xd4], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35D7: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B35DB: mov eax, 0xffffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B35E0: pop edi
        __asm _emit 0x5F
        // 0x588B35E1: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35E8: pop esi
        __asm _emit 0x5E
        // 0x588B35E9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B35EC: push edi
        __asm _emit 0x57
        // 0x588B35ED: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588B35EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B35F1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B35F6: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B35FA: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B35FF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B3602: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3607: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B360D: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B3610: mov dword ptr [esi + 0xd4], 0xffffff9c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B361A: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B361E: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3623: pop edi
        __asm _emit 0x5F
        // 0x588B3624: mov word ptr [esi + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B362B: pop esi
        __asm _emit 0x5E
        // 0x588B362C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B362F: push edi
        __asm _emit 0x57
        // 0x588B3630: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3635: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B3637: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B363C: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B3640: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3645: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588B3648: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B364D: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3653: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588B3656: mov dword ptr [esi + 0xd4], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3660: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B3664: mov edx, 0xffffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B3669: pop edi
        __asm _emit 0x5F
        // 0x588B366A: mov word ptr [esi + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3671: pop esi
        __asm _emit 0x5E
        // 0x588B3672: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3675: push edi
        __asm _emit 0x57
        // 0x588B3676: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588B3678: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B367A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B367F: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B3683: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3688: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588B368B: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3690: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3696: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588B3699: mov dword ptr [esi + 0xd4], 0xffffff9c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B36A3: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B36A7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36AC: pop edi
        __asm _emit 0x5F
        // 0x588B36AD: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36B4: pop esi
        __asm _emit 0x5E
        // 0x588B36B5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B36B8: push edi
        __asm _emit 0x57
        // 0x588B36B9: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36BE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B36C0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xFB
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B36C5: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B36C9: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36CE: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B36D1: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36D6: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B36D9: mov dword ptr [esi + 0xd4], 0x400
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36E3: mov dword ptr [esi + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36E9: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B36ED: mov ecx, 0xffffffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B36F2: mov word ptr [esi + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B36F9: pop edi
        __asm _emit 0x5F
        // 0x588B36FA: pop esi
        __asm _emit 0x5E
        // 0x588B36FB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
