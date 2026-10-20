// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517CD6 .. +0x56 bytes.
extern "C" __declspec(naked) void _EndDialog_CPropertySheet__QAEXH_Z_00517CD6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 434h
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 70 25 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B D4 FB FF: call 0x4d5157
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 0D: je 0x517d15
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 11: jmp 0x517d26
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 5
        push 471h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 39 01 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x39
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
