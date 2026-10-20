// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485CF0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_00485cf0_00485CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x485e04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 04 00 00: call 0x486190
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x485d70
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 04 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 04 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x485d56
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB 18: jmp 0x485d6e
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 04 00 00: call 0x486190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 04 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 62 04 00 00: call 0x4861d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x485dbc
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 04 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 04 00 00: call 0x486190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 68 04 00 00: call 0x4861f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 04 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x485da4
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 03 00 00: call 0x486190
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 18: jmp 0x485dbc
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 03 00 00: call 0x486190
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 03 00 00: call 0x4861b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 14 04 00 00: call 0x4861d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7C 03 00 00: call 0x486140
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x485e00
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x485df9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 EC 29 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x485e00
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x485e06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 29 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
