// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004631C8 .. +0x67 bytes.
extern "C" __declspec(naked) void _Dump_CDocObjectServer__MBEXAAVCDumpContext___Z_004631C8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F A9 0D 00: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        push 67cb1ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 67cb0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 56 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 29 59 0C 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 49 56 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        push 67cb30h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 67cb20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 56 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 59 0C 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 22 56 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
