// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58553FB0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58553fb0_58553FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 94h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58553fd7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 2F: jae 0x5855400c
        __asm _emit 0x73
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 74 20: je 0x5855400a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 83 FC FF: call 0x5851c360
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x58553fce
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
