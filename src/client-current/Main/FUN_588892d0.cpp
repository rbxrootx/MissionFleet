// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588892D0 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_588892d0() {
    __asm {
        // 0x588892D0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588892D3: push ebp
        __asm _emit 0x55
        // 0x588892D4: push esi
        __asm _emit 0x56
        // 0x588892D5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588892D7: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588892DB: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588892DD: push edi
        __asm _emit 0x57
        // 0x588892DE: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588892E0: je 0x588895c5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588892E6: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588892EA: push ecx
        __asm _emit 0x51
        // 0x588892EB: call 0x587950d0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588892F0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588892F2: lea edi, [esi + 0x100]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588892F8: push ebp
        __asm _emit 0x55
        // 0x588892F9: push edi
        __asm _emit 0x57
        // 0x588892FA: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x39
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588892FF: movzx edx, word ptr [esp + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x58889304: movzx eax, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58889309: push edx
        __asm _emit 0x52
        // 0x5888930A: push eax
        __asm _emit 0x50
        // 0x5888930B: push 0x5899fbb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58889310: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58889312: push edi
        __asm _emit 0x57
        // 0x58889313: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58889318: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888931E: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58889321: push edi
        __asm _emit 0x57
        // 0x58889322: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x89
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58889327: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5888932B: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889330: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58889333: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889338: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888933B: je 0x58889352
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5888933D: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58889341: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58889344: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889349: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888934C: jne 0x5888940e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889352: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58889355: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58889358: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888935A: je 0x5888939a
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5888935C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5888935E: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x58889361: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x58889364: ja 0x58889389
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58889366: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58889369: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5888936C: ja 0x58889382
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5888936E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58889370: jge 0x58889377
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58889372: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58889375: jmp 0x58889392
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58889377: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58889379: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5888937B: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x5888937E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58889380: jmp 0x58889392
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58889382: cdq
        __asm _emit 0x99
        // 0x58889383: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58889385: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58889387: jmp 0x58889392
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58889389: cdq
        __asm _emit 0x99
        // 0x5888938A: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5888938D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5888938F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58889392: push eax
        __asm _emit 0x50
        // 0x58889393: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58889395: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x9B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888939A: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888939D: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588893A0: jne 0x5888940e
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x588893A2: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588893A6: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893AB: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588893AE: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893B3: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588893B6: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588893BA: jne 0x588893d7
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588893BC: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588893C4: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893C9: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588893CC: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588893D0: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588893D5: jmp 0x5888940e
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x588893D7: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588893DA: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893DF: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588893E2: jne 0x5888940e
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588893E4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588893E8: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893ED: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588893F0: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588893F5: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588893F8: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588893FC: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889401: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58889405: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888940A: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5888940E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58889412: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889417: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5888941A: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888941F: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58889422: jne 0x588895c5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889428: movzx eax, word ptr [esi + 0xd2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888942F: movzx ecx, word ptr [esi + 0xd0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889436: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58889439: je 0x588895c5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888943F: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889444: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58889448: jne 0x588894eb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888944E: cmp dword ptr [esi + 0xcc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889454: je 0x5888955c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888945A: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889460: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58889463: jne 0x58889470
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58889465: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58889468: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5888946B: jmp 0x58889554
        __asm _emit 0xE9
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889470: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x58889474: jne 0x588894af
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58889476: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58889479: push ebp
        __asm _emit 0x55
        // 0x5888947A: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888947F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58889482: push edi
        __asm _emit 0x57
        // 0x58889483: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58889488: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888948E: push ebp
        __asm _emit 0x55
        // 0x5888948F: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58889494: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888949A: push ebp
        __asm _emit 0x55
        // 0x5888949B: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588894A0: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588894A3: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894AA: jmp 0x58889554
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894AF: cmp cx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0D
        // 0x588894B3: jne 0x58889554
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894B9: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588894BC: push ebp
        __asm _emit 0x55
        // 0x588894BD: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588894C2: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588894C5: push edi
        __asm _emit 0x57
        // 0x588894C6: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588894CB: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894D1: push ebp
        __asm _emit 0x55
        // 0x588894D2: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588894D7: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894DD: push ebp
        __asm _emit 0x55
        // 0x588894DE: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588894E3: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588894E6: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588894E9: jmp 0x58889554
        __asm _emit 0xEB
        __asm _emit 0x69
        // 0x588894EB: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588894EF: jne 0x5888951f
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x588894F1: cmp dword ptr [esi + 0xcc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894F7: je 0x5888955c
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x588894F9: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588894FF: push edi
        __asm _emit 0x57
        // 0x58889500: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889506: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888950B: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889511: push edi
        __asm _emit 0x57
        // 0x58889512: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58889517: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5888951A: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5888951D: jmp 0x58889554
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5888951F: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x58889523: jne 0x58889533
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58889525: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888952B: push edi
        __asm _emit 0x57
        // 0x5888952C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58889531: jmp 0x5888954e
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58889533: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58889536: jne 0x58889554
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58889538: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5888953B: call 0x58793e10
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xA8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58889540: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58889542: jne 0x58889554
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58889544: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58889547: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888954E: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889554: cmp dword ptr [esi + 0xcc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888955A: jne 0x588895c5
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x5888955C: mov cx, word ptr [esi + 0xd0]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889563: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889569: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888956E: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889574: mov dword ptr [esi + 0xcc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888957E: mov word ptr [esi + 0xd2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889585: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58889589: movzx eax, word ptr [esi + 0xd0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889590: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58889593: je 0x588895c5
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58889595: cmp word ptr [esi + 0xd2], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x5888959D: je 0x588895c5
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5888959F: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588895A3: je 0x588895c5
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588895A5: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588895A9: jne 0x588895c5
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588895AB: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588895B1: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x588895B3: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x80
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588895B8: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588895BE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588895C0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588895C3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588895C5: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588895C8: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588895CA: je 0x588895e5
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588895CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588895D0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588895D3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588895D5: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588895D8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588895DB: je 0x588895ec
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588895DD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588895DF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588895E1: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588895E3: jne 0x588895d0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588895E5: pop edi
        __asm _emit 0x5F
        // 0x588895E6: pop esi
        __asm _emit 0x5E
        // 0x588895E7: pop ebp
        __asm _emit 0x5D
        // 0x588895E8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588895EB: ret
        __asm _emit 0xC3
        // 0x588895EC: pop edi
        __asm _emit 0x5F
        // 0x588895ED: pop esi
        __asm _emit 0x5E
        // 0x588895EE: pop ebp
        __asm _emit 0x5D
        // 0x588895EF: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588895F2: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
