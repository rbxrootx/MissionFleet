// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C568 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5885c568() {
    __asm {
        // 0x5885C568: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C56A: push ebp
        __asm _emit 0x55
        // 0x5885C56B: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C56D: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885C570: push ebx
        __asm _emit 0x53
        // 0x5885C571: push esi
        __asm _emit 0x56
        // 0x5885C572: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C575: lea eax, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C578: push edi
        __asm _emit 0x57
        // 0x5885C579: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C57C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C57E: mov dword ptr [ebp - 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x5885C581: mov dword ptr [ebp - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF8
        // 0x5885C584: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885C587: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C589: cmp al, byte ptr [ebx + 0x588c3ef8]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C58F: je 0x5885c599
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C591: cmp al, byte ptr [ebx + 0x588c3efc]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xFC
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C597: jne 0x5885c5e3
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5885C599: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C59B: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5A0: inc ebx
        __asm _emit 0x43
        // 0x5885C5A1: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C5A3: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x5885C5A6: jne 0x5885c587
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5885C5A8: push eax
        __asm _emit 0x50
        // 0x5885C5A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C5AB: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5B0: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885C5B3: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885C5B6: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885C5B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C5BB: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C5BE: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5C3: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C5C5: cmp al, 0x28
        __asm _emit 0x3C
        __asm _emit 0x28
        // 0x5885C5C7: je 0x5885c5ef
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5885C5C9: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C5CC: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5D1: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C5D3: pop ecx
        __asm _emit 0x59
        // 0x5885C5D4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C5D6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C5D8: pop edx
        __asm _emit 0x5A
        // 0x5885C5D9: cmovne ecx, edx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xCA
        // 0x5885C5DC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5885C5DE: jmp 0x5885c66b
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5E3: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C5E6: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5EB: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C5ED: jmp 0x5885c66a
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x5885C5EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C5F1: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5F6: push esi
        __asm _emit 0x56
        // 0x5885C5F7: push edi
        __asm _emit 0x57
        // 0x5885C5F8: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C5FA: call 0x5885c7ec
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5FF: pop ecx
        __asm _emit 0x59
        // 0x5885C600: pop ecx
        __asm _emit 0x59
        // 0x5885C601: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C603: je 0x5885c614
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885C605: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x5885C608: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C60A: push eax
        __asm _emit 0x50
        // 0x5885C60B: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C610: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5885C612: jmp 0x5885c66a
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x5885C614: push esi
        __asm _emit 0x56
        // 0x5885C615: push edi
        __asm _emit 0x57
        // 0x5885C616: call 0x5885c778
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C61B: pop ecx
        __asm _emit 0x59
        // 0x5885C61C: pop ecx
        __asm _emit 0x59
        // 0x5885C61D: mov cl, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x0F
        // 0x5885C61F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C621: je 0x5885c62f
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5885C623: push ecx
        __asm _emit 0x51
        // 0x5885C624: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C626: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C62B: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5885C62D: jmp 0x5885c66a
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x5885C62F: cmp cl, 0x29
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x29
        // 0x5885C632: je 0x5885c668
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5885C634: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5885C636: je 0x5885c5c9
        __asm _emit 0x74
        __asm _emit 0x91
        // 0x5885C638: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C63A: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885C63C: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885C63E: jbe 0x5885c659
        __asm _emit 0x76
        __asm _emit 0x19
        // 0x5885C640: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C642: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C644: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C646: jbe 0x5885c659
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x5885C648: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C64A: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C64C: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C64E: jbe 0x5885c659
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x5885C650: cmp cl, 0x5f
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x5F
        // 0x5885C653: jne 0x5885c5c9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C659: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C65B: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C660: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C662: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C664: cmp al, 0x29
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x5885C666: jne 0x5885c634
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5885C668: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C66A: pop eax
        __asm _emit 0x58
        // 0x5885C66B: pop edi
        __asm _emit 0x5F
        // 0x5885C66C: pop esi
        __asm _emit 0x5E
        // 0x5885C66D: pop ebx
        __asm _emit 0x5B
        // 0x5885C66E: leave
        __asm _emit 0xC9
        // 0x5885C66F: ret
        __asm _emit 0xC3
    }
}
