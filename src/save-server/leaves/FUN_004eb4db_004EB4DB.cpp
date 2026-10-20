// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB4DB .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_004eb4db_004EB4DB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4eb501
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbh
        push 6741e8h
        ; Exact mapped bytes E8 44 D8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb501
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4eb4e7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 A1 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eb527
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dch
        push 6741e8h
        ; Exact mapped bytes E8 1E D8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eb527
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4eb507
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0ffffh
        ; Exact mapped bytes 75 18: jne 0x4eb551
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 6741f4h
        ; Exact mapped bytes E8 CC 50 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 A8 79 FB FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE FD FF FF: call 0x4eb309
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 D5 C5 FD FF: call 0x4c7b3f
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x4eb5af
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp - 4], 7fffh
        ; Exact mapped bytes 73 11: jae 0x4eb58f
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        or dh, 80h
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 A3 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4eb5ad
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 7fffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 A3 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        or eax, 80000000h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA A3 03 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x4eb5f6
        __asm _emit 0xeb
        __asm _emit 0x47
        push 0ffffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 A3 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D E4 FF FF: call 0x4e9a55
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 FA FF FF: call 0x4eaff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 60 C5 FD FF: call 0x4c7b3f
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 30h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
