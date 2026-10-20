// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047257F .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_0047257f_0047257F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x4726c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8d0h]
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x4726c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8d8h], 0
        ; Exact mapped bytes 74 52: je 0x472608
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8d8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8d4h]
        mov dword ptr [ecx + 8d4h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8d4h], 0
        ; Exact mapped bytes 74 1A: je 0x4725f4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8d4h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8d8h]
        mov dword ptr [eax + 8d8h], edx
        ; Exact mapped bytes EB 12: jmp 0x472606
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8d8h]
        mov dword ptr [eax + 0cb0h], edx
        ; Exact mapped bytes EB 40: jmp 0x472648
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8d4h]
        mov dword ptr [eax + 0cach], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8d4h], 0
        ; Exact mapped bytes 74 15: je 0x47263b
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8d4h]
        mov dword ptr [edx + 8d8h], 0
        ; Exact mapped bytes EB 0D: jmp 0x472648
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cb0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8d0h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8d8h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8d4h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4D 61 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 14 00 00: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c90h
        ; Exact mapped bytes E8 5F 12 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 45 FD FF: call 0x446c1e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4726c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 13 61 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
