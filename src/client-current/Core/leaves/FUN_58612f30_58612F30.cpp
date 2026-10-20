// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58612F30 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_58612f30_58612F30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 77 56: ja 0x58612fa1
        __asm _emit 0x77
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 F4 2F 61 58: jmp dword ptr [edx*4 + 0x58612ff4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0x2f
        __asm _emit 0x61
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 0D 6B F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 40: jmp 0x58612fa8
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 1A 05 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2D: jmp 0x58612fa8
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 27 F7 FB FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 1A: jmp 0x58612fa8
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 34 F7 FB FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x58612fa8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        movzx edx, word ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 194h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 17 00 00: call 0x586147a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
