// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885BB18 .. +0x46D bytes.
extern "C" __declspec(naked) void FUN_5885bb18() {
    __asm {
        // 0x5885BB18: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885BB1A: push ebp
        __asm _emit 0x55
        // 0x5885BB1B: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885BB1D: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5885BB20: push ebx
        __asm _emit 0x53
        // 0x5885BB21: push esi
        __asm _emit 0x56
        // 0x5885BB22: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885BB25: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BB27: push edi
        __asm _emit 0x57
        // 0x5885BB28: call 0x58861412
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB2D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885BB2F: je 0x5885bd81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB35: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885BB38: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885BB3B: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885BB3E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BB40: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885BB43: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB48: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885BB4B: lea ecx, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BB4E: mov dword ptr [ebp - 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885BB51: lea ecx, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5885BB54: mov dword ptr [ebp - 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885BB57: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xDC
        // 0x5885BB5A: jmp 0x5885bb63
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5885BB5C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BB5E: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB63: push edi
        __asm _emit 0x57
        // 0x5885BB64: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BB67: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5885BB6A: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885BB6C: push eax
        __asm _emit 0x50
        // 0x5885BB6D: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BB72: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885BB75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BB77: jne 0x5885bb5c
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x5885BB79: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885BB7C: mov cl, byte ptr [ebp - 7]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BB7F: add edx, 0x308
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB85: cmp cl, 0x2d
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x2D
        // 0x5885BB88: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5885BB8B: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5885BB8E: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        // 0x5885BB90: je 0x5885bb97
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885BB92: cmp cl, 0x2b
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x2B
        // 0x5885BB95: jne 0x5885bba3
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885BB97: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BB99: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BB9E: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BBA0: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BBA3: cmp cl, 0x49
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x49
        // 0x5885BBA6: je 0x5885bf73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBAC: cmp cl, 0x69
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x69
        // 0x5885BBAF: je 0x5885bf73
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBB5: cmp cl, 0x4e
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x4E
        // 0x5885BBB8: je 0x5885bf5b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBBE: cmp cl, 0x6e
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x6E
        // 0x5885BBC1: je 0x5885bf5b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BBC9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885BBCB: inc eax
        __asm _emit 0x40
        // 0x5885BBCC: mov byte ptr [ebp - 1], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFF
        // 0x5885BBCF: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885BBD2: jne 0x5885bc1a
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x5885BBD4: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5885BBD7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BBD9: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5885BBDC: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885BBDF: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBE4: mov byte ptr [ebp - 0x14], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885BBE7: cmp al, 0x78
        __asm _emit 0x3C
        __asm _emit 0x78
        // 0x5885BBE9: je 0x5885bbfe
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885BBEB: cmp al, 0x58
        __asm _emit 0x3C
        __asm _emit 0x58
        // 0x5885BBED: je 0x5885bbfe
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885BBEF: push dword ptr [ebp - 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5885BBF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BBF4: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BBF9: mov cl, byte ptr [ebp - 7]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BBFC: jmp 0x5885bc17
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x5885BBFE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BC00: mov byte ptr [ebp - 1], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5885BC04: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC09: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BC0B: mov dword ptr [ebp - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x5885BC0E: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885BC11: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BC14: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885BC17: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BC19: inc eax
        __asm _emit 0x40
        // 0x5885BC1A: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885BC1D: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5885BC20: mov dword ptr [ebp - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x5885BC23: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885BC26: mov byte ptr [ebp - 2], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFE
        // 0x5885BC29: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885BC2C: jne 0x5885bc42
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885BC2E: mov byte ptr [ebp - 2], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFE
        // 0x5885BC31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BC33: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BC38: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BC3A: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BC3D: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885BC40: je 0x5885bc31
        __asm _emit 0x74
        __asm _emit 0xEF
        // 0x5885BC42: cmp byte ptr [ebp - 1], bl
        __asm _emit 0x38
        __asm _emit 0x5D
        __asm _emit 0xFF
        // 0x5885BC45: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885BC48: mov ebx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x5885BC4B: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885BC4D: pop edx
        __asm _emit 0x5A
        // 0x5885BC4E: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5885BC50: pop eax
        __asm _emit 0x58
        // 0x5885BC51: cmovne edx, eax
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885BC54: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x5885BC57: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BC59: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885BC5B: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885BC5D: ja 0x5885bc67
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BC5F: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BC62: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885BC65: jmp 0x5885bc8a
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885BC67: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BC69: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885BC6B: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BC6D: ja 0x5885bc77
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BC6F: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BC72: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885BC75: jmp 0x5885bc8a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885BC77: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BC79: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885BC7B: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BC7D: ja 0x5885bc87
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BC7F: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BC82: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885BC85: jmp 0x5885bc8a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885BC87: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885BC8A: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885BC8C: ja 0x5885bcad
        __asm _emit 0x77
        __asm _emit 0x1F
        // 0x5885BC8E: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885BC92: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5885BC94: je 0x5885bc99
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885BC96: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885BC98: inc edi
        __asm _emit 0x47
        // 0x5885BC99: inc dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885BC9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BC9E: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCA3: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x5885BCA6: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BCA8: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BCAB: jmp 0x5885bc57
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x5885BCAD: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885BCB0: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885BCB3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885BCB5: pop ebx
        __asm _emit 0x5B
        // 0x5885BCB6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5885BCB8: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCBE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885BCC0: cmp cl, byte ptr [eax]
        __asm _emit 0x3A
        __asm _emit 0x08
        // 0x5885BCC2: jne 0x5885bd62
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCC8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BCCA: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCCF: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885BCD2: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BCD4: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885BCD7: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5885BCDA: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BCDD: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5885BCDF: jne 0x5885bd05
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5885BCE1: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885BCE4: jne 0x5885bd05
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5885BCE6: mov edi, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885BCE9: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885BCED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BCEF: dec edi
        __asm _emit 0x4F
        // 0x5885BCF0: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BCF5: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BCF7: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BCFA: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885BCFD: je 0x5885bced
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x5885BCFF: mov dword ptr [ebp - 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885BD02: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885BD05: mov ebx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xEC
        // 0x5885BD08: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885BD0A: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x5885BD0C: jl 0x5885bd1b
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x5885BD0E: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x39
        // 0x5885BD11: jg 0x5885bd1b
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885BD13: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BD16: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885BD19: jmp 0x5885bd3e
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885BD1B: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BD1D: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885BD1F: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BD21: ja 0x5885bd2b
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BD23: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BD26: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885BD29: jmp 0x5885bd3e
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885BD2B: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BD2D: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885BD2F: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BD31: ja 0x5885bd3b
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BD33: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BD36: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885BD39: jmp 0x5885bd3e
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885BD3B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885BD3E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5885BD40: ja 0x5885bd5e
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x5885BD42: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885BD46: cmp edi, dword ptr [ebp - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0xE8
        // 0x5885BD49: je 0x5885bd4e
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885BD4B: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885BD4D: inc edi
        __asm _emit 0x47
        // 0x5885BD4E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BD50: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD55: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BD57: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BD5A: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885BD5C: jmp 0x5885bd0a
        __asm _emit 0xEB
        __asm _emit 0xAC
        // 0x5885BD5E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885BD60: jmp 0x5885bd65
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885BD62: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885BD65: cmp byte ptr [ebp - 2], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x5885BD69: jne 0x5885bd89
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5885BD6B: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885BD6E: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD73: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885BD75: je 0x5885bd81
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885BD77: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885BD7B: jne 0x5885bf00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD81: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885BD83: pop eax
        __asm _emit 0x58
        // 0x5885BD84: pop edi
        __asm _emit 0x5F
        // 0x5885BD85: pop esi
        __asm _emit 0x5E
        // 0x5885BD86: pop ebx
        __asm _emit 0x5B
        // 0x5885BD87: leave
        __asm _emit 0xC9
        // 0x5885BD88: ret
        __asm _emit 0xC3
        // 0x5885BD89: push dword ptr [ebp - 7]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5885BD8C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BD8E: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BD93: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885BD96: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885BD99: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885BD9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BD9E: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885BDA1: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDA6: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BDA9: mov cl, bl
        __asm _emit 0x8A
        __asm _emit 0xCB
        // 0x5885BDAB: cmp al, 0x45
        __asm _emit 0x3C
        __asm _emit 0x45
        // 0x5885BDAD: je 0x5885bdc0
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5885BDAF: cmp al, 0x50
        __asm _emit 0x3C
        __asm _emit 0x50
        // 0x5885BDB1: je 0x5885bdbb
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885BDB3: cmp al, 0x65
        __asm _emit 0x3C
        __asm _emit 0x65
        // 0x5885BDB5: je 0x5885bdc0
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885BDB7: cmp al, 0x70
        __asm _emit 0x3C
        __asm _emit 0x70
        // 0x5885BDB9: jne 0x5885bdc6
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885BDBB: mov cl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885BDBE: jmp 0x5885bdc6
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5885BDC0: mov cl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885BDC3: xor cl, 1
        __asm _emit 0x80
        __asm _emit 0xF1
        __asm _emit 0x01
        // 0x5885BDC6: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5885BDC8: je 0x5885bede
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDCE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BDD0: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDD5: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x5885BDD8: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BDDA: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BDDD: cmp al, 0x2b
        __asm _emit 0x3C
        __asm _emit 0x2B
        // 0x5885BDDF: je 0x5885bde9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885BDE1: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885BDE3: mov ch, al
        __asm _emit 0x8A
        __asm _emit 0xE8
        // 0x5885BDE5: cmp al, 0x2d
        __asm _emit 0x3C
        __asm _emit 0x2D
        // 0x5885BDE7: jne 0x5885bdf9
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885BDE9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BDEB: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BDF0: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BDF2: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BDF5: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885BDF7: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885BDF9: mov byte ptr [ebp - 2], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFE
        // 0x5885BDFC: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x5885BDFF: jne 0x5885be1d
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5885BE01: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885BE05: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BE07: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE0C: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BE0E: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885BE10: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BE13: cmp ch, 0x30
        __asm _emit 0x80
        __asm _emit 0xFD
        __asm _emit 0x30
        // 0x5885BE16: je 0x5885be05
        __asm _emit 0x74
        __asm _emit 0xED
        // 0x5885BE18: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885BE1A: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x5885BE1D: jl 0x5885be2c
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x5885BE1F: cmp ch, 0x39
        __asm _emit 0x80
        __asm _emit 0xFD
        __asm _emit 0x39
        // 0x5885BE22: jg 0x5885be2c
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885BE24: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BE27: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885BE2A: jmp 0x5885be4a
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885BE2C: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BE2E: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885BE30: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BE32: ja 0x5885be3c
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BE34: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BE37: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885BE3A: jmp 0x5885be4a
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885BE3C: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BE3E: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885BE40: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BE42: ja 0x5885be75
        __asm _emit 0x77
        __asm _emit 0x31
        // 0x5885BE44: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BE47: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885BE4A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5885BE4D: jae 0x5885be75
        __asm _emit 0x73
        __asm _emit 0x26
        // 0x5885BE4F: imul ebx, ebx, 0xa
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x0A
        // 0x5885BE52: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885BE56: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885BE58: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE5E: jg 0x5885be70
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x5885BE60: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BE62: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE67: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BE69: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BE6C: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885BE6E: jmp 0x5885be18
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x5885BE70: mov ebx, 0x1451
        __asm _emit 0xBB
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BE75: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BE77: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885BE79: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885BE7B: ja 0x5885be85
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BE7D: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BE80: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885BE83: jmp 0x5885bea3
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885BE85: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BE87: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885BE89: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BE8B: ja 0x5885be95
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885BE8D: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BE90: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885BE93: jmp 0x5885bea3
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885BE95: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885BE97: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885BE99: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885BE9B: ja 0x5885beb6
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x5885BE9D: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885BEA0: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885BEA3: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5885BEA6: jae 0x5885beb6
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x5885BEA8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BEAA: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEAF: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885BEB1: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BEB4: jmp 0x5885be75
        __asm _emit 0xEB
        __asm _emit 0xBF
        // 0x5885BEB6: cmp byte ptr [ebp - 3], 0x2d
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFD
        __asm _emit 0x2D
        // 0x5885BEBA: jne 0x5885bebe
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885BEBC: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x5885BEBE: cmp byte ptr [ebp - 2], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x5885BEC2: jne 0x5885bede
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5885BEC4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885BEC7: call 0x5885db8f
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BECC: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885BECE: je 0x5885bd81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BED4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BED6: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEDB: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BEDE: push dword ptr [ebp - 7]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5885BEE1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BEE3: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BEE8: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885BEEB: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5885BEEE: jmp 0x5885befc
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5885BEF0: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885BEF3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885BEF5: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5885BEF8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885BEFA: jne 0x5885bf07
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885BEFC: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885BEFE: jne 0x5885bef0
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5885BF00: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885BF02: jmp 0x5885bd83
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF07: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF0D: jg 0x5885bf54
        __asm _emit 0x7F
        __asm _emit 0x45
        // 0x5885BF0F: cmp ebx, 0xffffebb0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xB0
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF15: jl 0x5885bf4d
        __asm _emit 0x7C
        __asm _emit 0x36
        // 0x5885BF17: mov dl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x55
        __asm _emit 0xFF
        // 0x5885BF1A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885BF1C: pop edi
        __asm _emit 0x5F
        // 0x5885BF1D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5885BF1F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885BF21: pop eax
        __asm _emit 0x58
        // 0x5885BF22: cmovne eax, edi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC7
        // 0x5885BF25: imul eax, dword ptr [ebp - 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885BF29: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885BF2B: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF31: jg 0x5885bf54
        __asm _emit 0x7F
        __asm _emit 0x21
        // 0x5885BF33: cmp ebx, 0xffffebb0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xB0
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF39: jl 0x5885bf4d
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x5885BF3B: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885BF3E: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5885BF40: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x5885BF42: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885BF45: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5885BF48: jmp 0x5885bd84
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF4D: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885BF4F: jmp 0x5885bd83
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF54: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885BF56: jmp 0x5885bd83
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF5B: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885BF5E: lea eax, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BF61: push dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885BF64: push esi
        __asm _emit 0x56
        // 0x5885BF65: push eax
        __asm _emit 0x50
        // 0x5885BF66: call 0x5885c568
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF6B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885BF6E: jmp 0x5885bd84
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BF73: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885BF76: lea eax, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BF79: push dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885BF7C: push esi
        __asm _emit 0x56
        // 0x5885BF7D: push eax
        __asm _emit 0x50
        // 0x5885BF7E: call 0x5885c3f2
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF83: jmp 0x5885bf6b
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}
