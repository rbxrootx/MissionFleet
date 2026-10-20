// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570C53 .. +0x54 bytes.
extern "C" __declspec(naked) void __1_AFX_OLESYMBOLTABLE__QAE_XZ_00570C53() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x570c6e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 16: jge 0x570c8f
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 96 66 EF FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB D6: jmp 0x570c65
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 09 B8 F5 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
