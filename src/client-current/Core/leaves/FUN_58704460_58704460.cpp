// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58704460 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_58704460_58704460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 8]
        xor ecx, 55h
        ; Exact mapped bytes 0F BF D1: movsx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, edx
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 89 4C 05 F4: mov word ptr [ebp + eax - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xf4
        mov dword ptr [ebp - 14h], 2
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 73 02: jae 0x587044b6
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x587044bc
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 EE CC 12 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4C 15 F4: mov word ptr [ebp + edx - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xf4
        mov eax, 2
        shl eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 73 02: jae 0x587044d8
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x587044de
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 CC CC 12 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 4C 15 F4: mov word ptr [ebp + edx - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xf4
        push 0
        push 6
        lea eax, [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx]
        push eax
        push 8001020ch
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 84 12 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BF 18 D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 17 CB 12 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0x00
        mov esp, ebp
    }
}
