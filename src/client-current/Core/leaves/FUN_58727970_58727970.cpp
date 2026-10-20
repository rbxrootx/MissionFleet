// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727970 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_58727970_58727970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 DF 92 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 46 1D E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        sub eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 70: jge 0x58727a21
        __asm _emit 0x7d
        __asm _emit 0x70
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 28 1D E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 7E 54: jle 0x58727a21
        __asm _emit 0x7e
        __asm _emit 0x54
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 8C 92 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587279fc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1F: jge 0x58727a21
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 9D 09 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x587279f3
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 F7 FF FF: call 0x587271e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
