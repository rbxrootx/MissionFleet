// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA7EB .. +0x85 bytes.
extern "C" __declspec(naked) void _Dump_CFileException__UBEXAAVCDumpContext___Z_004DA7EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A FB FF FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 6743e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 E0 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7C 21: jl 0x4da835
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0fh
        ; Exact mapped bytes 73 18: jae 0x4da835
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx*4 + 637538h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 E0 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4da842
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 637574h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 E0 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        push 6743f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 DF 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C7 E2 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        push 674404h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 DF 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
