// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055BE34 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_0055be34_0055BE34() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 D9 FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cee30h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 8E FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cee44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 8F FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5cee58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 8E FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5cee6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5cee84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 8F FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5cee98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 8D FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 5ceeach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 8E FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 5ceec4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 8C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 8D FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x55bf3d
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5ceed8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55bf4a
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cef0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        push ecx
        push 5cef40h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 8D FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C8 00 00 00: mov ax, word ptr [edx + 0xc8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5cef54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 8D FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        push 5cef68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 8D FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        push ecx
        push 5cef84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 8D FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        push 5cef98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        push edx
        push 5cefb0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 8D FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cefd0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 8B FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8b
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
