// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736480 .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_58736480_58736480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        push 180h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a0h
        push ecx
        ; Exact mapped bytes E8 3D 69 11 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 0ch
        push 180h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 220h
        push edx
        ; Exact mapped bytes E8 24 69 11 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 0ch], eax
        push 6eh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 E6 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 13 FA D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 14h], ecx
        push 6fh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 E5 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe5
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 F9 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf9
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 58h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 4C 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B6 F9 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 20h], ecx
        push 588b4778h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 10 FB D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 92 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x92
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D1 4B 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B5 4B 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9A 4B 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 34h], edx
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F9 D9 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 38h], edx
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D8 D9 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
