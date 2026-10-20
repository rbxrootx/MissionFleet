// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005645E2 .. +0x59 bytes.
extern "C" __declspec(naked) void __1COleCntrFrameWnd__UAE_XZ_005645E2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58023ch
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58b354h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 5B FC FF: call 0x52a1d7
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 D5 F8 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 5B FC FF: call 0x52a13f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ret
    }
}
