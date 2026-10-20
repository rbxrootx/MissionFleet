// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046417E .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0046417e_0046417E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 13bh
        push 67cd04h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C0 60 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x4641bd
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 C2 FE 10 00: call 0x57407a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1F: jmp 0x4641dc
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 0e0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax + 0e0h]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
