// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58737C90 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_58737c90_58737C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED E2 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58737cb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 15: jge 0x58737cd1
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0e4h]
        ; Exact mapped bytes E8 32 8F 03 00: call 0x58770c00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58737cad
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0bch]
        ; Exact mapped bytes E8 63 68 D9 FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 55 68 D9 FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 0ch], edx
        push 588b4798h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C E3 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 E1 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 14h], eax
        push 588b4799h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D E3 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 57 E1 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 1ch], ecx
        push 588b479ah
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FE E2 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 28 E1 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 24h], edx
        push 588b479bh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CF E2 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F9 E0 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 33 E1 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
