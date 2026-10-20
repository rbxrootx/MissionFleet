// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B480 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0046b480_0046B480() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 3a4h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 12h
        ; Exact mapped bytes 77 2E: ja 0x46b4ca
        __asm _emit 0x77
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 46b4e4h]
        ; Exact mapped bytes FF 24 95 D0 B4 46 00: jmp dword ptr [edx*4 + 0x46b4d0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0x00
        mov eax, 411h
        ; Exact mapped bytes EB 17: jmp 0x46b4cc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 804h
        ; Exact mapped bytes EB 10: jmp 0x46b4cc
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, 412h
        ; Exact mapped bytes EB 09: jmp 0x46b4cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 404h
        ; Exact mapped bytes EB 02: jmp 0x46b4cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
