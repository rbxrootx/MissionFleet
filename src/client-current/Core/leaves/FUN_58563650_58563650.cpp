// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563650 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_58563650_58563650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 64h
        mov eax, dword ptr [ebp - 4]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 0C: jge 0x5856368e
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        add edx, 0e10h
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0a0h], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x585636b1
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        cdq
        idiv dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a0h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
