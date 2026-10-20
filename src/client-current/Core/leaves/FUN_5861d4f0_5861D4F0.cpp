// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D4F0 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_5861d4f0_5861D4F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 8A E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 89 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 89 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A4 89 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 89 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 89 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F7 88 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D8 88 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 28h], ecx
        push 588ae5dfh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F 8A E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A9 88 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 03 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D BC E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 B0 04 00: call 0x586686c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B BC E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 AF 04 00: call 0x586685c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 99 EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x99
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 3A 04 00: call 0x586610f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 99 EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x99
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 39 04 00: call 0x58660ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
