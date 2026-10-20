// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638C00 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_58638c00_58638C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x58638d41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 49 80 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 C3 4F ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4 + 180h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 E1 EB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5B: je 0x58638cbd
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 14h], edx
        push 0ff000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 89 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 D2 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 D2 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x58638d14
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 20h], eax
        push 0ff000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588aee5ch
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 21 89 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 97 D2 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7D D2 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 E2 47 ED FF: call 0x5850d510
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 50 24 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
