// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0ED4 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_004f0ed4_004F0ED4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 1C 00 00: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c5370h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 3C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x4f0f21
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 3E 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x4f0f30
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        push edx
        push 5c5388h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 80 3D 04 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        push 5c53a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 3D 04 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 5c53b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 3E 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 5c53cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2F 3D 04 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        push 5c53dch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 3B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
