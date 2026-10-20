// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C75F0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_584c75f0_584C75F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 11: je 0x584c761c
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 5ch]
        cmp edx, 0ea60h
        ; Exact mapped bytes 72 0D: jb 0x584c7629
        __asm _emit 0x72
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 5ch], ecx
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x584c762b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}
