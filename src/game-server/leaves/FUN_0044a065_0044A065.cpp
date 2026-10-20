// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A065 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_0044a065_0044A065() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x44a180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 75 10: jne 0x44a0a0
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 104h], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x44a180
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 64: je 0x44a110
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 58: je 0x44a110
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 1
        ; Exact mapped bytes 75 26: jne 0x44a0ea
        __asm _emit 0x75
        __asm _emit 0x26
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 104h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F8 E6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x44a10e
        __asm _emit 0xeb
        __asm _emit 0x24
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 D2 E6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 6E: jmp 0x44a17e
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 32: je 0x44a14e
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 75 26: jne 0x44a14e
        __asm _emit 0x75
        __asm _emit 0x26
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 94 E6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x44a17e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 74 24: je 0x44a17e
        __asm _emit 0x74
        __asm _emit 0x24
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 108h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 62 E6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x44a18d
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5b6d44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 39 0A 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 43 E6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
