// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004986D8 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_004986d8_004986D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 4
        ; Exact mapped bytes 77 35: ja 0x49873b
        __asm _emit 0x77
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 24 95 8D 88 49 00: jmp dword ptr [edx*4 + 0x49888d]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 22: jmp 0x49873b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes EB 19: jmp 0x49873b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes EB 10: jmp 0x49873b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes EB 07: jmp 0x49873b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 7
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 4
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 9
        ; Exact mapped bytes 77 34: ja 0x49878b
        __asm _emit 0x77
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 44h]
        xor edx, edx
        mov dl, byte ptr [eax + 4988b5h]
        ; Exact mapped bytes FF 24 95 A1 88 49 00: jmp dword ptr [edx*4 + 0x4988a1]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 7
        ; Exact mapped bytes EB 19: jmp 0x49878b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 10h], 3
        ; Exact mapped bytes EB 10: jmp 0x49878b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 5
        ; Exact mapped bytes EB 07: jmp 0x49878b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4987a4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x498884
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x4987c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d89h
        push 5ca8a4h
        ; Exact mapped bytes E8 44 C2 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4987c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4987a4
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 13: jne 0x4987e0
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 75 0D: jne 0x4987e0
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes EB 69: jmp 0x498849
        __asm _emit 0xeb
        __asm _emit 0x69
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 75 06: jne 0x4987ec
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 0C: je 0x4987f8
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 75 57: jne 0x498849
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 75 51: jne 0x498849
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 44h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 DC FF FF: call 0x496501
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 75 0B: jne 0x498849
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 33: je 0x498882
        __asm _emit 0x74
        __asm _emit 0x33
        push 3
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 37 20 00 00: call 0x49a890
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 A9 FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x498882
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x498884
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
