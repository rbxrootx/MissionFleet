// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C5CC0 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_588c5cc0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x588c5dab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 80h], 0
        push ebx
        push edi
        mov ebx, 1
        ; Exact mapped bytes 74 4D: je 0x588c5d2c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        xor edi, edi
        sar ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 76 31: jbe 0x588c5d1f
        __asm _emit 0x76
        __asm _emit 0x31
        mov edi, edi
        cmp dword ptr [esi + 7ch], edi
        ; Exact mapped bytes 74 1B: je 0x588c5d10
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x588c5d07
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6B 6F 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + edi*4]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        add edi, ebx
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 D1: jb 0x588c5cf0
        __asm _emit 0x72
        __asm _emit 0xd1
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [esi + 78h], eax
        mov byte ptr [esi + 80h], 0
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        xor edi, edi
        sar ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 76 52: jbe 0x588c5d8d
        __asm _emit 0x76
        __asm _emit 0x52
        ; Exact mapped bytes EB 03: jmp 0x588c5d40
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x588c5d52
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 20 6F 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 78h]
        ; Exact mapped bytes 74 27: je 0x588c5d7e
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 60h]
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x588c5d69
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 09 6F 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + edi*4]
        cmp dword ptr [edx + 50h], 5
        ; Exact mapped bytes 75 09: jne 0x588c5d7e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 7ch], edi
        mov byte ptr [esi + 80h], bl
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 60h]
        add edi, ebx
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 B3: jb 0x588c5d40
        __asm _emit 0x72
        __asm _emit 0xb3
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x588c5da9
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x588c5dad
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588c5d94
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebx
        pop esi
        ret
        pop edi
        pop ebx
    }
}
