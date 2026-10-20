// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4810 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_585f4810_585F4810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F E6 FD FF: call 0x585d2e30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 87 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C9 FF FF: call 0x585f11d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 AB EA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xab
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 118h]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
