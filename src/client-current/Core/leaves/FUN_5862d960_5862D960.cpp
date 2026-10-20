// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862D960 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_5862d960_5862D960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 3D 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3d
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB 3D 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3d
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 13ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9D 3D 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3d
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x5862d9d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D F5 00 00 00: jge 0x5862dad5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 02 BD EF FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8F DE 00 00 00: jg 0x5862dad5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        add eax, dword ptr [ebp - 8]
        cmp eax, 9
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x5862da9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [ecx + edx - 1]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2F 31 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, byte ptr [ecx + 22h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EC 1D E7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [eax + ecx - 1]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D7 30 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 98 84 E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x5862dad0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8B 1D E7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0fch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 61 84 E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 FE FF FF: jmp 0x5862d9cd
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 09 00 00: call 0x5862e490
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
