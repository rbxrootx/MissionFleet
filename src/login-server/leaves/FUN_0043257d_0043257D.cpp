// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043257D .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_0043257d_0043257D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push esi
        mov esi, 100h
        push edi
        lea eax, [ebp - 104h]
        push esi
        push eax
        push dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 61 00 00 00: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        mov eax, esi
        sub eax, edi
        cmp eax, 2
        ; Exact mapped bytes 76 18: jbe 0x4325c3
        __asm _emit 0x76
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 7A B7 FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        test edi, edi
        setg al
        ; Exact mapped bytes EB 38: jmp 0x4325fb
        __asm _emit 0xeb
        __asm _emit 0x38
        push ebx
        mov edi, esi
        mov ecx, dword ptr [ebp - 4]
        add edi, esi
        push edi
        lea eax, [edi - 1]
        push eax
        ; Exact mapped bytes E8 A0 B9 FF FF: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 00 00 00: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov eax, edi
        sub eax, ebx
        cmp eax, 2
        ; Exact mapped bytes 7E DD: jle 0x4325c6
        __asm _emit 0x7e
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        push -1
        ; Exact mapped bytes E8 D1 B9 FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        test ebx, ebx
        setg al
        pop ebx
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
