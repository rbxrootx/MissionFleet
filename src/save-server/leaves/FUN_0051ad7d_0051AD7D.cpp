// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AD7D .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0051ad7d_0051AD7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 29: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 23: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 1D: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 17: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 74 11: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x11
        push 74h
        push 6769f8h
        ; Exact mapped bytes E8 8F DF 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51adb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x51ad87
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 40h], edx
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
