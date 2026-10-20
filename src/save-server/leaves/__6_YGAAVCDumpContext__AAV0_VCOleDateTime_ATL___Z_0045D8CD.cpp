// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D8CD .. +0x9C bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_VCOleDateTime_ATL___Z_0045D8CD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eaa9h
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
        push 6787f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 AF 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 67880ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 AF 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 22 B1 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 47 D8 0E 00: call 0x54b160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 8
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6B BF FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 67881ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E AF 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 81 B3 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C4 D6 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd6
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
