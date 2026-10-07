// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A3200 .. +0x2C2 bytes.
// Source symbol alias: FUN_588a3200.
extern "C" __declspec(naked) void FUN_588a3200() {
    __asm {
        // 0x588A3200: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x588A3205: push esi
        __asm _emit 0x56
        // 0x588A3206: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A3208: jne 0x588a34bc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A320E: push ebp
        __asm _emit 0x55
        // 0x588A320F: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A3213: cmp ebp, dword ptr [esi + 0x250]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3219: jne 0x588a3229
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588A321B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588A321D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A3220: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A3222: pop ebp
        __asm _emit 0x5D
        // 0x588A3223: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3225: pop esi
        __asm _emit 0x5E
        // 0x588A3226: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3229: cmp ebp, dword ptr [esi + 0x24c]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A322F: jne 0x588a327e
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x588A3231: call 0x5889ef90
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3236: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3238: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588A323B: jne 0x588a3262
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588A323D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A323F: call 0x5889f0c0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3244: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3246: call 0x5889fca0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A324B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A324D: call 0x588a0450
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xD1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3252: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588A3254: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A3257: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3259: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A325B: pop ebp
        __asm _emit 0x5D
        // 0x588A325C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A325E: pop esi
        __asm _emit 0x5E
        // 0x588A325F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3262: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3264: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3266: push 0x28a
        __asm _emit 0x68
        __asm _emit 0x8A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A326B: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588A3270: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3272: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x1A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588A3277: pop ebp
        __asm _emit 0x5D
        // 0x588A3278: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A327A: pop esi
        __asm _emit 0x5E
        // 0x588A327B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A327E: cmp ebp, dword ptr [esi + 0x248]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3284: jne 0x588a3299
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588A3286: call 0x5889e970
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A328B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A328D: call 0x588a1340
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3292: pop ebp
        __asm _emit 0x5D
        // 0x588A3293: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3295: pop esi
        __asm _emit 0x5E
        // 0x588A3296: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3299: cmp ebp, dword ptr [esi + 0x360]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A329F: jne 0x588a32c7
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588A32A1: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A32A7: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32AC: mov word ptr [ecx + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32B3: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A32B9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A32BB: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A32BE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A32C0: pop ebp
        __asm _emit 0x5D
        // 0x588A32C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A32C3: pop esi
        __asm _emit 0x5E
        // 0x588A32C4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A32C7: cmp ebp, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32CD: jne 0x588a332e
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x588A32CF: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A32D7: mov dword ptr [esi + 0x36c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32E1: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xE3
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A32E6: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32EC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A32EE: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A32F3: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A32F9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A32FB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3300: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3306: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3308: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A330D: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3313: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x588A3315: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A331A: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3320: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3322: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3327: pop ebp
        __asm _emit 0x5D
        // 0x588A3328: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A332A: pop esi
        __asm _emit 0x5E
        // 0x588A332B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A332E: cmp ebp, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3334: jne 0x588a3395
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x588A3336: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A333C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A333E: mov dword ptr [esi + 0x36c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3348: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A334D: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3353: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3355: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A335A: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3360: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3362: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3367: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A336D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A336F: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3374: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A337A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A337C: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3381: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3387: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x588A3389: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xE2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A338E: pop ebp
        __asm _emit 0x5D
        // 0x588A338F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3391: pop esi
        __asm _emit 0x5E
        // 0x588A3392: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3395: push ebx
        __asm _emit 0x53
        // 0x588A3396: push edi
        __asm _emit 0x57
        // 0x588A3397: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A3399: lea edi, [esi + 0x264]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A339F: nop
        __asm _emit 0x90
        // 0x588A33A0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588A33A2: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588A33A4: jne 0x588a33c2
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588A33A6: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A33AD: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x588A33B0: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A33B5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xE9
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A33BA: mov dword ptr [esi + 0x35c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A33C0: jmp 0x588a33f1
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588A33C2: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A33C9: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x588A33CC: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588A33CF: push eax
        __asm _emit 0x50
        // 0x588A33D0: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A33D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A33D8: jne 0x588a33f1
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588A33DA: mov edx, dword ptr [edi - 0x98]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A33E0: push edx
        __asm _emit 0x52
        // 0x588A33E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A33E3: call 0x5889ed80
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A33E8: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x588A33EB: push eax
        __asm _emit 0x50
        // 0x588A33EC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A33F1: inc ebx
        __asm _emit 0x43
        // 0x588A33F2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A33F5: cmp ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x1F
        // 0x588A33F8: jl 0x588a33a0
        __asm _emit 0x7C
        __asm _emit 0xA6
        // 0x588A33FA: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3400: pop edi
        __asm _emit 0x5F
        // 0x588A3401: pop ebx
        __asm _emit 0x5B
        // 0x588A3402: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588A3404: jne 0x588a3420
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588A3406: cmp dword ptr [eax + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588A340A: jne 0x588a34bb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3410: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A3412: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3414: call 0x588a1040
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3419: pop ebp
        __asm _emit 0x5D
        // 0x588A341A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A341C: pop esi
        __asm _emit 0x5E
        // 0x588A341D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3420: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3426: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588A3428: jne 0x588a3444
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588A342A: cmp dword ptr [eax + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588A342E: jne 0x588a34bb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3434: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A3436: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3438: call 0x588a1110
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A343D: pop ebp
        __asm _emit 0x5D
        // 0x588A343E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3440: pop esi
        __asm _emit 0x5E
        // 0x588A3441: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3444: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A344A: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588A344C: jne 0x588a3464
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588A344E: cmp dword ptr [eax + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588A3452: jne 0x588a34bb
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x588A3454: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A3456: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3458: call 0x588a11e0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A345D: pop ebp
        __asm _emit 0x5D
        // 0x588A345E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3460: pop esi
        __asm _emit 0x5E
        // 0x588A3461: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A3464: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A346A: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588A346C: jne 0x588a349d
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x588A346E: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588A3471: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588A3474: jne 0x588a348a
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588A3476: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A347C: pop ebp
        __asm _emit 0x5D
        // 0x588A347D: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3484: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3486: pop esi
        __asm _emit 0x5E
        // 0x588A3487: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A348A: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588A348D: jne 0x588a34bb
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588A348F: pop ebp
        __asm _emit 0x5D
        // 0x588A3490: mov dword ptr [eax + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3497: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3499: pop esi
        __asm _emit 0x5E
        // 0x588A349A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588A349D: mov esi, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A34A3: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x588A34A5: jne 0x588a34bb
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588A34A7: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588A34AA: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588A34AD: je 0x588a347c
        __asm _emit 0x74
        __asm _emit 0xCD
        // 0x588A34AF: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588A34B2: jne 0x588a34bb
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588A34B4: mov dword ptr [esi + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A34BB: pop ebp
        __asm _emit 0x5D
        // 0x588A34BC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A34BE: pop esi
        __asm _emit 0x5E
        // 0x588A34BF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
