// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584D90 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58584d90_58584D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        push 58965fb8h
        ; Exact mapped bytes FF 15 DC 44 89 58: call dword ptr [0x588944dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 04: je 0x58584db3
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58584db5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}
