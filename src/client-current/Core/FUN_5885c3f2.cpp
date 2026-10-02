// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C3F2 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_5885c3f2() {
    __asm {
        // 0x5885C3F2: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C3F4: push ebp
        __asm _emit 0x55
        // 0x5885C3F5: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C3F7: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885C3FA: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C3FD: lea ecx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5885C400: push ebx
        __asm _emit 0x53
        // 0x5885C401: push esi
        __asm _emit 0x56
        // 0x5885C402: push edi
        __asm _emit 0x57
        // 0x5885C403: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885C406: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885C408: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C40B: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x5885C40D: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885C410: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885C413: mov al, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x00
        // 0x5885C415: cmp al, byte ptr [ebx + 0x588c3ee0]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C41B: je 0x5885c425
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C41D: cmp al, byte ptr [ebx + 0x588c3ee4]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C423: jne 0x5885c48a
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5885C425: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C427: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C42C: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C42E: inc ebx
        __asm _emit 0x43
        // 0x5885C42F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C432: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5885C434: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x5885C437: jne 0x5885c413
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x5885C439: push ecx
        __asm _emit 0x51
        // 0x5885C43A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C43C: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C441: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5885C444: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5885C447: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885C44A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C44C: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C44F: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C454: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x5885C457: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x5885C459: cmp al, byte ptr [esi + 0x588c3ee8]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C45F: je 0x5885c469
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C461: cmp al, byte ptr [esi + 0x588c3ef0]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C467: jne 0x5885c496
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5885C469: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C46B: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C470: inc esi
        __asm _emit 0x46
        // 0x5885C471: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x5885C473: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x5885C476: jne 0x5885c459
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x5885C478: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885C47A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C47C: push edx
        __asm _emit 0x52
        // 0x5885C47D: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C482: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885C484: pop eax
        __asm _emit 0x58
        // 0x5885C485: pop edi
        __asm _emit 0x5F
        // 0x5885C486: pop esi
        __asm _emit 0x5E
        // 0x5885C487: pop ebx
        __asm _emit 0x5B
        // 0x5885C488: leave
        __asm _emit 0xC9
        // 0x5885C489: ret
        __asm _emit 0xC3
        // 0x5885C48A: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C48D: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C492: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C494: jmp 0x5885c484
        __asm _emit 0xEB
        __asm _emit 0xEE
        // 0x5885C496: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C499: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C49E: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5885C4A1: xor eax, 1
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x01
        // 0x5885C4A4: lea eax, [eax*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C4AB: jmp 0x5885c485
        __asm _emit 0xEB
        __asm _emit 0xD8
    }
}
