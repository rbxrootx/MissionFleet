// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBEED .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004ebeed_004EBEED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4ebf06
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4ebf8d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x4ebf10
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7D: jmp 0x4ebf8d
        __asm _emit 0xeb
        __asm _emit 0x7d
        push 3
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B6 FD FF FF: call 0x4ebcd1
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x4ebf47
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x4ebf36
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 57: jmp 0x4ebf8d
        __asm _emit 0xeb
        __asm _emit 0x57
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 90 FD FF FF: call 0x4ebcd1
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4ebf47
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x4ebf8d
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x4ebf7a
        __asm _emit 0x74
        __asm _emit 0x2d
        push -10h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4ebf7a
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x4ebf7a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 13: jmp 0x4ebf8d
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        push 0
        push 14fh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
