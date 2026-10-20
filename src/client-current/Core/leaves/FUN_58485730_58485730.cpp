// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485730 .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_58485730_58485730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D E5 FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 0A 00 00: call 0x58486210
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0a
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
        ; Exact mapped bytes E8 BC F3 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BD 07 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 24 FE 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0x32
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
        ; Exact mapped bytes E8 7B F3 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 07 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 05 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5D FD 32 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0x32
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
        ; Exact mapped bytes E8 24 F3 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 25 07 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8C FD 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0x32
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
        ; Exact mapped bytes E8 E3 F2 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E4 06 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4B FD 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2C FD 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 40h], edx
        push -64h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 0D FD 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0x32
        __asm _emit 0x00
        push 46h
        push 0
        push 58894800h
        ; Exact mapped bytes E8 3F C7 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 07 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894824h
        ; Exact mapped bytes E8 23 C7 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 06 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894848h
        ; Exact mapped bytes E8 07 C7 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 06 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 5889486ch
        ; Exact mapped bytes E8 EB C6 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 06 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
