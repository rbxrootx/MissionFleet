// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856EFF0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5856eff0_5856EFF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5856f00b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 3A: jge 0x5856f04b
        __asm _emit 0x7d
        __asm _emit 0x3a
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 130h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5856f049
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 A5 1B 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1b
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5856f049
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5856f04d
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B7: jmp 0x5856f002
        __asm _emit 0xeb
        __asm _emit 0xb7
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
