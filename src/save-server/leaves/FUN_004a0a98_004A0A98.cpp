// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0A98 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_004a0a98_004A0A98() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x4a0aae
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 03 43 08 00: call 0x524dba
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 41 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E C4 00 00 00: jle 0x4a0b96
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D BD 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 06: jle 0x4a0ae8
        __asm _emit 0x7e
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C0 41 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 44: jge 0x4a0b45
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 41 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 99 BA 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 C7 47 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 BD BB 02 00: call 0x4cc702
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 94 47 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7B 47 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 29 41 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
