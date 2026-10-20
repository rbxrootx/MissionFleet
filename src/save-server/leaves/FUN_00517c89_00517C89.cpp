// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517C89 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_00517c89_00517C89() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 428h
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BD 25 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 13: je 0x517cbf
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 466h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 39 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 F5 77 FA FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
