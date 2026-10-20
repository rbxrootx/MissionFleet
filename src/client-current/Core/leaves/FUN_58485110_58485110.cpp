// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485110 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_58485110_58485110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D EB FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 10 00 00: call 0x58486210
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 DC F9 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD 0D 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 04 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x04
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
        ; Exact mapped bytes E8 9B F9 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9C 0D 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F6 0B 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7D 03 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x03
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
        ; Exact mapped bytes E8 44 F9 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 45 0D 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AC 03 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x03
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
        ; Exact mapped bytes E8 03 F9 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 04 0D 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6B 03 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4C 03 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x33
        __asm _emit 0x00
        push 46h
        push 0
        push 58894a08h
        ; Exact mapped bytes E8 7E CD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 0D 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894a2ch
        ; Exact mapped bytes E8 62 CD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 0D 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894a50h
        ; Exact mapped bytes E8 46 CD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 0D 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894a74h
        ; Exact mapped bytes E8 2A CD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 0C 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
