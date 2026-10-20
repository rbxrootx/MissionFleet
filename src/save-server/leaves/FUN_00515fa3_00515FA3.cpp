// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515FA3 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00515fa3_00515FA3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FE FF FF: call 0x515e10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E8 D5 07 F5 FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        ; Exact mapped bytes E8 8F A6 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
