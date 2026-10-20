// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587973A0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_587973a0_587973A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587973c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 1A: jge 0x587973e5
        __asm _emit 0x7d
        __asm _emit 0x1a
        push 33h
        push 0
        imul edx, dword ptr [ebp - 4], 47h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 8]
        push ecx
        ; Exact mapped bytes E8 30 5A 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D7: jmp 0x587973bc
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov esp, ebp
        pop ebp
        ret
    }
}
