// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58484D00 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_58484d00_58484D00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D EF FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 14 00 00: call 0x58486210
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x14
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
        ; Exact mapped bytes E8 EC FD FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED 11 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 08 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x08
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
        ; Exact mapped bytes E8 AB FD FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC 11 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 06 10 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D 07 33 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x07
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
        ; Exact mapped bytes E8 54 FD FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 55 11 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BC 07 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
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
        ; Exact mapped bytes E8 13 FD FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 14 11 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7B 07 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5C 07 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 40h], edx
        push -64h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 3D 07 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 44h], eax
        push -64h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1E 07 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x00
        push 46h
        push 0
        push 58894b28h
        ; Exact mapped bytes E8 50 D1 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 11 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894b4ch
        ; Exact mapped bytes E8 34 D1 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 10 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 0
        push 58894b70h
        ; Exact mapped bytes E8 18 D1 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 10 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
