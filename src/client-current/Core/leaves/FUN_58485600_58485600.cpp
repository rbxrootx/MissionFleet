// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485600 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_58485600_58485600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D E6 FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 F4 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F5 08 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C FF 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 18h], eax
        push 1
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 F4 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B4 08 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0E 07 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 95 FE 32 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6F 08 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 59 08 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 58894788h
        ; Exact mapped bytes E8 0B C9 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 08 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 588947b0h
        ; Exact mapped bytes E8 EF C8 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 08 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 588947d8h
        ; Exact mapped bytes E8 D3 C8 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 08 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
