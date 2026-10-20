// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460F27 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00460f27_00460F27() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 26: je 0x460f61
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 8
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        push eax
        push 0
        push 10000h
        push 8002c001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 62 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x460f63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 73 78 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x78
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
