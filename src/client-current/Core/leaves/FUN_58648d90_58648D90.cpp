// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648D90 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58648d90_58648D90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        ; Exact mapped bytes E8 4B F3 E3 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        ; Exact mapped bytes E8 3D F3 E3 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 24 E7 FF: call 0x584bb230
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
