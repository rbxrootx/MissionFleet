// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407A64 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00407a64_00407A64() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 44da50h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 B9 62 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x407aa3
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 1A 00 00: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x407aa3
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x407aa5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
