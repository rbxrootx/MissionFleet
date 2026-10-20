// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049FC23 .. +0x9C bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_VCOleCurrency___Z_0049FC23() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ef09h
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
        push 5cbf84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 4E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 5cbf9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 4E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 50 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 10 CA 0A 00: call 0x54c67f
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 6
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F5 D5 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 5cbfach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 4E 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FB 52 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 FE C8 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc8
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
