// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBABF .. +0x6A bytes.
extern "C" __declspec(naked) void _Dump_CArchiveException__UBEXAAVCDumpContext___Z_004EBABF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 E8 FE FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        push 6742d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C CD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7C 21: jl 0x4ebb09
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 8
        ; Exact mapped bytes 73 18: jae 0x4ebb09
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx*4 + 6374f8h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 CD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4ebb16
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 637518h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 CD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        push 6742e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 CD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcd
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
