// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58685140 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58685140_58685140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a50h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 60 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx*4 + 898h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 898h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 8C EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0xec
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
