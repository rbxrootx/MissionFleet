// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A1DA .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0051a1da_0051A1DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 2D: je 0x51a219
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 3f107h
        ; Exact mapped bytes 74 1F: je 0x51a217
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 FA B2 01 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x51a221
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF FE FF FF: call 0x51a100
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
