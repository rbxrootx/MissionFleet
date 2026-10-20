// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58636540 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_58636540_58636540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 F9 6D ED FF: call 0x5850d350
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5863656c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D 52 01 00 00: jge 0x586366c8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 100h]
        ; Exact mapped bytes E8 EC A6 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa6
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 6ch]
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x58636659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 10h], ecx
        push 2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D 66 F1 FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 63 76 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E4 30 F1 FF: call 0x585496c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5C 66 F1 FF: call 0x5854cc50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x66
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0E 07 F1 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 178h]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18ah]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D3 32 F1 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 174h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 6A: jmp 0x586366c3
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 80h]
        ; Exact mapped bytes 75 58: jne 0x586366c3
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 F7 A5 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa5
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 73 75 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4 + 300h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 88 75 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 70 F4 FF: call 0x5857d6f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9B FE FF FF: jmp 0x58636563
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
