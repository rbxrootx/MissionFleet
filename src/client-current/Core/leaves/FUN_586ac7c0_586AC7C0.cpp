// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC7C0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_586ac7c0_586AC7C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ac7db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 74: jge 0x586ac85c
        __asm _emit 0x7d
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC F1 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 F6 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 F1 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        sub eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 F1 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA F6 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B 7C E7 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        sub edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 F1 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3A 7C E7 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x586ac7d2
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
