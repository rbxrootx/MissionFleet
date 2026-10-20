// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABB40 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_004abb40_004ABB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x4abb62
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4abb62
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 2E: jne 0x4abb90
        __asm _emit 0x75
        __asm _emit 0x2e
        push 58c0b8h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 B7 4F 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abb82
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4abb62
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x4abc5c
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4abba2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x4abc2c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + edx*4 + 18h]
        sub edx, dword ptr [esi + ecx*4 + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 18h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + edx*4 + 4]
        sub edx, dword ptr [esi + ecx*4 + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 4], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + edx*4 + 18h], 0
        ; Exact mapped bytes 75 0D: jne 0x4abc02
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + ecx*4 + 4], 0
        ; Exact mapped bytes 74 25: je 0x4abc27
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4abc27
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 12: jne 0x4abc20
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 13: jne 0x4abc27
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4abc27
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x4abb99
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 30h]
        sub ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
