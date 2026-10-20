// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565474 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_00565474_00565474() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CB A9 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5654a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b0h
        push 5d0bb4h
        ; Exact mapped bytes E8 62 F5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5654a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56547e
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 10h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 A0 A9 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5654ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 5d0bb4h
        ; Exact mapped bytes E8 37 F5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5654ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5654a9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 124h], 0
        ; Exact mapped bytes 74 02: je 0x5654e2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x565530
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        ; Exact mapped bytes E8 5F 0B FD FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 114h
        ; Exact mapped bytes E8 4D 0B FD FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 124h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
