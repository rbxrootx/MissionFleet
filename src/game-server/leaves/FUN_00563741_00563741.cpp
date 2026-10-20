// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00563741 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_00563741_00563741() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B4 F1 FD FF: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        push 5ce8a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5A 15 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 5ce8b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 15 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 5ce8c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 16 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5637b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 24h]
        ; Exact mapped bytes 0F 83 04 01 00 00: jae 0x5638cc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ce8e4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5ce8d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 14 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, edx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        push 5ce8ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A 13 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A 14 FD FF: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5ce908h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 15 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5ce920h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 14 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 5ce93ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 14 FD FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 5ce958h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF 14 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 5ce970h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 14 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        push 5ce988h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 14 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5ce99ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 E4 FE FF FF: jmp 0x5637b0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 5ce9a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 12 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x12
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
