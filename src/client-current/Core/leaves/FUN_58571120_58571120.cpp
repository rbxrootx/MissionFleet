// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571120 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58571120_58571120() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 2
        ; Exact mapped bytes E8 51 68 F1 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 72 61 F1 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov esp, ebp
        pop ebp
        ret
    }
}
