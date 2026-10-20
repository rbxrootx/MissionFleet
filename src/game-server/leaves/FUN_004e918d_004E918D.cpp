// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E918D .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004e918d_004E918D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 20 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c4f90h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c4f88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 B9 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A5 BB 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 52 B9 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 8D 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4e922c
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 A5 04 00: call 0x533743
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4e922c
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x4e9018
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c4fa0h
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 5c4f9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 B9 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 76 BA 04 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 B8 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CA BB 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4e91e0
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 5c4fa8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 B8 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb8
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
