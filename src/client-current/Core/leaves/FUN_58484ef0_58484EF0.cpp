// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58484EF0 .. +0x211 bytes.
extern "C" __declspec(naked) void FUN_58484ef0_58484EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D ED FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 13 00 00: call 0x58486210
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x13
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
        ; Exact mapped bytes E8 FC FB FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 0F 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 06 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x06
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
        ; Exact mapped bytes E8 BB FB FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC 0F 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 0E 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9D 05 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 64 FB FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 65 0F 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CC 05 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 23 FB FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 24 0F 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8B 05 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 6C 05 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x33
        __asm _emit 0x00
        push 46h
        push 0
        push 58894930h
        ; Exact mapped bytes E8 9E CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 0F 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894954h
        ; Exact mapped bytes E8 82 CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 0F 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 10 00 00: call 0x58486100
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894978h
        ; Exact mapped bytes E8 5C CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 0F 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 5889499ch
        ; Exact mapped bytes E8 40 CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 0F 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e6h
        push 0
        push 588949c0h
        ; Exact mapped bytes E8 21 CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 0E 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e6h
        push 0
        push 588949e4h
        ; Exact mapped bytes E8 02 CF 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 9
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 0E 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
