// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883291A .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5883291a_5883291A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 30 00 00 00: call 0x5883295b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 14h
        lea edi, [esi + 1ch]
        pop ebx
        push 8
        push 0
        push edi
        ; Exact mapped bytes E8 D5 A4 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        add edi, 8
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58832931
        __asm _emit 0x75
        __asm _emit 0xeb
        and dword ptr [esi + 0bch], ebx
        mov eax, esi
        and dword ptr [esi + 0c0h], ebx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
