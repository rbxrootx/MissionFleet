// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C243 .. +0x9C bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_VCOleCurrency___Z_0045C243() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e9e9h
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
        push 67875ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 C5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 678774h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF C5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC C7 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 60 EE 0E 00: call 0x54b0ef
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 6
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F5 D5 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 678784h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 C5 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0B CA 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4E ED 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xed
        __asm _emit 0x0e
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
