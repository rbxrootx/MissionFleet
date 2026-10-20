// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503950 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00503950_00503950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50397b
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 676a3ch
        ; Exact mapped bytes E8 CA 53 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50397b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x503959
        __asm _emit 0x75
        __asm _emit 0xd8
        lea edx, [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 9C BE 68 00: call dword ptr [0x68be9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        shl edx, 10h
        or ecx, edx
        push ecx
        push 0
        push 366h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 18 BE 68 00: call dword ptr [0x68be18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5039e0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1D: jmp 0x5039fd
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0A: je 0x5039fd
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 5C FF FF FF: je 0x503959
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x503a0c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 06: jmp 0x503a12
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
