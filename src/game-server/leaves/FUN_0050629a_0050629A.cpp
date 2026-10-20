// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050629A .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_0050629a_0050629A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 68 B6 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5062c3
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 5c79a0h
        ; Exact mapped bytes E8 42 E7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5062c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5062a6
        __asm _emit 0x75
        __asm _emit 0xdd
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x5062d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x5062c9
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5062dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x5062d6
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x5062ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x5062e3
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x5062f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x5062f0
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 82 02 00 00: call 0x506589
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x50631c
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF B7 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5063bf
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes E8 D4 52 FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 33: je 0x506369
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 7fffh
        ; Exact mapped bytes 73 0F: jae 0x50634e
        __asm _emit 0x73
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BA B7 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x506367
        __asm _emit 0xeb
        __asm _emit 0x19
        push 7fffh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB B7 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 B8 02 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x5063bf
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 03 00 00: call 0x50675b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E6 FE FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 66 52 FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
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
