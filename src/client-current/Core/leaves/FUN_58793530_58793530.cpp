// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793530 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_58793530_58793530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5879354b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 EA 4C CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4c
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 12 01 00 00: jae 0x58793671
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 44 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 85 74 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x5879366c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x5879366c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 60 44 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x587935ca
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 31 44 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58793601
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58793608
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F3 43 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x43
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 2ch], ecx
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3F 4A CF FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AC F2 FF FF: call 0x58792900
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 47 69 D2 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58793671
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x58793542
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
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
