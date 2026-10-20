// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E87C .. +0x6F bytes.
extern "C" __declspec(naked) void _OnGetMinMaxInfo_CMiniFrameWnd__QAEXPAUtagMINMAXINFO___Z_0052E87C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 36 EF 00 00: call 0x53d7c7
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B8 74 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B0 74 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C1 76 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FD D7 00 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B0 76 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 38 D8 00 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F 75 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 74 75 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 1ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
