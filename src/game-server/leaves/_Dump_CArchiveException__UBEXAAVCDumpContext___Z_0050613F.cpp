// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050613F .. +0x6A bytes.
extern "C" __declspec(naked) void _Dump_CArchiveException__UBEXAAVCDumpContext___Z_0050613F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 51 FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c7808h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC E9 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7C 21: jl 0x506189
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 8
        ; Exact mapped bytes 73 18: jae 0x506189
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx*4 + 584978h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 E9 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x506196
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 584998h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 E9 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        push 5c7814h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 E9 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
