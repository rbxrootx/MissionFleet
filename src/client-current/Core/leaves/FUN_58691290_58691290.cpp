// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691290 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58691290_58691290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 9E 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9e
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx*4 + 5e4h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 5e4h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB CA EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
