// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587862A0 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_587862a0_587862A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587862bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 34: jge 0x587862f5
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 FC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E FC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BD: jmp 0x587862b2
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 60h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 18: je 0x58786324
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D FC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 20h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 41 FC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
