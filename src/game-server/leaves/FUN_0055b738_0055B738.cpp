// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055B738 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_0055b738_0055B738() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 E0 FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0d0h
        push ecx
        push 5cecf8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 5ced08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF 95 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 5ced1ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 96 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 5ced30h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 95 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push 5ced44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        push edx
        push 5ced5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 96 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        push 5ced70h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 93 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 94 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        push 5ced84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 95 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 5ced9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 94 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x55b85f
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5cedb0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55b86c
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cede4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        push 5cee18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 94 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cee2ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 92 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x92
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
