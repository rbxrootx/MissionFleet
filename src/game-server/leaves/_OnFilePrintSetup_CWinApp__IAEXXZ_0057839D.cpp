// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057839D .. +0x71 bytes.
extern "C" __declspec(naked) void _OnFilePrintSetup_CWinApp__IAEXXZ_0057839D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5803e2h
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
        sub esp, 0a8h
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        push 14000ch
        push 1
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 4B A8 F5 FF: call 0x4d2c20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 14 FE FF FF: call 0x578202
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 10 B0 F5 FF: call 0x4d3410
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb0
        __asm _emit 0xf5
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
