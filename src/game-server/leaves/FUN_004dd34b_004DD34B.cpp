// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD34B .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_004dd34b_004DD34B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x4dd36b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        or al, 10h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 06: jmp 0x4dd371
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DF 12 00 00: call 0x4de66e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
