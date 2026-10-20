// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C244 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_0055c244_0055C244() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 D4 FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cefd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 8A FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cefe8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 8B FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5ceffch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 8A FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5cf010h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5cf028h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 8B FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5cf03ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 89 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 5cf050h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 88 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 8A FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 5cf068h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 87 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 89 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x55c34d
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5cf07ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 87 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55c35a
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cf0b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 87 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 5cf0e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 87 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 89 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cf0f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 87 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
