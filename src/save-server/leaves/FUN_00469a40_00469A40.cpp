// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469A40 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_00469a40_00469A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        cmp dword ptr [ebp + 8], 0ffh
        ; Exact mapped bytes 0F 86 94 00 00 00: jbe 0x469ae7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F8 00 00: mov word ptr [ebp - 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FA: mov word ptr [ebp - 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfa
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 8
        and ecx, 0ffh
        mov byte ptr [ebp - 4], cl
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffh
        mov byte ptr [ebp - 3], dl
        ; Exact mapped bytes 83 3D 8C 8B 68 00 00: cmp dword ptr [0x688b8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x469a8a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x469b1b
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes A1 A4 8D 68 00: mov eax, dword ptr [0x688da4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea edx, [ebp - 8]
        push edx
        push 2
        lea eax, [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 F6 CE 00 00: call 0x4769a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x469ab5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x469b1b
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 6]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x469adb
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x469adb
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x469ae2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 34: jmp 0x469b1b
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x469b03
        __asm _emit 0x7e
        __asm _emit 0x13
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C5 6E 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 15: jmp 0x469b18
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 C0 DE 67 00: mov edx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
