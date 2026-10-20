// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CC5F .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_0042cc5f_0042CC5F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b8beh
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
        sub esp, 30h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 634430h
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 40c50h], 0
        ; Exact mapped bytes 74 46: je 0x42ccf2
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 40c50h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x42ccde
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 17 81 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x42cce5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 40c50h], 0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 40c54h], 0
        ; Exact mapped bytes 74 46: je 0x42cd44
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 40c54h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x42cd30
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 C5 80 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x42cd37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 40c54h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0c28h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 46: je 0x42cd9c
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 1A 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x42cd93
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 62 80 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x42cd9a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB B4: jmp 0x42cd50
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 92 12 00 00: call 0x42e040
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 00 12 00 00: call 0x42dfc0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 4E 14 00 00: call 0x42e220
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7E 38 0A 00: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
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
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 7F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
