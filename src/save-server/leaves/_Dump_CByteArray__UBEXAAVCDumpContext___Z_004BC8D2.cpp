// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC8D2 .. +0xB2 bytes.
extern "C" __declspec(naked) void _Dump_CByteArray__UBEXAAVCDumpContext___Z_004BC8D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 DA 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        push 6744ach
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 6744a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B BF 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 90 C1 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3D BF 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 94 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4bc971
        __asm _emit 0x7e
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bc92c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 3A: jge 0x4bc971
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ecx + edx]
        push eax
        push 6744bch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 6744b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 BE 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 C1 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 BE 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1A C0 06 00: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x4bc923
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 6744c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD BE 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
