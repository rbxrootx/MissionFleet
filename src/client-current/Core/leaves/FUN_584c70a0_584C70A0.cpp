// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C70A0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_584c70a0_584C70A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 37 FE FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584c70bc
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 B5 34 FE FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF E9 FF FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 0E FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 44 20 FE FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 0E FC FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 93 01 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 57 04 00 00: call 0x584c7580
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 76 20: jbe 0x584c7150
        __asm _emit 0x76
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 ED 32 FE FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 10: jmp 0x584c7160
        __asm _emit 0xeb
        __asm _emit 0x10
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 63 FC FB FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
