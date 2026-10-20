// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428A9F .. +0x187 bytes.
extern "C" __declspec(naked) void FUN_00428a9f_00428A9F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 74 55: je 0x428b03
        __asm _emit 0x74
        __asm _emit 0x55
        push 3dh
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 6F FF FF: call 0x41fa02
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        cmp esi, edi
        pop ecx
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes 74 40: je 0x428b03
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 74 3B: je 0x428b03
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes A1 D8 FC 44 00: mov eax, dword ptr [0x44fcd8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        xor ebx, ebx
        cmp byte ptr [esi + 1], bl
        sete bl
        ; Exact mapped bytes 3B 05 DC FC 44 00: cmp eax, dword ptr [0x44fcdc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x428ae9
        __asm _emit 0x75
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 9B 01 00 00: call 0x428c7e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes A3 D8 FC 44 00: mov dword ptr [0x44fcd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 75 54: jne 0x428b41
        __asm _emit 0x75
        __asm _emit 0x54
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 74 19: je 0x428b0b
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 39 3D E0 FC 44 00: cmp dword ptr [0x44fce0], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x428b0b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes E8 DE F8 FF FF: call 0x4283dd
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x428b41
        __asm _emit 0x74
        __asm _emit 0x3e
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
        cmp ebx, edi
        ; Exact mapped bytes 0F 85 0C 01 00 00: jne 0x428c1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes E8 CA 68 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes A3 D8 FC 44 00: mov dword ptr [0x44fcd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 DF: je 0x428b03
        __asm _emit 0x74
        __asm _emit 0xdf
        mov dword ptr [eax], edi
        ; Exact mapped bytes 39 3D E0 FC 44 00: cmp dword ptr [0x44fce0], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x428b41
        __asm _emit 0x75
        __asm _emit 0x13
        push 4
        ; Exact mapped bytes E8 AF 68 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes A3 E0 FC 44 00: mov dword ptr [0x44fce0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 C4: je 0x428b03
        __asm _emit 0x74
        __asm _emit 0xc4
        mov dword ptr [eax], edi
        sub esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 3D D8 FC 44 00: mov edi, dword ptr [0x44fcd8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edi
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 00 00 00: call 0x428c26
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        ; Exact mapped bytes 7C 43: jl 0x428ba1
        __asm _emit 0x7c
        __asm _emit 0x43
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 3E: je 0x428ba1
        __asm _emit 0x74
        __asm _emit 0x3e
        test ebx, ebx
        ; Exact mapped bytes 74 32: je 0x428b99
        __asm _emit 0x74
        __asm _emit 0x32
        push dword ptr [edi + esi*4]
        lea edi, [edi + esi*4]
        ; Exact mapped bytes E8 AC 69 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 0B: je 0x428b83
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [edi + 4]
        inc esi
        mov dword ptr [edi], eax
        add edi, 4
        ; Exact mapped bytes EB F0: jmp 0x428b73
        __asm _emit 0xeb
        __asm _emit 0xf0
        mov eax, esi
        shl eax, 2
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 8C FF FF: call 0x421838
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 3C: je 0x428bd3
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 35: jmp 0x428bce
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + esi*4], eax
        ; Exact mapped bytes EB 32: jmp 0x428bd3
        __asm _emit 0xeb
        __asm _emit 0x32
        test ebx, ebx
        ; Exact mapped bytes 75 7A: jne 0x428c1f
        __asm _emit 0x75
        __asm _emit 0x7a
        test esi, esi
        ; Exact mapped bytes 7D 02: jge 0x428bab
        __asm _emit 0x7d
        __asm _emit 0x02
        neg esi
        lea eax, [esi*4 + 8]
        push eax
        push edi
        ; Exact mapped bytes E8 7F 8C FF FF: call 0x421838
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 84 40 FF FF FF: je 0x428b03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + esi*4], ecx
        and dword ptr [eax + esi*4 + 4], 0
        ; Exact mapped bytes A3 D8 FC 44 00: mov dword ptr [0x44fcd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 46: je 0x428c1f
        __asm _emit 0x74
        __asm _emit 0x46
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 5F FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        inc eax
        push eax
        ; Exact mapped bytes E8 FB 67 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        ; Exact mapped bytes 74 2E: je 0x428c1f
        __asm _emit 0x74
        __asm _emit 0x2e
        push dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 86 D5 FF FF: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop ecx
        sub eax, dword ptr [ebp + 8]
        pop ecx
        add eax, dword ptr [ebp - 8]
        and byte ptr [eax], 0
        inc eax
        neg ebx
        sbb ebx, ebx
        not ebx
        and ebx, eax
        push ebx
        push esi
        ; Exact mapped bytes FF 15 AC C1 43 00: call dword ptr [0x43c1ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 00 69 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        xor eax, eax
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x428b06
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
