// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC3B0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_586ac3b0_586AC3B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 9A DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9a
        __asm _emit 0xdd
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 9A DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 4E 0D 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 6F E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6f
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 09: jne 0x586ac40b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 1A: jmp 0x586ac425
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D 6F E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6f
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 B3 FE FF: call 0x58697820
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0b8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
