// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B4420 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_584b4420_584B4420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 14h], ecx
        push 14h
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 06 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DF 1A FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 06 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E7 27 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 24h], ecx
        push 18h
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 06 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8F 1A FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 1], 0
        mov byte ptr [ebp - 2], 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 16ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 77 46: ja 0x584b4502
        __asm _emit 0x77
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 B4 45 4B 58: jmp dword ptr [edx*4 + 0x584b45b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0x4b
        __asm _emit 0x58
        mov byte ptr [ebp - 1], 1eh
        mov byte ptr [ebp - 2], 1fh
        ; Exact mapped bytes EB 37: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x37
        mov byte ptr [ebp - 1], 20h
        mov byte ptr [ebp - 2], 21h
        ; Exact mapped bytes EB 2D: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov byte ptr [ebp - 1], 22h
        mov byte ptr [ebp - 2], 23h
        ; Exact mapped bytes EB 23: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x23
        mov byte ptr [ebp - 1], 24h
        mov byte ptr [ebp - 2], 25h
        ; Exact mapped bytes EB 19: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x19
        mov byte ptr [ebp - 1], 26h
        mov byte ptr [ebp - 2], 27h
        ; Exact mapped bytes EB 0F: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov byte ptr [ebp - 1], 28h
        mov byte ptr [ebp - 2], 29h
        ; Exact mapped bytes EB 05: jmp 0x584b4507
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x584b45ae
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1e8h]
        mov dword ptr [ebp - 2ch], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 05 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F5 19 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1e8h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 86 19 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1e8h]
        mov dword ptr [ebp - 38h], eax
        movzx ecx, byte ptr [ebp - 2]
        push ecx
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 05 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A2 19 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1e8h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 33 19 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
