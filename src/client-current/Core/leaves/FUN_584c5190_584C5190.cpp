// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5190 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_584c5190_584C5190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 56 FE FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x584c51be
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 B3 53 FE FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 08 00 00: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 2D FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 39 3F FE FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 2D FC FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 90 20 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 0fh
        ; Exact mapped bytes 76 4B: jbe 0x584c5277
        __asm _emit 0x76
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 67 20 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 37 01 00 00: call 0x584c5390
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 C6 51 FE FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 2C: jmp 0x584c52a3
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FD 00 00 00: call 0x584c5390
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 20 1B FC FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
