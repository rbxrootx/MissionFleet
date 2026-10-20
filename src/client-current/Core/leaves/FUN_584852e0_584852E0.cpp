// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584852E0 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_584852e0_584852E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D E9 FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 0F 00 00: call 0x58486210
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 0ch], ecx
        push 2
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C F8 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D 0C 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 02 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 18h], eax
        push 3
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB F7 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CC 0B 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 26 0A 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AD 01 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 28h], ecx
        push 4
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 F7 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 75 0B 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC 01 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 34h], eax
        push 5
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 F7 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 34 0B 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9B 01 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7C 01 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x33
        __asm _emit 0x00
        push 46h
        push 0
        push 58894a98h
        ; Exact mapped bytes E8 AE CB 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 0B 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894abch
        ; Exact mapped bytes E8 92 CB 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 0B 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894ae0h
        ; Exact mapped bytes E8 76 CB 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 0B 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894b04h
        ; Exact mapped bytes E8 5A CB 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 0B 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
