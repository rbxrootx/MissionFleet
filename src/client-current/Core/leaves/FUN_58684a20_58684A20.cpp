// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684A20 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_58684a20_58684A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8c8h]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8c8h], edx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 270h]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 898h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 898h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 90 EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 898h]
        xor ecx, 55h
        add ecx, 1
        xor ecx, 55h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 898h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a50h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 898h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BF 66 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 898h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 898h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 92 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 8c8h], 0
        ; Exact mapped bytes 75 62: jne 0x58684b6b
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 138h], 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 01 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 61 F4 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0f4h]
        ; Exact mapped bytes 75 29: jne 0x58684b6b
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a7ch]
        mov dword ptr [ebp - 14h], eax
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 FF DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F6 20 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
