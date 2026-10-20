// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005038DF .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_005038df_005038DF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB D3 FF FF: call 0x500cac
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x503916
        __asm _emit 0x75
        __asm _emit 0x14
        push 403h
        push 5c6db0h
        ; Exact mapped bytes E8 EF 10 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503916
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5038f1
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
