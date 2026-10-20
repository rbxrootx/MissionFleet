// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050C55E .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0050c55e_0050C55E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 2C FF FF: call 0x4ff1f2
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 14 4A 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50c58d
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 23 4A 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E7 2E FF FF: call 0x4ff474
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
