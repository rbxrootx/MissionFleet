// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58706DF0 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_58706df0_58706DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58706e0b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 51: jge 0x58706e62
        __asm _emit 0x7d
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 65 F1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a8h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B F1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 128h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 F1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x58706e02
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 18 F1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 02 F1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EC F0 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D6 F0 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
