// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055992A .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_0055992a_0055992A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 FE FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cea78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB B3 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cea8ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 B4 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5ceaa0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D B3 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5ceab4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5ceacch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 B4 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5ceae0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC B2 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 5ceaf4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA B3 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 5ceb0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A B1 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 B2 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x559a33
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5ceb20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA B0 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x559a40
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5ceb54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB B0 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 5ceb88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 B0 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D B2 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5ceb98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 B0 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb0
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
