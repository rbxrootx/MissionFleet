// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727A30 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58727a30_58727A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 20 92 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 70: jle 0x58727ac4
        __asm _emit 0x7e
        __asm _emit 0x70
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 85 1C E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 7E 54: jle 0x58727ac4
        __asm _emit 0x7e
        __asm _emit 0x54
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 E9 91 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58727a9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1F: jge 0x58727ac4
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F 9C 09 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x58727a96
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 F7 FF FF: call 0x587271e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
