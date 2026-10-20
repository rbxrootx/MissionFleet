// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462E2C .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00462e2c_00462E2C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 581c10h
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 40: je 0x462ea2
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x462e91
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 54 59 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x462e98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 40: je 0x462eeb
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x462eda
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 0B 59 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x462ee1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], 0
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 EA 58 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
