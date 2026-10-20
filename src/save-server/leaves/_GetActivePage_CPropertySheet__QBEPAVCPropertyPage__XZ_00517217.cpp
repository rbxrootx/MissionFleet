// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517217 .. +0x6F bytes.
extern "C" __declspec(naked) void _GetActivePage_CPropertySheet__QBEPAVCPropertyPage__XZ_00517217() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 2e7h
        push 674cach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2D 30 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 2F: je 0x51726b
        __asm _emit 0x74
        __asm _emit 0x2f
        push 0
        push 0
        push 476h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 57 86 FB FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 6378d8h
        ; Exact mapped bytes E8 C2 2F FC FF: call 0x4da225
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 14: jmp 0x51727f
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A 06 00 00: call 0x5178cd
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 09 01 00: call 0x527bd4
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
