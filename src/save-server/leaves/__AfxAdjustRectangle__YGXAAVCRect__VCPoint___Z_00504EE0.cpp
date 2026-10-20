// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504EE0 .. +0xA4 bytes.
extern "C" __declspec(naked) void __AfxAdjustRectangle__YGXAAVCRect__VCPoint___Z_00504EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7D 0D: jge 0x504efd
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 26: jmp 0x504f23
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 0E: jle 0x504f16
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x504f1d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 0E: jge 0x504f42
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 26: jmp 0x504f68
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7E 0E: jle 0x504f5b
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 07: jmp 0x504f62
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 D5 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
