// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506A10 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58506a10_58506A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894ccch
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 17 69 34 00: call 0x5884d360
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x69
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
