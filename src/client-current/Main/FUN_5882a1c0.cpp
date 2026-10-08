// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 593 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882a1c0.

// Ghidra body range 0x5882A1C0..0x5882A411; 593 mapped bytes.
extern "C" __declspec(naked) void FUN_5882a1c0_segment_00() {
    __asm {
        // 0x5882A1C0: push esi
        __asm _emit 0x56
        // 0x5882A1C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882A1C3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882A1C7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5882A1C9: je 0x5882a40b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1CF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5882A1D3: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1D8: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882A1DB: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1E0: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5882A1E3: jne 0x5882a3aa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1E9: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1EE: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5882A1F2: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5882A1F6: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1FB: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5882A1FE: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A203: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5882A206: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5882A209: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5882A20D: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5882A20F: jne 0x5882a271
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x5882A211: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882A214: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A218: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5882A21B: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A220: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A224: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A22A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882A22C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A230: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A236: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A23A: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A240: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A244: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A24A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A24E: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A254: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A258: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A25E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A262: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A268: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A26C: jmp 0x5882a3ed
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A271: cmp al, cl
        __asm _emit 0x3A
        __asm _emit 0xC1
        // 0x5882A273: je 0x5882a34d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A279: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5882A27B: je 0x5882a34d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A281: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5882A283: jne 0x5882a2f9
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5882A285: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882A288: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A28A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A28F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882A292: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A294: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A299: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A29F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2A1: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2A6: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2AE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2B3: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2BB: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2C0: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A2C8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2CF: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2D5: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2DA: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2E2: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2E7: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A2EF: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A2F4: jmp 0x5882a3ed
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A2F9: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882A2FB: jne 0x5882a3ed
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A301: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882A304: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A306: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A30B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882A30E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A310: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x73
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A315: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A31B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A31D: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x72
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A322: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A328: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A32A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x72
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A32F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A335: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A337: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x72
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A33C: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A342: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A344: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x72
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A349: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A34B: jmp 0x5882a2cf
        __asm _emit 0xEB
        __asm _emit 0x82
        // 0x5882A34D: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882A350: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A355: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A359: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5882A35C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A360: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A366: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A36A: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A370: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5882A372: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A376: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A37C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A380: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A386: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A38A: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A390: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A394: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A39A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A39E: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3A4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882A3A8: jmp 0x5882a3ed
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x5882A3AA: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882A3AE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5882A3B0: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5882A3B3: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3B8: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5882A3BB: jne 0x5882a3e9
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5882A3BD: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3C2: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882A3C6: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3CB: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5882A3CF: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5882A3D3: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3D8: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5882A3DB: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A3E0: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5882A3E3: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5882A3E7: jmp 0x5882a3ed
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882A3E9: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5882A3ED: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5882A3F0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882A3F2: je 0x5882a40b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5882A3F4: push edi
        __asm _emit 0x57
        // 0x5882A3F5: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5882A3F8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5882A3FA: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5882A3FD: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5882A400: je 0x5882a40d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882A402: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5882A404: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5882A406: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882A408: jne 0x5882a3f5
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5882A40A: pop edi
        __asm _emit 0x5F
        // 0x5882A40B: pop esi
        __asm _emit 0x5E
        // 0x5882A40C: ret
        __asm _emit 0xC3
        // 0x5882A40D: pop edi
        __asm _emit 0x5F
        // 0x5882A40E: pop esi
        __asm _emit 0x5E
        // 0x5882A40F: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
