// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB309 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_004eb309_004EB309() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cf28h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AD A3 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x4eb3fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 7F: jne 0x4eb3c2
        __asm _emit 0x75
        __asm _emit 0x7f
        push 0bbh
        push 6741e8h
        push 1ch
        ; Exact mapped bytes E8 AB 0D FE FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x4eb378
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CD C2 FD FF: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4eb37f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 34h], edx
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 43 C3 FD FF: call 0x4c76ec
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 14 C2 03 00: call 0x5275cc
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2E: je 0x4eb3f6
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 20 FC FF FF: call 0x4eaff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 60 C7 FD FF: call 0x4c7b3f
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 30h], ecx
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x4eb4c8
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x4eb48d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0cbh
        push 6741e8h
        push 14h
        ; Exact mapped bytes E8 E6 0C FE FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x4eb436
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4F 39 FD FF: call 0x4bed80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4eb43d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 D0 39 FD FF: call 0x4bee37
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4eb46e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4eb467
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 AD AF 03 00: call 0x526430
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 35: je 0x4eb4c8
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 FB FF FF: call 0x4eaff0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 BB 3E FD FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
