// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBA2B .. +0x85 bytes.
extern "C" __declspec(naked) void _Dump_CFileException__UBEXAAVCDumpContext___Z_004FBA2B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A F8 FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c7918h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 90 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7C 21: jl 0x4fba75
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0fh
        ; Exact mapped bytes 73 18: jae 0x4fba75
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx*4 + 5849b8h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 90 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4fba82
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5849f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 90 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        push 5c7924h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 90 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 57 93 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c7934h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 90 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
