// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868E19 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58868e19_58868E19() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push edi
        mov edi, ecx
        push 55h
        mov dword ptr [edi + 8], eax
        add eax, 250h
        push eax
        push edx
        push esi
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], edx
        mov byte ptr [edi + 0ch], bl
        ; Exact mapped bytes E8 28 D1 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58868e58
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 77 81 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
