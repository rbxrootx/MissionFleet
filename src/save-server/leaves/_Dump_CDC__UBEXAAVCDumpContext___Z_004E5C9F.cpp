// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5C9F .. +0x77 bytes.
extern "C" __declspec(naked) void _Dump_CDC__UBEXAAVCDumpContext___Z_004E5C9F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 46 FF FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 6734c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 2B 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E 2D 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 6734d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 2B 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 13 2D 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 6734e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 2B 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 94 2D 04 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        push 6734f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 2B 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2b
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
