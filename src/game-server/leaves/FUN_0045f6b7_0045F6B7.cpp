// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F6B7 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0045f6b7_0045F6B7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x45f6ee
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 8
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        push 0
        push 1
        push 8002c001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 7B 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x45f6f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E6 90 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
