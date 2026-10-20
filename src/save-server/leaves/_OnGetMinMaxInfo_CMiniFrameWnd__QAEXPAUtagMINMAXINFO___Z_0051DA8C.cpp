// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DA8C .. +0x6F bytes.
extern "C" __declspec(naked) void _OnGetMinMaxInfo_CMiniFrameWnd__QAEXPAUtagMINMAXINFO___Z_0051DA8C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 86 F7 00 00: call 0x52d227
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E 47 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 16 47 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 09 49 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4D E0 00 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F8 48 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 88 E0 00 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D5 47 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA 47 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x47
        __asm _emit 0x01
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
