// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437B30 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00437b30_00437B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov eax, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], cl
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 03 01 00: call 0x447f50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
