// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523723 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00523723_00523723() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FE FF FF: call 0x523590
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E8 D5 6A F8 FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        ; Exact mapped bytes E8 EF 1C 02 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1c
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
