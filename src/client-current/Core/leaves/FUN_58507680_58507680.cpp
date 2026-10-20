// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507680 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58507680_58507680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 AA D2 FF FF: call 0x58504940
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 99 D2 FF FF: call 0x58504940
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 75 09: jne 0x585076b7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585076be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
