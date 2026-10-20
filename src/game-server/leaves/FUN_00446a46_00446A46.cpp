// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446A46 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_00446a46_00446A46() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 74 64: je 0x446add
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 108h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x446adb
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1B: je 0x446acd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 18 1D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x446ad4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 90: jmp 0x446a6d
        __asm _emit 0xeb
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 47: je 0x446b30
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1B: je 0x446b1c
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 C9 1C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x446b23
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 108h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0f8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 10ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 100h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 114h], 0
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 1C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
