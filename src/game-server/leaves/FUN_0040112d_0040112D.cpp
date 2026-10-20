// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040112D .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_0040112d_0040112D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 A9 01 00 00: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x40121b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 95 01 00 00: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6E 01 00 00: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x401182
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 01 00 00: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x40119a
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 02: jne 0x401198
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x40119a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DD: jmp 0x401177
        __asm _emit 0xeb
        __asm _emit 0xdd
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 7B: je 0x40121b
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 4E: je 0x4011f6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 74 42: je 0x4011f6
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18ch], 1
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 4E 01 00 00: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 F9 75 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18ch], 0
        ; Exact mapped bytes EB 25: jmp 0x40121b
        __asm _emit 0xeb
        __asm _emit 0x25
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 170h]
        or edx, 100000h
        push edx
        push 80020116h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 60 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 BA 75 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
