// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A12BB .. +0x9C bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_VCOleDateTime_ATL___Z_004A12BB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57efc9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push 5cc01ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 38 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 5cc034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 38 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 04 3A 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E9 B3 0A 00: call 0x54c6f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 8
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 5D BF FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 5cc044h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 37 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 63 3C 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 66 B2 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
