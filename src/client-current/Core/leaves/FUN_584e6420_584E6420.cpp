// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E6420 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_584e6420_584E6420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 94h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 8ch]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 73 09: jae 0x584e6453
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x584e645a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 10h]
        and edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 06: je 0x584e6468
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x584e646c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ret
    }
}
