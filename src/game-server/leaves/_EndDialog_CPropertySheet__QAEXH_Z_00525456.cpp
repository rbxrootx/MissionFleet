// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525456 .. +0x56 bytes.
extern "C" __declspec(naked) void _EndDialog_CPropertySheet__QAEXH_Z_00525456() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 434h
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F0 5C FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 1D FD FF: call 0x4f7227
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 0D: je 0x525495
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 11: jmp 0x5254a6
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 5
        push 471h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 67 01 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
