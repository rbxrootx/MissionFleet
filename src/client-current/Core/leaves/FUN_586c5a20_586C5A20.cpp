// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5A20 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_586c5a20_586C5A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF B4 FF FF: call 0x586c0ef0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], -1
        ; Exact mapped bytes 75 05: jne 0x586c5a40
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x586c5b40
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 05: jne 0x586c5a4e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x586c5b40
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        add edx, 14h
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 06 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC FB FF FF: call 0x586c5670
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B F0 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8C 04 DC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C B0 FF FF: call 0x586c0b00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x586c5abd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x586c5b40
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 77 74: ja 0x586c5b40
        __asm _emit 0x77
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 44 5B 6C 58: jmp dword ptr [ecx*4 + 0x586c5b44]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x5b
        __asm _emit 0x6c
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 15 00 00: call 0x586c7010
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 58: jmp 0x586c5b40
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 21 00 00: call 0x586c7c50
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 46: jmp 0x586c5b40
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 10 00 00: call 0x586c6bd0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x586c5b40
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 03 00 00: call 0x586c5e90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x586c5b40
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 00 00 00: call 0x586c5b60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x586c5b40
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 1C 00 00: call 0x586c77c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
