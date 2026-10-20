// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58540090 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58540090_58540090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 FC BF F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2dch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 CA 03 00: call 0x5857cb70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
