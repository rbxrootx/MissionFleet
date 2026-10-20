// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A4E2 .. +0x59 bytes.
extern "C" __declspec(naked) void __1COleCntrFrameWnd__UAE_XZ_0056A4E2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fd1ch
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
        mov dword ptr [eax], 63d97ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 73 FA FF: call 0x5118f6
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 55 F6 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 73 FA FF: call 0x51183f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x73
        __asm _emit 0xfa
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
